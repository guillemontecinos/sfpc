#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    image.load("gotowash.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    

//detroit!===============================================!!!!!!!
    unsigned char * data = image.getPixels().getData(); //'*' means a pointer, creates an alias which links back yo a heavy file. is direct access to memory (cool c++ feature)
    for (int i = 0; i < image.getWidth(); i += 10) {
        for (int j = 0; j < image.getHeight(); j += 10) {
            int index = j*image.getWidth() + i;
            int brightness = data[index];
            ofDrawCircle(i,j,ofMap(brightness,0,255,0,5));
        }
        
    }

//detroit!===============================================!!!!!!!

    
//DisneyLand way===============================================
//    ofBackground(0);
//    //ofSetColor();
//    //image.draw(0,0);
//    ofSetColor(255);
//
//    for (int i = 0; i < image.getWidth(); i += 10) {
//        for (int j = 0; j < image.getHeight(); j += 10) {
//            ofColor c = image.getColor(i,j);
//            float bright = c.getBrightness();
//            //cout << bright << endl;
//            float radius = ofMap(bright,0,255,0,5);
//            //ofDrawCircle(i + image.getWidth(),j,radius);
//
//            ofPushMatrix();
//                ofTranslate(i, j);
//                ofRotateZ(ofMap(bright,0,255,0,mouseX));
//                ofLine(-5,0,5,0);
//                //ofDrawRectangle(0,0,10,1);
//            ofPopMatrix();
//
//        }
//    }
//DisneyLand way===============================================
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
