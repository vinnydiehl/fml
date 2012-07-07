# File Mangager Lite

Welcome to the development branch of File Manager Lite!

The code is in the ```src``` directory. Check the commit history for the latest
development status and hack away.

## Build Instructions

### Setup

Running one of these will install all of the needed build tools for this
application, depending on your distro:

    sudo apt-get install build-essential libwxgtk2.8

[](/blank)

    sudo yum groupinstall 'Development Tools'
    sudo yum install wxGTK

File Manager Lite is written in C++ using wxWidgets 2.8.12. If your compiler is
having trouble finding the wxWidgets library and you know that you have it
installed, check that there is output for the following commands:

    wx-config --cxxflags
    wx-config --libs

### Full Build

Run ```make``` to fully build the program, or ```make rebuild``` to completely
rebuild the program and all object files.

Other options:

```make debug``` fully builds the program with debugging symbols and options,
and disables optimization.

```make rebuild-dbg``` rebuilds the program in the debug configuration.

```make clean``` deletes all object files while leaving the application intact.

```make delete``` or ```make erase``` will completely delete all build
artifacts, including the compiled application.

```make distclean``` will reset the build configuration to default, but retains
your ```.ndsconfig``` if you have one.

### Incremental Builds

Running ```make -f linker.mk``` at the top of the source tree will build only
the executable. There is a Makefile in each of the subdirectories as well;
running ```make``` in those subdirectories will build only the object files in
that directory (and recurse into their own subdirectories, if applicable). All
of the targets of the main Makefile (except for ```delete```, ```erase```, and
```distclean```) are available to these Makefiles as well.

