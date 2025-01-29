//
// Created by Administrator on 2025/1/28.
//

#ifndef APP_MYPROJECT_H
#define APP_MYPROJECT_H

#include "MyProjectBase.h"

class FunctionFrame : public FunctionFrameBase {
public:

    FunctionFrame(wxWindow *parent);

    ~FunctionFrame();

protected:


    virtual void FunctionFrameBaseOnClose(wxCloseEvent &event) wxOVERRIDE;

public:
    wxWindow *m_Parent = NULL;
};

class QueueFrame : public QueueFrameBase {
public:

    QueueFrame(wxWindow *parent);

    ~QueueFrame();

protected:


    void QueueFrameBaseOnClose(wxCloseEvent &event) wxOVERRIDE;

public:
    wxWindow *m_Parent = NULL;
};

class SampleFrame : public SampleFrameBase {
public:

    SampleFrame(wxWindow *parent);

    ~SampleFrame();

protected:


    void SampleFrameBaseOnClose(wxCloseEvent &event) wxOVERRIDE;

public:
    wxWindow *m_Parent = NULL;
};

class RecordFrame : public RecordFrameBase {
public:

    RecordFrame(wxWindow *parent);

    ~RecordFrame();

protected:


    void RecordFrameBaseOnClose(wxCloseEvent &event) wxOVERRIDE;

public:
    wxWindow *m_Parent = NULL;
};

class AdjustFrame : public AdjustFrameBase {
public:

    AdjustFrame(wxWindow *parent);

    ~AdjustFrame();

protected:


    void AdjustFrameBaseOnClose(wxCloseEvent &event) wxOVERRIDE;

public:
    wxWindow *m_Parent = NULL;
};

class ManualFrame : public ManualFrameBase {
public:

    ManualFrame(wxWindow *parent);

    ~ManualFrame();

protected:


    void ManualFrameBaseOnClose(wxCloseEvent &event) wxOVERRIDE;

public:
    wxWindow *m_Parent = NULL;
};

class HelpFrame : public HelpFrameBase {
public:

    HelpFrame(wxWindow *parent);

    ~HelpFrame();

protected:


    void HelpFrameBaseOnClose(wxCloseEvent &event) wxOVERRIDE;

public:
    wxWindow *m_Parent = NULL;
};

class AboutFrame : public AboutFrameBase {
public:

    AboutFrame(wxWindow *parent);

    ~AboutFrame();

protected:

    void AboutFrameBaseOnClose(wxCloseEvent &event) wxOVERRIDE;

public:
    wxWindow *m_Parent = NULL;
};


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
    wxWindow *m_MainFrame = NULL;
    wxWindow *m_FunctionFrame = NULL;
    wxWindow *m_QueueFrame = NULL;
    wxWindow *m_SampleFrame = NULL;
    wxWindow *m_RecordFrame = NULL;
    wxWindow *m_AdjustFrame = NULL;
    wxWindow *m_ManualFrame = NULL;
    wxWindow *m_HelpFrame = NULL;
    wxWindow *m_AboutFrame = NULL;
};

#endif //APP_MYPROJECT_H
