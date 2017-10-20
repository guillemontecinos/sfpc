#include "ofMain.h"
#include "ofApp.h"

//Guillermo Montecinos
//Setp. 26th
//This sketch was ment for experimenting with sin function

//========================================================================
int main( ){
	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
