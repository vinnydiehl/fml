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
 * @file globals.h - Constants and macros that are meant to be used in various
 *                   multiple files throughout the program.
**/

#ifndef GLOBALS_H_INCLUDED
#define GLOBALS_H_INCLUDED

#include <wx/string.h>

/** About NDS Hacking Kit **/

// Program name:
const wxString NAME = _T("File Manager Lite");
// Current program version:
const wxString VERSION = _T("0.1-dev");
// Description:
const wxString DESCRIPTION = _T("\
The programmer's file manager.\
");
// Copyright:
const wxString COPYRIGHT = _T("\
Copyright (c) 2012 Donnie Akers and Vinny Diehl.\
");

// The margin between the edge of each page and the contents of the page:
#define MARGIN 5

#endif // GLOBALS_H_INCLUDED

