/**
 * File Manager Lite - The programmer's file manager.
 * Copyright (C) 2012 Donnie Akers
 * Copyright (C) 2012 Vinny Diehl
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
**/

/**
 * @file frmMain.cpp - The main wxFrame for the application.
**/

#include "frmMain.h"

frmMain::frmMain(void) : wxFrame(NULL, wxID_ANY, NAME)
{
    /** Main Window **/

    vboxMargin = new wxBoxSizer(wxVERTICAL);

    pnlMain = new wxPanel(this, wxID_ANY);
    vboxMain = new wxBoxSizer(wxVERTICAL);

    // Add layout boxes and whatnot like so:
    // hboxName = new wxBoxSizer(wxHORIZONTAL);
    // And then items to that:
    // lblFoo = new wxStaticText(pnlMain, wxID_ANY, _T("Whatever..."));
    // hboxName->Add(lblFoo, 0, wxALIGN_CENTER_VERTICAL | wxRIGHT, 5);
    // Then add it to the main box...
    // vboxMain->Add(hboxName, 0, wxEXPAND);
    // You get the idea...

    pnlMain->SetSizer(vboxMain);
    vboxMain->SetSizeHints(pnlMain);

    vboxMargin->Add(pnlMain, 1, wxEXPAND | wxALL, MARGIN);
    SetSizer(vboxMargin);
    vboxMargin->SetSizeHints(this);

    /** Configure Form **/

    // Set the menu bar to a new instance of MenuBar
    SetMenuBar(new MenuBar(this));
    // Arbitrary startup size of 800x500.
    SetSize(wxSize(800, 500));
    // Center the window on screen on startup
    Center();

    /** Connect Main Window Events **/
    // Put all of your event connections here. Example:
//  Connect(ID_NAME, wxEVT_COMMAND_BUTTON_CLICKED,
//          wxCommandEventHandler(ClassName::MethodName));
}

