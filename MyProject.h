//
// Created by Administrator on 2025/1/28.
//

#ifndef APP_MYPROJECT_H
#define APP_MYPROJECT_H

#include "MyProjectBase.h"


class MainFrame : public MainFrameBase {
public:

    MainFrame(wxWindow *parent);

    ~MainFrame();

protected:
    void m_menuItemFunctionOnMenuSelection(wxCommandEvent &event) wxOVERRIDE;

    void m_menuItemQueueOnMenuSelection(wxCommandEvent &event) wxOVERRIDE;

    void m_menuItemSampleOnMenuSelection(wxCommandEvent &event) wxOVERRIDE;

    void m_menuItemRecordOnMenuSelection(wxCommandEvent &event) wxOVERRIDE;

    void m_menuItemExitOnMenuSelection(wxCommandEvent &event) wxOVERRIDE;

    void m_menuItemCutOnMenuSelection(wxCommandEvent &event) wxOVERRIDE;

    void m_menuItemCopyOnMenuSelection(wxCommandEvent &event) wxOVERRIDE;

    void m_menuItemPasteOnMenuSelection(wxCommandEvent &event) wxOVERRIDE;

    void m_menuItemManualOnMenuSelection(wxCommandEvent &event) wxOVERRIDE;

    void m_menuItemAdjustOnMenuSelection(wxCommandEvent &event) wxOVERRIDE;

    void m_menuItemHelpOnMenuSelection(wxCommandEvent &event) wxOVERRIDE;

    void m_menuItemAboutOnMenuSelection(wxCommandEvent &event) wxOVERRIDE;

public:
    wxFrame *m_MainFrame = NULL;
    wxFrame *m_FunctionFrame = NULL;
    wxFrame *m_QueueFrame = NULL;
    wxFrame *m_SampleFrame = NULL;
    wxFrame *m_RecordFrame = NULL;
    wxFrame *m_AdjustFrame = NULL;
    wxFrame *m_ManualFrame = NULL;
    wxFrame *m_HelpFrame = NULL;
    wxFrame *m_AboutFrame = NULL;
};

class FunctionFrame : public FunctionFrameBase {
public:

    FunctionFrame(wxWindow *parent);

    ~FunctionFrame();

protected:


    virtual void FunctionFrameBaseOnClose(wxCloseEvent &event) wxOVERRIDE;

public:
    MainFrame *m_MainFrame = NULL;
};

class QueueFrame : public QueueFrameBase {
public:

    QueueFrame(wxWindow *parent);

    ~QueueFrame();

protected:


    void QueueFrameBaseOnClose(wxCloseEvent &event) wxOVERRIDE;

public:
    MainFrame *m_MainFrame = NULL;
};

class SampleFrame : public SampleFrameBase {
public:

    SampleFrame(wxWindow *parent);

    ~SampleFrame();

protected:


    void SampleFrameBaseOnClose(wxCloseEvent &event) wxOVERRIDE;

public:
    MainFrame *m_MainFrame = NULL;
};

class RecordFrame : public RecordFrameBase {
public:

    RecordFrame(wxWindow *parent);

    ~RecordFrame();

protected:


    void RecordFrameBaseOnClose(wxCloseEvent &event) wxOVERRIDE;

public:
    MainFrame *m_MainFrame = NULL;
};

class AdjustFrame : public AdjustFrameBase {
public:

    AdjustFrame(wxWindow *parent);

    ~AdjustFrame();

protected:


    void AdjustFrameBaseOnClose(wxCloseEvent &event) wxOVERRIDE;

public:
    MainFrame *m_MainFrame = NULL;
};

class ManualFrame : public ManualFrameBase {
public:

    ManualFrame(wxWindow *parent);

    ~ManualFrame();

protected:


    void ManualFrameBaseOnClose(wxCloseEvent &event) wxOVERRIDE;

public:
    MainFrame *m_MainFrame = NULL;
};

class HelpFrame : public HelpFrameBase {
public:

    HelpFrame(wxWindow *parent);

    ~HelpFrame();

protected:


    void HelpFrameBaseOnClose(wxCloseEvent &event) wxOVERRIDE;

public:
    MainFrame *m_MainFrame = NULL;
};

class AboutFrame : public AboutFrameBase {
public:

    AboutFrame(wxWindow *parent);

    ~AboutFrame();

protected:

    void AboutFrameBaseOnClose(wxCloseEvent &event) wxOVERRIDE;

public:
    MainFrame *m_MainFrame = NULL;
};


#endif //APP_MYPROJECT_H
