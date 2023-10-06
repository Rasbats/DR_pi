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
#include <wx/choice.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/frame.h>
#include <wx/aui/aui.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class m_Dialog
///////////////////////////////////////////////////////////////////////////////
class m_Dialog : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText1511;
		wxButton* m_button3111;
		wxStaticText* m_staticText32111112;

		// Virtual event handlers, override them in your derived class
		virtual void OnPSGPX( wxCommandEvent& event ) { event.Skip(); }


	public:
		wxChoice* m_Nship;
		wxTextCtrl* m_Route;
		wxTextCtrl* m_Speed_PS;

		m_Dialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Test"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxCAPTION|wxDEFAULT_FRAME_STYLE|wxFRAME_FLOAT_ON_PARENT|wxMAXIMIZE_BOX|wxSTAY_ON_TOP|wxTAB_TRAVERSAL );
		wxAuiManager m_mgr;

		~m_Dialog();

};

