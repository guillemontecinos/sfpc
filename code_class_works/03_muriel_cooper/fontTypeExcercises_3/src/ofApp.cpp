#include "ofApp.h"
int numStrings = 100;

//--------------------------------------------------------------
void ofApp::setup(){
    font.load("helvetica.otf", 50);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    numStrings = ofMap(mouseX,0,ofGetWidth(),0,100);
    ofBackground(0);
    
    string myString = "SECTOR\n\n COORDILLERA";
    
    ofRectangle rect = font.getStringBoundingBox(myString, 0,0);
    
    cam.begin();
    
    for (int i = 0; i < numStrings; i++){
        ofPushMatrix();
        ofRotateZ(i*360/numStrings);
        ofSetColor(230, 184, 51,ofMap(i,0,numStrings,240,50));
        font.drawString(myString,20,0);// -rect.width *0.5, -rect.height*0.5);
        ofPopMatrix();
    }
    
    cam.end();
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
