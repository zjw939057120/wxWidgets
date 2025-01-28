//
// Created by Administrator on 2025/1/28.
//

#include "MyApp.h"
#include "MyProject.h"

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit() {
    if (!wxApp::OnInit())
        return false;

    MainFrame *frame = new MainFrame(parent);

    frame->Show(true);
    return true;
}
