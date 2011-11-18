/*
 *  ___FILENAME___
 *  ___PROJECTNAME___
 *
 *  Created by ___FULLUSERNAME___ on ___DATE___
 *  Copyright ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
 *
 */
 
#include "cinder/app/AppBasic.h"

using namespace ci;
using namespace ci::app;


class ___FILEBASENAMEASIDENTIFIER___ : public AppBasic {
  
  public:	
	void setup();
	void update();
	void draw();
	
};


void ___FILEBASENAMEASIDENTIFIER___::setup( )
{
	
}


void ___FILEBASENAMEASIDENTIFIER___::update( )
{
	
}


void ___FILEBASENAMEASIDENTIFIER___::draw( )
{
	gl::clear();
}


// this line tells Cinder to actually create the application
CINDER_APP_BASIC( ___FILEBASENAMEASIDENTIFIER___, RendererGl );
