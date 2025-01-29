//
// Created by Administrator on 2025/1/28.
//

#include "MyProject.h"
#include "MyApp.h"


MainFrame::MainFrame(wxWindow *parent) : MainFrameBase(parent) {
    SetIcon(wxICON(sample));
    this->SetBackgroundColour(*wxWHITE);
    m_MainFrame = this;
}

MainFrame::~MainFrame() {
}

void MainFrame::m_menuItemFunctionOnMenuSelection(wxCommandEvent &event) {
    m_FunctionFrame = new FunctionFrame(m_MainFrame);
    m_FunctionFrame->Show(true);
}

void MainFrame::m_menuItemQueueOnMenuSelection(wxCommandEvent &event) {
    m_QueueFrame = new QueueFrame(m_MainFrame);
    m_QueueFrame->Show(true);

}

void MainFrame::m_menuItemSampleOnMenuSelection(wxCommandEvent &event) {
    m_SampleFrame = new SampleFrame(m_MainFrame);
    m_SampleFrame->Show(true);
}

void MainFrame::m_menuItemRecordOnMenuSelection(wxCommandEvent &event) {
    m_RecordFrame = new RecordFrame(m_MainFrame);
    m_RecordFrame->Show(true);
}

void MainFrame::m_menuItemExitOnMenuSelection(wxCommandEvent &event) {
    Close(true);
}

void MainFrame::m_menuItemCutOnMenuSelection(wxCommandEvent &event) {
    event.Skip();
}

void MainFrame::m_menuItemCopyOnMenuSelection(wxCommandEvent &event) {
    event.Skip();
}

void MainFrame::m_menuItemPasteOnMenuSelection(wxCommandEvent &event) {
    event.Skip();
}

void MainFrame::m_menuItemAdjustOnMenuSelection(wxCommandEvent &event) {
    m_AdjustFrame = new AdjustFrame(m_MainFrame);
    m_AdjustFrame->Show(true);
}

void MainFrame::m_menuItemManualOnMenuSelection(wxCommandEvent &event) {
    m_ManualFrame = new ManualFrame(m_MainFrame);
    m_ManualFrame->Show(true);
}

void MainFrame::m_menuItemHelpOnMenuSelection(wxCommandEvent &event) {
    m_HelpFrame = new HelpFrame(m_MainFrame);
    m_HelpFrame->Show(true);
}

void MainFrame::m_menuItemAboutOnMenuSelection(wxCommandEvent &event) {
    m_AboutFrame = new AboutFrame(m_MainFrame);
    m_AboutFrame->Show(true);
}

FunctionFrame::FunctionFrame(wxWindow *parent) : FunctionFrameBase(parent) {
    SetIcon(wxICON(sample));
    this->SetBackgroundColour(*wxWHITE);
}

FunctionFrame::~FunctionFrame() {
}

QueueFrame::QueueFrame(wxWindow *parent) : QueueFrameBase(parent) {
    SetIcon(wxICON(sample));
    this->SetBackgroundColour(*wxWHITE);
}

QueueFrame::~QueueFrame() {
}

SampleFrame::SampleFrame(wxWindow *parent) : SampleFrameBase(parent) {
    SetIcon(wxICON(sample));
    this->SetBackgroundColour(*wxWHITE);
}

SampleFrame::~SampleFrame() {
}

RecordFrame::RecordFrame(wxWindow *parent) : RecordFrameBase(parent) {
    SetIcon(wxICON(sample));
    this->SetBackgroundColour(*wxWHITE);
}

RecordFrame::~RecordFrame() {
}

AdjustFrame::AdjustFrame(wxWindow *parent) : AdjustFrameBase(parent) {
    SetIcon(wxICON(sample));
    this->SetBackgroundColour(*wxWHITE);
}

AdjustFrame::~AdjustFrame() {
}

ManualFrame::ManualFrame(wxWindow *parent) : ManualFrameBase(parent) {
    SetIcon(wxICON(sample));
    this->SetBackgroundColour(*wxWHITE);
}

ManualFrame::~ManualFrame() {
}

HelpFrame::HelpFrame(wxWindow *parent) : HelpFrameBase(parent) {
    SetIcon(wxICON(sample));
    this->SetBackgroundColour(*wxWHITE);
}

HelpFrame::~HelpFrame() {
}

AboutFrame::AboutFrame(wxWindow *parent) : AboutFrameBase(parent) {
    SetIcon(wxICON(sample));
    this->SetBackgroundColour(*wxWHITE);
}

AboutFrame::~AboutFrame() {
}

