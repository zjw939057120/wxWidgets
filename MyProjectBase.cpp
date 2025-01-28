///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "MyProjectBase.h"

///////////////////////////////////////////////////////////////////////////

MainFrameBase::MainFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	m_menubar = new wxMenuBar( 0 );
	m_menu_file = new wxMenu();
	wxMenuItem* m_menuItemFunction;
	m_menuItemFunction = new wxMenuItem( m_menu_file, wxID_ANY, wxString( _("Function") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_file->Append( m_menuItemFunction );

	wxMenuItem* m_menuItemQueue;
	m_menuItemQueue = new wxMenuItem( m_menu_file, wxID_ANY, wxString( _("Queue") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_file->Append( m_menuItemQueue );

	wxMenuItem* m_menuItemSample;
	m_menuItemSample = new wxMenuItem( m_menu_file, wxID_ANY, wxString( _("Sample") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_file->Append( m_menuItemSample );

	wxMenuItem* m_menuItemRecord;
	m_menuItemRecord = new wxMenuItem( m_menu_file, wxID_ANY, wxString( _("Record") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_file->Append( m_menuItemRecord );

	wxMenuItem* m_menuItemExit;
	m_menuItemExit = new wxMenuItem( m_menu_file, wxID_ANY, wxString( _("Exit") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_file->Append( m_menuItemExit );

	m_menubar->Append( m_menu_file, _("File") );

	m_menu_edit = new wxMenu();
	wxMenuItem* m_menuItemCut;
	m_menuItemCut = new wxMenuItem( m_menu_edit, wxID_ANY, wxString( _("Cut") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_edit->Append( m_menuItemCut );

	wxMenuItem* m_menuItemCopy;
	m_menuItemCopy = new wxMenuItem( m_menu_edit, wxID_ANY, wxString( _("Copy") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_edit->Append( m_menuItemCopy );

	wxMenuItem* m_menuItemPaste;
	m_menuItemPaste = new wxMenuItem( m_menu_edit, wxID_ANY, wxString( _("Paste") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_edit->Append( m_menuItemPaste );

	m_menubar->Append( m_menu_edit, _("Edit") );

	m_menu_setting = new wxMenu();
	m_menubar->Append( m_menu_setting, _("Setting") );

	m_menu_help = new wxMenu();
	wxMenuItem* m_menuItemManual;
	m_menuItemManual = new wxMenuItem( m_menu_help, wxID_ANY, wxString( _("Manual") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_help->Append( m_menuItemManual );

	wxMenuItem* m_menuItemQuestion;
	m_menuItemQuestion = new wxMenuItem( m_menu_help, wxID_ANY, wxString( _("Q&A") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_help->Append( m_menuItemQuestion );

	wxMenuItem* m_menuItemAbout;
	m_menuItemAbout = new wxMenuItem( m_menu_help, wxID_ANY, wxString( _("About") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_help->Append( m_menuItemAbout );

	m_menubar->Append( m_menu_help, _("Help") );

	this->SetMenuBar( m_menubar );


	this->Centre( wxBOTH );

	// Connect Events
	m_menu_file->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::m_menuItemFunctionOnMenuSelection ), this, m_menuItemFunction->GetId());
	m_menu_file->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::m_menuItemQueueOnMenuSelection ), this, m_menuItemQueue->GetId());
	m_menu_file->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::m_menuItemSampleOnMenuSelection ), this, m_menuItemSample->GetId());
	m_menu_file->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::m_menuItemRecordOnMenuSelection ), this, m_menuItemRecord->GetId());
	m_menu_file->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::m_menuItemExitOnMenuSelection ), this, m_menuItemExit->GetId());
	m_menu_edit->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::m_menuItemCutOnMenuSelection ), this, m_menuItemCut->GetId());
	m_menu_edit->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::m_menuItemCopyOnMenuSelection ), this, m_menuItemCopy->GetId());
	m_menu_edit->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::m_menuItemPasteOnMenuSelection ), this, m_menuItemPaste->GetId());
	m_menu_help->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::m_menuItemManualOnMenuSelection ), this, m_menuItemManual->GetId());
	m_menu_help->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::m_menuItemQuestionOnMenuSelection ), this, m_menuItemQuestion->GetId());
	m_menu_help->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::m_menuItemAboutOnMenuSelection ), this, m_menuItemAbout->GetId());
}

MainFrameBase::~MainFrameBase()
{
}

FunctionFrameBase::FunctionFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxGridSizer* gSizer2;
	gSizer2 = new wxGridSizer( 0, 2, 0, 0 );


	this->SetSizer( gSizer2 );
	this->Layout();

	this->Centre( wxBOTH );
}

FunctionFrameBase::~FunctionFrameBase()
{
}

QueueFrameBase::QueueFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxGridSizer* gSizer3;
	gSizer3 = new wxGridSizer( 0, 2, 0, 0 );


	this->SetSizer( gSizer3 );
	this->Layout();

	this->Centre( wxBOTH );
}

QueueFrameBase::~QueueFrameBase()
{
}

RecordFrameBase::RecordFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxGridSizer* gSizer4;
	gSizer4 = new wxGridSizer( 0, 2, 0, 0 );


	this->SetSizer( gSizer4 );
	this->Layout();

	this->Centre( wxBOTH );
}

RecordFrameBase::~RecordFrameBase()
{
}

AdjustFrameBase::AdjustFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxGridSizer* gSizer5;
	gSizer5 = new wxGridSizer( 0, 2, 0, 0 );


	this->SetSizer( gSizer5 );
	this->Layout();

	this->Centre( wxBOTH );
}

AdjustFrameBase::~AdjustFrameBase()
{
}

HelpFrameBase::HelpFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxGridSizer* gSizer6;
	gSizer6 = new wxGridSizer( 0, 2, 0, 0 );


	this->SetSizer( gSizer6 );
	this->Layout();

	this->Centre( wxBOTH );
}

HelpFrameBase::~HelpFrameBase()
{
}

AboutFrameBase::AboutFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxGridSizer* gSizer7;
	gSizer7 = new wxGridSizer( 0, 2, 0, 0 );


	this->SetSizer( gSizer7 );
	this->Layout();

	this->Centre( wxBOTH );
}

AboutFrameBase::~AboutFrameBase()
{
}
