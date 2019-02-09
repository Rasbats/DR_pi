///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct  8 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "DRgui.h"

///////////////////////////////////////////////////////////////////////////

DlgDef::DlgDef( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxDefaultSize );
	
	bSframe = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer9111;
	bSizer9111 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText1511 = new wxStaticText( this, wxID_ANY, _("DR Options"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1511->Wrap( -1 );
	m_staticText1511->SetFont( wxFont( 20, 70, 90, 92, false, wxEmptyString ) );
	
	bSizer9111->Add( m_staticText1511, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer1311;
	bSizer1311 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer14111112;
	bSizer14111112 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText32111112 = new wxStaticText( this, wxID_ANY, _("Speed             "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32111112->Wrap( -1 );
	bSizer14111112->Add( m_staticText32111112, 0, wxALL, 5 );
	
	m_Speed_PS = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_Speed_PS->SetMaxLength( 0 ); 
	bSizer14111112->Add( m_Speed_PS, 0, wxALL, 5 );
	
	m_staticText33111111 = new wxStaticText( this, wxID_ANY, _("kts"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33111111->Wrap( -1 );
	bSizer14111112->Add( m_staticText33111111, 0, wxALL, 5 );
	
	
	bSizer1311->Add( bSizer14111112, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer14111111;
	bSizer14111111 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText32111111 = new wxStaticText( this, wxID_ANY, _("Interval"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32111111->Wrap( -1 );
	bSizer14111111->Add( m_staticText32111111, 0, wxALL, 5 );
	
	wxString m_NshipChoices[] = {  _("0"), _("1"), _("2"), _("3"), _("4"), _("5"), _("6") };
	int m_NshipNChoices = sizeof( m_NshipChoices ) / sizeof( wxString );
	m_Nship = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_NshipNChoices, m_NshipChoices, 0 );
	m_Nship->SetSelection( 1 );
	bSizer14111111->Add( m_Nship, 0, wxALL, 5 );
	
	m_staticText3311111 = new wxStaticText( this, wxID_ANY, _("Hours"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3311111->Wrap( -1 );
	bSizer14111111->Add( m_staticText3311111, 0, wxALL, 5 );
	
	
	bSizer1311->Add( bSizer14111111, 0, 0, 5 );
	
	wxBoxSizer* bSizer71;
	bSizer71 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button3111 = new wxButton( this, wxID_ANY, _("Generate &GPX"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer71->Add( m_button3111, 0, wxALL, 5 );
	
	
	bSizer1311->Add( bSizer71, 1, wxALIGN_CENTER, 5 );
	
	
	bSizer9111->Add( bSizer1311, 0, 0, 5 );
	
	
	bSframe->Add( bSizer9111, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText7 = new wxStaticText( this, wxID_ANY, _("Route Name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer14->Add( m_staticText7, 0, wxALL, 5 );
	
	m_Route = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( m_Route, 0, wxALL|wxEXPAND, 5 );
	
	
	bSframe->Add( bSizer14, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSframe );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_button3111->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnPSGPX ), NULL, this );

	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( DlgDef::OnClose) );
}

DlgDef::~DlgDef()
{
	// Disconnect Events
	m_button3111->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnPSGPX ), NULL, this );
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( DlgDef::OnClose ) );
}

