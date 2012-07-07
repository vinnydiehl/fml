# -*- makefile -*-
# vim:set ts=8 sw=8 noet:

# File Manager Lite - The programmer's file manager.
# Copyright (C) 2012 Donnie Akers
# Copyright (C) 2012 Vinny Diehl
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program. If not, see <http://www.gnu.org/licenses/>.

# @file linker.mk - Builds the executable for the NDS Hacking Kit.

# Root Source Directory
ROOT = .

# Output Name
NAME = FileManagerLite

# wxWidgets Options
WXLDFLAGS = `wx-config --libs`

# Output Directories
BUILDROOT = $(ROOT)/build
BINDIR = $(BUILDROOT)/bin
OBJDIR = $(BUILDROOT)/obj

# Output Files
EXE = $(BINDIR)/$(NAME)
OBJ = MenuBar.o Program.o frmMain.o
OPATHS = $(addprefix $(OBJDIR)/,$(OBJ))

# Compiler
CXX = g++
DEBUG = -g -DDEBUG
LDFLAGS = -Wall $(WXLDFLAGS)

.PHONY: all debug configure clean rebuild rebuild-dbg

all: LDFLAGS += -O2
all: configure
all: $(EXE)

debug: LDFLAGS += $(DEBUG)
debug: configure
debug: $(EXE)

configure:
	mkdir -p $(BINDIR)

$(EXE): $(OPATHS)
	$(CXX) $(LDFLAGS) $(OPATHS) -o $@

clean:
	touch $(EXE) && rm $(EXE)

rebuild: clean
rebuild: $(EXE)

rebuild-dbg: clean
rebuild-dbg: debug

