#include "ofApp.h"
string myString = "a";
int pixPix = 13;

//--------------------------------------------------------------
void ofApp::setup(){
    //    image.load("guille.jpeg");
    image.load("guille_face.png");
    //    image.load("gotowash.jpg");
    //    image.load("horse.jpg");
    image.setImageType(OF_IMAGE_GRAYSCALE);
    font.load("helvetica.otf",(int) pixPix*.9);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    ofRectangle rect = font.getStringBoundingBox(myString, 0, 0);
    unsigned char * data = image.getPixels().getData();
    for (int i = 0; i < image.getWidth(); i += pixPix) {
        for (int j = 0; j < image.getHeight(); j += pixPix) {
            int index = j*image.getWidth() + i;
            int brightness = data[index];
            ofSetColor(brightness);
//            ofDrawCircle(i,j,5);
            ofPushMatrix();
            ofTranslate(i,j);
//            font.drawString(myString,0,0);
            font.drawString(myString,0,rect.getHeight());
            ofPopMatrix();
        }
    }
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    myString = key;
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
