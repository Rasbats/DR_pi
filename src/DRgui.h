///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/sizer.h>
#include <wx/textctrl.h>
#include <wx/choice.h>
#include <wx/statline.h>
#include <wx/menu.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class m_Dialog
///////////////////////////////////////////////////////////////////////////////
class m_Dialog : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText1511;
		wxButton* m_button2;
		wxStaticText* m_staticText32111112;
		wxStaticText* m_staticText33111111;
		wxStaticText* m_staticText32111111;
		wxStaticText* m_staticText3311111;
		wxStaticText* m_staticText7;
		wxStaticLine* m_staticline1;
		wxButton* m_button3111;
		wxStaticText* m_staticText71;
		wxMenuBar* m_menubar1;
		wxMenu* m_menu1;

		// Virtual event handlers, override them in your derived class
		virtual void OnRightClick( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnExpand( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnPSGPX( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnContextMenu( wxCommandEvent& event ) { event.Skip(); }


	public:
		wxTextCtrl* m_Speed_PS;
		wxChoice* m_Nship;
		wxTextCtrl* m_Route;

		m_Dialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_FRAME_STYLE|wxRESIZE_BORDER|wxSTAY_ON_TOP|wxTAB_TRAVERSAL );

		~m_Dialog();

};

