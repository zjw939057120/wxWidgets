//
// Created by Administrator on 2025/1/28.
//

#include "application.h"
#include "MyProjectBase.h"

class MyApp : public wxApp {
public:
    virtual bool OnInit() wxOVERRIDE;
};

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit() {
    if (!wxApp::OnInit())
        return false;

    MyFrame1 *frame = new MyFrame1(NULL);

    frame->Show(true);
    return true;
}
