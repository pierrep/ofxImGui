#include "ofMain.h"
#include "ofApp.h"

int main()
{

#if defined(TARGET_OPENGLES)
  ofGLESWindowSettings settings;
  settings.setSize(1280, 720);
  settings.setGLESVersion(2);
  ofCreateWindow(settings);
#else
    ofGLFWWindowSettings settings;
    settings.setSize(1280, 720);
    settings.setGLVersion(3,2);
    ofCreateWindow(settings);
//  ofSetupOpenGL(1280, 720, OF_WINDOW);
#endif

ofRunApp( new ofApp());

}

