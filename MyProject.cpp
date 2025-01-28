//
// Created by Administrator on 2025/1/28.
//

#include "MyProject.h"

MainFrame::MainFrame(wxWindow *parent) : MainFrameBase(parent) {
    SetIcon(wxICON(sample));
}

MainFrame::~MainFrame() {
}

FunctionFrame::FunctionFrame(wxWindow *parent) : FunctionFrameBase(parent) {
    SetIcon(wxICON(sample));
}

FunctionFrame::~FunctionFrame() {
}

QueueFrame::QueueFrame(wxWindow *parent) : QueueFrameBase(parent) {
    SetIcon(wxICON(sample));
}

QueueFrame::~QueueFrame() {
}

AdjustFrame::AdjustFrame(wxWindow *parent) : AdjustFrameBase(parent) {
    SetIcon(wxICON(sample));
}

AdjustFrame::~AdjustFrame() {
}

AboutFrame::AboutFrame(wxWindow *parent) : AboutFrameBase(parent) {
    SetIcon(wxICON(sample));
}

AboutFrame::~AboutFrame() {
}

HelpFrame::HelpFrame(wxWindow *parent) : HelpFrameBase(parent) {
    SetIcon(wxICON(sample));
}

HelpFrame::~HelpFrame() {
}
