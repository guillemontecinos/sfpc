#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    image.load("guille.jpeg");
    image.load("guille_face.png");
//    image.load("gotowash.jpg");
//    image.load("horse.jpg");
    image.setImageType(OF_IMAGE_GRAYSCALE);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
//    image.draw(image.getWidth(),0);
    unsigned char * data = image.getPixels().getData(); //'*' means a pointer, creates an alias which links back yo a heavy file. is direct access to memory (cool c++ feature)
    for (int i = 0; i < image.getWidth(); i += 10) {
        for (int j = 0; j < image.getHeight(); j += 10) {
            int index = j*image.getWidth() + i;
            int brightness = data[index];
            ofSetColor(brightness);
            ofDrawCircle(i,j,5);
//            ofDrawCircle(i,j,ofMap(brightness,0,255,0,5));
        }
    }
    cout << image.getWidth() << endl;
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
