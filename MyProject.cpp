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
    if (m_FunctionFrame != NULL) {
        m_FunctionFrame->Show(true);
        m_FunctionFrame->Raise();
    } else {
        m_FunctionFrame = new FunctionFrame(m_MainFrame);
        m_FunctionFrame->Show(true);
    };
}

void MainFrame::m_menuItemQueueOnMenuSelection(wxCommandEvent &event) {
    if (m_QueueFrame != NULL) {
        m_QueueFrame->Show(true);
        m_QueueFrame->Raise();
    } else {
        m_QueueFrame = new QueueFrame(m_MainFrame);
        m_QueueFrame->Show(true);
    }

}

void MainFrame::m_menuItemSampleOnMenuSelection(wxCommandEvent &event) {
    if (m_SampleFrame != NULL) {
        m_SampleFrame->Show(true);
        m_SampleFrame->Raise();
    } else {
        m_SampleFrame = new SampleFrame(m_MainFrame);
        m_SampleFrame->Show(true);
    }
}

void MainFrame::m_menuItemRecordOnMenuSelection(wxCommandEvent &event) {
    if (m_RecordFrame != NULL) {
        m_RecordFrame->Show(true);
        m_RecordFrame->Raise();
    } else {
        m_RecordFrame = new RecordFrame(m_MainFrame);
        m_RecordFrame->Show(true);
    }
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
    if (m_AdjustFrame != NULL) {
        m_AdjustFrame->Show(true);
        m_AdjustFrame->Raise();
    } else {
        m_AdjustFrame = new AdjustFrame(m_MainFrame);
        m_AdjustFrame->Show(true);
    }
}

void MainFrame::m_menuItemManualOnMenuSelection(wxCommandEvent &event) {
    if (m_ManualFrame != NULL) {
        m_ManualFrame->Show(true);
        m_ManualFrame->Raise();
    } else {
        m_ManualFrame = new ManualFrame(m_MainFrame);
        m_ManualFrame->Show(true);
    }
}

void MainFrame::m_menuItemHelpOnMenuSelection(wxCommandEvent &event) {
    if (m_HelpFrame != NULL) {
        m_HelpFrame->Show(true);
        m_HelpFrame->Raise();
    } else {
        m_HelpFrame = new HelpFrame(m_MainFrame);
        m_HelpFrame->Show(true);
    }

}

void MainFrame::m_menuItemAboutOnMenuSelection(wxCommandEvent &event) {
    m_AboutFrame = new AboutFrame(m_MainFrame);
    if (m_AboutFrame != NULL) {
        m_AboutFrame->Show(true);
        m_AboutFrame->Raise();
    } else {
        m_AboutFrame = new AboutFrame(m_MainFrame);
        m_AboutFrame->Show(true);
    }
}

FunctionFrame::FunctionFrame(wxWindow *parent) : FunctionFrameBase(parent) {
    SetIcon(wxICON(sample));
    this->SetBackgroundColour(*wxWHITE);
    m_MainFrame = dynamic_cast<MainFrame *>(parent);
}

FunctionFrame::~FunctionFrame() {
}

void FunctionFrame::FunctionFrameBaseOnClose(wxCloseEvent &event) {
    FunctionFrameBase::FunctionFrameBaseOnClose(event);
    m_MainFrame->m_FunctionFrame = NULL;
}

QueueFrame::QueueFrame(wxWindow *parent) : QueueFrameBase(parent) {
    SetIcon(wxICON(sample));
    this->SetBackgroundColour(*wxWHITE);
    m_MainFrame = dynamic_cast<MainFrame *>(parent);
}

QueueFrame::~QueueFrame() {
}

void QueueFrame::QueueFrameBaseOnClose(wxCloseEvent &event) {
    QueueFrameBase::QueueFrameBaseOnClose(event);
    m_MainFrame->m_QueueFrame = NULL;
}

SampleFrame::SampleFrame(wxWindow *parent) : SampleFrameBase(parent) {
    SetIcon(wxICON(sample));
    this->SetBackgroundColour(*wxWHITE);
    m_MainFrame = dynamic_cast<MainFrame *>(parent);
}

SampleFrame::~SampleFrame() {
}

void SampleFrame::SampleFrameBaseOnClose(wxCloseEvent &event) {
    SampleFrameBase::SampleFrameBaseOnClose(event);
    m_MainFrame->m_SampleFrame = NULL;
}

RecordFrame::RecordFrame(wxWindow *parent) : RecordFrameBase(parent) {
    SetIcon(wxICON(sample));
    this->SetBackgroundColour(*wxWHITE);
    m_MainFrame = dynamic_cast<MainFrame *>(parent);
}

RecordFrame::~RecordFrame() {
}

void RecordFrame::RecordFrameBaseOnClose(wxCloseEvent &event) {
    RecordFrameBase::RecordFrameBaseOnClose(event);
    m_MainFrame->m_RecordFrame = NULL;
}

AdjustFrame::AdjustFrame(wxWindow *parent) : AdjustFrameBase(parent) {
    SetIcon(wxICON(sample));
    this->SetBackgroundColour(*wxWHITE);
    m_MainFrame = dynamic_cast<MainFrame *>(parent);
}

AdjustFrame::~AdjustFrame() {
}

void AdjustFrame::AdjustFrameBaseOnClose(wxCloseEvent &event) {
    AdjustFrameBase::AdjustFrameBaseOnClose(event);
    m_MainFrame->m_AdjustFrame = NULL;
}

ManualFrame::ManualFrame(wxWindow *parent) : ManualFrameBase(parent) {
    SetIcon(wxICON(sample));
    this->SetBackgroundColour(*wxWHITE);
    m_MainFrame = dynamic_cast<MainFrame *>(parent);
}

ManualFrame::~ManualFrame() {
}

void ManualFrame::ManualFrameBaseOnClose(wxCloseEvent &event) {
    ManualFrameBase::ManualFrameBaseOnClose(event);
    m_MainFrame->m_ManualFrame = NULL;
}

HelpFrame::HelpFrame(wxWindow *parent) : HelpFrameBase(parent) {
    SetIcon(wxICON(sample));
    this->SetBackgroundColour(*wxWHITE);
    m_MainFrame = dynamic_cast<MainFrame *>(parent);
}

HelpFrame::~HelpFrame() {
}

void HelpFrame::HelpFrameBaseOnClose(wxCloseEvent &event) {
    HelpFrameBase::HelpFrameBaseOnClose(event);
    m_MainFrame->m_HelpFrame = NULL;
}

AboutFrame::AboutFrame(wxWindow *parent) : AboutFrameBase(parent) {
    SetIcon(wxICON(sample));
    this->SetBackgroundColour(*wxWHITE);
    m_MainFrame = dynamic_cast<MainFrame *>(parent);
}

AboutFrame::~AboutFrame() {
}

void AboutFrame::AboutFrameBaseOnClose(wxCloseEvent &event) {
    AboutFrameBase::AboutFrameBaseOnClose(event);
    m_MainFrame->m_AboutFrame = NULL;
}
