#include "ofApp.h"
float timeCounter = 0;
float radius = 200;
float x = 0;
float y = 0;
float phi = 0;
int numCircles = 100;

//--------------------------------------------------------------
void ofApp::setup(){
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    timeCounter = ofGetElapsedTimef();
    
    
    for (int i = 0; i < numCircles; i++) {
        ofPushMatrix();
        phi = 2 * PI / numCircles;
        radius = ofMap(sin(5*timeCounter + i*PI/2),-1,1,100,200);
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
        x = radius * cos(1.5*timeCounter + i*phi);
        y = radius * sin(1.5*timeCounter + i*phi);
        
        // ofSetColor(ofMap(sin(5*timeCounter + i*PI/2),-1,1,0,255));
        ofDrawCircle(x, y, 5);
        ofPopMatrix();
    }
    
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
