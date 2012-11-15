import SimpleOpenNI.*; 
import processing.serial.*;
Serial myPort;
SimpleOpenNI kinect;
import ddf.minim.*;
Minim minim;
AudioPlayer player;
ArrayList<PVector> handPositions; 
PVector currentHand; 
PVector previousHand;

void setup(){
 size(640,480);
kinect = new SimpleOpenNI(this);
kinect.setMirror(true);
kinect.enableDepth();
kinect.enableGesture();
kinect.enableHands();
kinect.addGesture("Wave");
kinect.addGesture("Click");
  kinect.enableUser(SimpleOpenNI.SKEL_PROFILE_NONE);
handPositions = new ArrayList();
stroke(255,0,0);
strokeWeight(2);
println(Serial.list());
myPort= new Serial(this, Serial.list()[4], 9600);
    minim = new Minim(this);
  // and load the stayin alive mp3 file
  player = minim.loadFile("stayin2.mp3");
  
  
}


void draw(){
kinect.update();
image(kinect.depthImage(), 0,0);
IntVector userList = new IntVector();
kinect.getUsers(userList);

//for (int i = 0; i < userList.size(); i++){
 if (userList.size() > 0) {
  int userId = userList.get(0); 
  PVector position = new PVector();
  kinect.getCoM(userId, position);
  kinect.convertRealWorldToProjective(position,position);
  fill(255,0,0);
  ellipse(position.x, position.y, 25,25);

float k = map(int(position.x), 0, 640, 1,20);  
  myPort.write(int(k)); 

 //println(position.x);


}

for (int i = 1; i < handPositions.size(); i++){
 currentHand =  handPositions.get(i);
 previousHand = handPositions.get(i-1);
}
  
  

  
}


void onCreateHands(int handId, PVector position, float time){
kinect.convertRealWorldToProjective(position,position);  
  handPositions.add(position);
  
}
void updateHands(int handId, PVector position, float time){
kinect.convertRealWorldToProjective(position,position);  
  handPositions.add(position);
  
}


void onDestroyHands(int handId, float time){

  handPositions.clear();
  kinect.addGesture("Wave");
  kinect.addGesture("Click");
 
}
void onRecognizeGesture(String strGesture, PVector idPosition, PVector endPosition){
 

  kinect.startTrackingHands(endPosition); 
// println(strGesture);

  if (strGesture.equals("Wave")){
kinect.removeGesture("Wave");
 myPort.write(0);
 println(strGesture);
  }else if (strGesture.equals("Click")){
kinect.removeGesture("Click");
    myPort.write(22); 
     println(strGesture);
   player.play();  
 //mp3cut.net  
   player = minim.loadFile("stayin2.mp3");
  }
}






