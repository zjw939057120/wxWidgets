///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/sizer.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class MainFrameBase
///////////////////////////////////////////////////////////////////////////////
class MainFrameBase : public wxFrame
{
	private:

	protected:
		wxMenuBar* m_menubar;
		wxMenu* m_menu_file;
		wxMenu* m_menu_edit;
		wxMenu* m_menu_setting;
		wxMenu* m_menu_help;
		wxStatusBar* m_statusBar;

		// Virtual event handlers, override them in your derived class
		virtual void m_menuItemFunctionOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemQueueOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemSampleOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemRecordOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemExitOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemCutOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemCopyOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemPasteOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemAdjustOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemManualOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemHelpOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuItemAboutOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }


	public:

		MainFrameBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Main"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 880,660 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MainFrameBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class FunctionFrameBase
///////////////////////////////////////////////////////////////////////////////
class FunctionFrameBase : public wxFrame
{
	private:

	protected:

	public:

		FunctionFrameBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Function"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~FunctionFrameBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class QueueFrameBase
///////////////////////////////////////////////////////////////////////////////
class QueueFrameBase : public wxFrame
{
	private:

	protected:

	public:

		QueueFrameBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Queue"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~QueueFrameBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class SampleFrameBase
///////////////////////////////////////////////////////////////////////////////
class SampleFrameBase : public wxFrame
{
	private:

	protected:

	public:

		SampleFrameBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Sample"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~SampleFrameBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class RecordFrameBase
///////////////////////////////////////////////////////////////////////////////
class RecordFrameBase : public wxFrame
{
	private:

	protected:

	public:

		RecordFrameBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Record"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~RecordFrameBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class AdjustFrameBase
///////////////////////////////////////////////////////////////////////////////
class AdjustFrameBase : public wxFrame
{
	private:

	protected:

	public:

		AdjustFrameBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Adjust"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~AdjustFrameBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class ManualFrameBase
///////////////////////////////////////////////////////////////////////////////
class ManualFrameBase : public wxFrame
{
	private:

	protected:

	public:

		ManualFrameBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Manual"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~ManualFrameBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class HelpFrameBase
///////////////////////////////////////////////////////////////////////////////
class HelpFrameBase : public wxFrame
{
	private:

	protected:

	public:

		HelpFrameBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Help"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~HelpFrameBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class AboutFrameBase
///////////////////////////////////////////////////////////////////////////////
class AboutFrameBase : public wxFrame
{
	private:

	protected:

	public:

		AboutFrameBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("About"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~AboutFrameBase();

};

