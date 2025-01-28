//
// Created by Administrator on 2025/1/28.
//

#ifndef APP_MYPROJECT_H
#define APP_MYPROJECT_H

#include "MyProjectBase.h"

class MainFrame : public MainFrameBase {
public:

    explicit MainFrame(wxWindow *parent);

    ~MainFrame();
};

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


class AdjustFrame : public AdjustFrameBase {
public:

    explicit AdjustFrame(wxWindow *parent);

    ~AdjustFrame();
};

class AboutFrame : public AboutFrameBase {
public:

    explicit AboutFrame(wxWindow *parent);

    ~AboutFrame();
};

class HelpFrame : public HelpFrameBase {
public:

    explicit HelpFrame(wxWindow *parent);

    ~HelpFrame();
};

#endif //APP_MYPROJECT_H
