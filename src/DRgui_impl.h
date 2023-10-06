/******************************************************************************
 *
 * Project:  OpenCPN
 * Purpose:  DR Plugin
 * Author:   Mike Rossiter
 *
 ***************************************************************************
 *   Copyright (C) 2013 by Mike Rossiter                                   *
 *   $EMAIL$                                                               *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************
 */

#ifndef _CALCULATORGUI_IMPL_H_
#define _CALCULATORGUI_IMPL_H_

#ifdef WX_PRECOMP
#include "wx/wx.h"
#endif

#include "DR_pi.h"
#include "DRgui.h"

#include "NavFunc.h"
#include "tinyxml.h"

#include <list>
#include <vector>
#include <wx/app.h>
#include <wx/aui/aui.h>
#include <wx/frame.h>
#include <wx/menuitem.h>

#ifdef __OCPN__ANDROID__
#include "qtstylesheet.h"
#endif

#ifdef __OCPN__ANDROID__
wxWindow* g_Window;
#endif

enum {
    ID_DASH_PREFS = 999,
    ID_DASH_VERTICAL,
    ID_DASH_HORIZONTAL,
    ID_DASH_RESIZE,
    ID_DASH_UNDOCK
};

using namespace std;

class DR_pi;
class Position;

class Dlg : public m_Dialog {
public:
    Dlg(wxWindow* parent, DR_pi* ppi);
    ~Dlg();

    wxWindow* pParent;
    DR_pi* pPlugIn;

  void OnMouseEvent(wxMouseEvent& event);

    void OnPSGPX(wxCommandEvent& event);
    bool OpenXML();

    vector<Position> my_positions;
    vector<Position> my_points;

    void Calculate(wxCommandEvent& event, bool Export, int Pattern);
    void Addpoint(TiXmlElement* Route, wxString ptlat, wxString ptlon,
        wxString ptname, wxString ptsym, wxString pttype);

#ifdef __OCPN__ANDROID__
    void OnEvtPinchGesture(wxQT_PinchGestureEvent& event);
    void OnEvtPanGesture(wxQT_PanGestureEvent& event);
#endif


    wxString rte_start;
    wxString rte_end;

    bool m_binPinch;
    bool m_binPan;

    wxPoint m_resizeStartPoint;
    wxSize m_resizeStartSize;
    bool m_binResize;
    bool m_binResize2;
    void OnContextMenu(wxContextMenuEvent& event);

private:
    wxAuiManager* m_pauimgr;

    void OnClose(wxCloseEvent& event);
    double lat1, lon1, lat2, lon2;
    bool error_found;
    bool dbg;

    wxString m_gpx_path;
};

class Position {
public:
    wxString lat, lon, wpt_num;
    Position *prev, *next; /* doubly linked circular list of positions */
    int routepoint;
};

#endif
