Xcode project templates for openFrameworks
==========================================

An Xcode 4 project template for creating applications using the [openFrameworks](http://openFrameworks.cc/) C++ library.


Installation
------------

Copy the entire `openFrameworks` folder into your user Xcode templates directory, creating the `Templates` and `Project Templates` directories if either does not exist:
	
	~/Library/Developer/Xcode/Templates/Project Templates
	

Usage
------------

#### OF_PATH

When creating a new project you can change the path to your local installation of the openFrameworks code base. This can be either an absolute path such as `$HOME/Code/openFrameworks` or a project relative path such as `../../..` which assumes the project is create in the `apps/yourApps/{project_name}` sub-directory of your local openFrameworks code base. 

#### GLUT

With the current template system in Xcode 4 it is not possible to add external frameworks as part of a project template. Since openFrameworks uses a modified version of GLUT this must be added manually to the project and build product. 

1. Click **+** in the **Linked Libraries and Frameworks** pane of the **Summary** view and add the version of GLUT from the openFrameworks code base, `{path_to_openframeworks}/libs/glut/lib/osx/GLUT.framework`
The `GLUT.framework` will appear at the top of the *Project Navigator* pane and can be dragged into the Frameworks, or any other group within your project.

2. Select **Build Phases** view for the project target and drag the `GLUT.framework` from the *Project Navigator* pane to the **Copy Files** panel.



License
-------

This code is provided under the terms of [The MIT license](http://www.opensource.org/licenses/mit-license.php).
