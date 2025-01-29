//
// Created by Administrator on 2025/1/28.
//

#ifndef APP_MYPROJECT_H
#define APP_MYPROJECT_H

#include "MyProjectBase.h"

class FunctionFrame : public FunctionFrameBase {
public:

    explicit FunctionFrame(wxWindow *parent);

    ~FunctionFrame();
};

class QueueFrame : public QueueFrameBase {
public:

    explicit QueueFrame(wxWindow *parent);

    ~QueueFrame();
};

class SampleFrame : public SampleFrameBase {
public:

    explicit SampleFrame(wxWindow *parent);

    ~SampleFrame();
};

class RecordFrame : public RecordFrameBase {
public:

    explicit RecordFrame(wxWindow *parent);

    ~RecordFrame();
};

class AdjustFrame : public AdjustFrameBase {
public:

    explicit AdjustFrame(wxWindow *parent);

    ~AdjustFrame();
};

class ManualFrame : public ManualFrameBase {
public:

    explicit ManualFrame(wxWindow *parent);

    ~ManualFrame();
};

class HelpFrame : public HelpFrameBase {
public:

    explicit HelpFrame(wxWindow *parent);

    ~HelpFrame();
};

class AboutFrame : public AboutFrameBase {
public:

    explicit AboutFrame(wxWindow *parent);

    ~AboutFrame();
};


class MainFrame : public MainFrameBase {
public:

    explicit MainFrame(wxWindow *parent);

    ~MainFrame();

private:
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

protected:
    MainFrame *m_MainFrame = NULL;
    FunctionFrame *m_FunctionFrame = NULL;
    QueueFrame *m_QueueFrame = NULL;
    SampleFrame *m_SampleFrame = NULL;
    RecordFrame *m_RecordFrame = NULL;
    AdjustFrame *m_AdjustFrame = NULL;
    ManualFrame *m_ManualFrame = NULL;
    HelpFrame *m_HelpFrame = NULL;
    AboutFrame *m_AboutFrame = NULL;
};

#endif //APP_MYPROJECT_H
