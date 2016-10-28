Readme.txt

-Export CC and CXX env. variable to point to the compiler/linker tool chain binary
	export CC=/usr/bin/clang
	export CXX=/usr/bin/clang++

-Move to project folder and run  cmake ./  to have cmake detect the env build tools and generate the makefile for the project testapp

-Run  make -f Makefile to build the project


