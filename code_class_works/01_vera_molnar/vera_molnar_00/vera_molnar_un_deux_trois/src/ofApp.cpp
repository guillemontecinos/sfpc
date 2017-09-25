#include "ofApp.h"

//global variables
int numBlocks = 27;
int anchoScreen;
float alpha;
int anchoLinea = 8;



//--------------------------------------------------------------
void ofApp::setup(){
    anchoScreen = ofGetWidth();
    alpha = .98*anchoScreen/numBlocks;
    
    //for debug
    //cout << alpha << endl;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    ofSeedRandom(0);
    //ofEnableAntiAliasing();
    //ofEnableSmoothing();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    ofSetColor(0);
    ofSetLineWidth(anchoLinea);
    

    
    for (int i = 0; i < numBlocks; i++){
        for (int j = 0; j < numBlocks; j++){
            
            
            ofPushMatrix();
            //take this points as the center of each block. then
            
            //ofPoint pos = ofPoint((0.5+i)*alpha,(0.5+j)*alpha);
            ofPoint pos = ofPoint((0.5+i)*alpha + anchoScreen*.01 ,(0.5+j)*alpha + anchoScreen*.01);
            //ofDrawCircle(pos.x, pos.y,1);
            
            ofTranslate(pos.x, pos.y);
            
            ofRotateZ(ofRandom(-180,180));
            if (j <= 8) {
                ofPoint a =  ofPoint(anchoLinea/2-alpha/2,0);
                ofPoint b =  ofPoint(alpha/2-anchoLinea/2,0);
                ofDrawLine(a,b);
                ofDrawCircle(a.x, a.y, anchoLinea/2);
                ofDrawCircle(b.x, b.y, anchoLinea/2);
            } else if (8 < j && j <= 17) {
                ofPoint a =  ofPoint(anchoLinea/2-alpha/2,alpha/3);
                ofPoint b =  ofPoint(alpha/2-anchoLinea/2,alpha/3);
                ofPoint c =  ofPoint(anchoLinea/2-alpha/2,-alpha/3);
                ofPoint d =  ofPoint(alpha/2-anchoLinea/2,-alpha/3);
                ofDrawLine(a,b);
                ofDrawLine(c,d);
                ofDrawCircle(a.x, a.y, anchoLinea/2);
                ofDrawCircle(b.x, b.y, anchoLinea/2);
                ofDrawCircle(c.x, c.y, anchoLinea/2);
                ofDrawCircle(d.x, d.y, anchoLinea/2);
            } else {
                ofPoint a =  ofPoint(anchoLinea/2-alpha/2,alpha/2);
                ofPoint b =  ofPoint(alpha/2-anchoLinea/2,alpha/2);
                ofPoint c =  ofPoint(anchoLinea/2-alpha/2,0);
                ofPoint d =  ofPoint(alpha/2-anchoLinea/2,0);
                ofPoint e =  ofPoint(anchoLinea/2-alpha/2,-alpha/2);
                ofPoint f =  ofPoint(alpha/2-anchoLinea/2,-alpha/2);
                ofDrawLine(a,b);
                ofDrawLine(c,d);
                ofDrawLine(e,f);
                ofDrawCircle(a.x, a.y, anchoLinea/2);
                ofDrawCircle(b.x, b.y, anchoLinea/2);
                ofDrawCircle(c.x, c.y, anchoLinea/2);
                ofDrawCircle(d.x, d.y, anchoLinea/2);
                ofDrawCircle(d.x, d.y, anchoLinea/2);
                ofDrawCircle(e.x, e.y, anchoLinea/2);
            }
            
            
            ofPopMatrix();
            
            
            
            
        }
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
