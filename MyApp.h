
#ifndef APP_MYAPP_H
#define APP_MYAPP_H

// ============================================================================
// declarations
// ============================================================================

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"


#ifndef WX_PRECOMP

#include "wx/wx.h"

#endif

#include "wx/artprov.h"
#include "wx/dataview.h"
#include "wx/datetime.h"
#include "wx/splitter.h"
#include "wx/aboutdlg.h"
#include "wx/colordlg.h"
#include "wx/choicdlg.h"
#include "wx/numdlg.h"
#include "wx/spinctrl.h"
#include "wx/imaglist.h"
#include "wx/itemattr.h"
#include "wx/notebook.h"

#ifdef wxHAS_GENERIC_DATAVIEWCTRL

#include "wx/headerctrl.h"

#endif // wxHAS_GENERIC_DATAVIEWCTRL

// ----------------------------------------------------------------------------
// resources
// ----------------------------------------------------------------------------

#ifndef wxHAS_IMAGES_IN_RESOURCES
#include "sample.xpm"
#endif

// ----------------------------------------------------------------------------
// MyApp
// ----------------------------------------------------------------------------

class MyApp : public wxApp {
public:
    virtual bool OnInit() wxOVERRIDE;

public:
    wxWindow *parent = NULL;
};

#endif //APP_MYAPP_H
