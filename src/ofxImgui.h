#pragma once

#include "ofMain.h"
#include "imgui.h"

namespace ui = ImGui;

class ofxImgui
{
  public:

    ofxImgui();
   ~ofxImgui();

    static ofTexture fontTexture;

    void setup(ofEventArgs&);
    void begin();
    void end();

    void onKeyPressed(ofKeyEventArgs& event);
    void onKeyReleased(ofKeyEventArgs& event);
    void onMousePressed(ofMouseEventArgs& event);
    void onMouseReleased(ofMouseEventArgs& event);
    void onMouseScrolled(ofMouseEventArgs& event);
    void onWindowResized(ofResizeEventArgs& window);

    static void renderDrawLists(ImDrawData * draw_data);

    static const char * getClipboardString();
    static void setClipboardString(const char * text);

    bool createDeviceObjects();

    ImGuiIO * io;
    ImGuiStyle * style;

  private:

    float last_time;
};
