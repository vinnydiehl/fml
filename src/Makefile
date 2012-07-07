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

# @file Makefile - Contains instructions for building the application.
#
# make
# Builds application.
#
# make debug
# Builds application with debugging symbols and DEBUG defined.
#
# make rebuild
# Rebuilds the application, including all object files.
#
# make rebuild-dbg
# Rebuilds the application, including all object files, to the debug target.
#
# make clean
# Deletes the object files.
#
# make distclean
# Removes all configurations options and resets to default.
# Run this before committing unless you have a good reason not to.
#
# make erase
# make delete
# Deletes the build directory and all files within.

# Root Source Directory
ROOT = .

# Output Name
NAME = FileManagerLite
ALTNAME = fml

# Output Directories
BUILDROOT = $(ROOT)/build
BINDIR = $(BUILDROOT)/bin
OBJDIR = $(BUILDROOT)/obj
INSTALL = /usr/bin

# Output Files
EXE = $(BINDIR)/$(NAME)
OBJ = MenuBar.o Program.o frmMain.o
OPATHS = $(addprefix $(OBJDIR)/,$(OBJ))

# Make
MAKE = make
MAKETGT =

.PHONY: all debug distclean configure clean \
	rebuild rebuild-dbg erase delete

all: CFLAGS += -O2
all: configure
all: $(EXE)

debug: CFLAGS += $(DEBUG)
debug: MAKETGT += debug
debug: configure
debug: $(EXE)

configure:
	mkdir -p $(OBJDIR)

$(EXE): $(OPATHS)
	$(MAKE) -f linker.mk $(MAKETGT)

### Object Builds

# app

$(OBJDIR)/Program.o:
	$(MAKE) -C app $(MAKETGT)

# frames

$(OBJDIR)/frmMain.o:
	$(MAKE) -C frames $(MAKETGT)

# base

$(OBJDIR)/MenuBar.o:
	$(MAKE) -C base $(MAKETGT)

### End Object Builds

clean:
	mkdir -p $(OBJDIR) && rm -r $(OBJDIR)

distclean:
	touch .ndsconfig && mv .ndsconfig .ndsconfig.tmp
	./configure
	mv .ndsconfig.tmp .ndsconfig

rebuild: clean
rebuild: $(EXE)

rebuild-dbg: clean
rebuild-dbg: debug

erase: delete
delete:
	mkdir -p $(BUILDROOT) && rm -r $(BUILDROOT)

install:
	cp $(EXE) $(INSTALL)
	ln -s $(INSTALL)/$(NAME) $(INSTALL)/$(ALTNAME)

