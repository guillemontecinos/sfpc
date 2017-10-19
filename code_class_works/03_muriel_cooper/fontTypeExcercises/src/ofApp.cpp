#include "ofApp.h"

bool pressed = false;

//--------------------------------------------------------------
void ofApp::setup(){
    myFont.load("helvetica.otf",100);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    
    ofSetColor(255);
    
    cam.begin();
    
    ofPushMatrix();
        //ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
        ofRectangle rect = myFont.getStringBoundingBox("hello", 0,0);
        ofRotateZ(ofGetElapsedTimef()*30);
        pressed = false;
        ofRotateY(mouseX*.5);
        ofRotateX(mouseY*.5);
        myFont.drawString("hello",-rect.width/2,rect.height/2);
        //ofNoFill();
        //ofDrawRectangle(-rect.width/2,rect.height/2,rect.width,-rect.height);
        //ofDrawLine(-rect.width/2,0,rect.width/2,0);
        //ofSetColor(255,0,0);
        //ofDrawCircle(0, 0, 10);
    ofPopMatrix();
    
    cam.end();
    
    ofSetColor(255,0,0);
    
    
    
    
    //ofNoFill();
    //ofDrawRectangle(rect);
    cout << rect << endl;
    
    
 
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
