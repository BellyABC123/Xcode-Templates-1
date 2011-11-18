/*
 *  ___FILENAME___
 *  ___PROJECTNAME___
 *
 *  Created by ___FULLUSERNAME___ on ___DATE___
 *  Copyright ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
 *
 */

#include "ofMain.h"
#include "ofAppGlutWindow.h"
#include "___PACKAGENAMEASIDENTIFIER___.h"


int main( ) {
	
	// Setup the GL context
    ofAppGlutWindow window;
    
    // Sets up the window aspect and mode
    // screenMode [ OF_WINDOW | OF_FULLSCREEN | OF_GAME_MODE ]
	ofSetupOpenGL( &window, 1024, 768, OF_WINDOW );
	
	// Begins the openGL cycle of the application
	ofRunApp( new ___PACKAGENAMEASIDENTIFIER___() );
}
