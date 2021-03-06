# **********************************************************
# Project:		ARG General libraries
# SubTree:		/Users/muyingchen/desktop/voice-authentication/alize/nist/src/progs/ clp.dSYM
# Filename:		Makefile
# Programmer:		J. Fiscus
# Organization:		NIST/NCSL/DIV 670/Auto Rec. Group
# Host System:		SUN 4 OS/4.1.1 (UNIX)
# Date Created:		05/28/92
#
# **********************************************************
# Makefile for SRC Binary Directory
# **********************************************************

PROJECT_ROOT	= /Users/muyingchen/desktop/voice-authentication/alize/nist
SHELL = /bin/sh

# **************************************************
# INDIVIDUAL PROGRAM MODIFICATIONS SHOULD BEGIN HERE
# **************************************************

# Program to make (binary name)
EXECUTABLE	= clp.dSYM
# Supporting functions to make if any (They will be included in every compile)
OBJ		= 
# List all .c source code files
SRC		= 
# Enable converting the distribution to K&R C
# KRC             = $(SRC:%.c=%.kr.c)

COMBINEDLIB	= sphereCombinedLibs

# LIBS needed to compile the EXECUTABLE
# (Full paths eg: /usr/local/image/lib/libimage.a)
# use $(LIBDIR) defined above for path extensions if appropriate
LIBS	= $(PROJECT_ROOT)/lib
# How the libraries look when invoked on the compile line (eg: -limage)
LLIBS	= -lm -l$(COMBINEDLIB)
# Local additions for CFLAG options (eg: -g)
LOCAL_CFLAGS	= -g -g -DNARCH_LINUX

# *******************************************************
# THE REST OF THE MAKEFILE SHOULD NOT NEED TO BE MODIFIED
#       (EXCEPT UPON APPROVAL OF PROJECT MANAGER)
# *******************************************************

BIN	= $(PROJECT_ROOT)/bin
INCLUDE = $(PROJECT_ROOT)/include
LIBDIR	= $(LIBS)

CFLAGS	= -I$(INCLUDE) -L$(LIBDIR) $(LOCAL_CFLAGS)
CC	= gcc -m32 
INSTALL	= install -s -m 755

RANLIB		= ranlib
AR		= ar ru

MAKEFILE	= Makefile
.PRECIOUS: $(MAKEFILE)

#.c: $(BIN)/$@ stub.o
#	$(CC) $@.c $(FUNCT_O) $(LLIBS) -o $@
#
#.c.o:
#	cc -c $@.c

it: $(EXECUTABLE)

install: $(MAKEFILE) $(EXECUTABLE)
	$(INSTALL) $(EXECUTABLE) $(BIN)

#build_kr: $(KRC)
#$(KRC): $@
#	cp `echo $@ | sed 's/.kr//'` $@
#	unprotoize -c "-I$(INCLUDE)" $@
#	rm -f $@.save

$(PROJECT_ROOT)/lib/lib$(COMBINEDLIB).a: $(PROJECT_ROOT)/src/lib/*/*.o
	$(AR) $@ $(PROJECT_ROOT)/src/lib/*/*.o
	$(RANLIB) $@

$(EXECUTABLE): $(OBJ) $(PROJECT_ROOT)/lib/lib$(COMBINEDLIB).a
	$(CC) $(CFLAGS) $@.c $(OBJ) $(LLIBS) -o $@

# if there are other separate programs to compile, add the name to
#	SRC, OBJ, ... and the redo the last 3 lines EXPLICITLY
#	for each program.
#	Install will also have to be changed.

clean :
	rm -f *.o $(EXECUTABLE) core a.out *.BAK
	rm -rf *.dSYM

bare: clean
	rm -f $(EXECUTABLE)

$(MAKEFILE): $(SRC)
	$(CC) $(CFLAGS) -M $(SRC) > dependlist
	@sed -e '1,/^# DO NOT DELETE/!d' $(MAKEFILE) > $(MAKEFILE).tmp.$$$$; \
	cat dependlist >> $(MAKEFILE).tmp.$$$$; \
	cp $(MAKEFILE) $(MAKEFILE).BAK; \
	mv $(MAKEFILE).tmp.$$$$ $(MAKEFILE); \
	rm -f dependlist;

depend: $(SRC)
	$(CC) $(CFLAGS) -M $(SRC) > dependlist
	@sed -e '1,/^# DO NOT DELETE/!d' $(MAKEFILE) > $(MAKEFILE).tmp.$$$$; \
	cat dependlist >> $(MAKEFILE).tmp.$$$$; \
	cp $(MAKEFILE) $(MAKEFILE).BAK; \
	mv $(MAKEFILE).tmp.$$$$ $(MAKEFILE); \
	rm -f dependlist; \
	echo make depend complete

check:
	@echo "Testing 'speech'."; \
	echo 110 195 > tst.txt; \
	echo 310 395 >> tst.txt; \
	if [ "`./speech ../../lib/data/ex8.wav | diff - tst.txt`" = "" ] ; then echo "   Passed"; else echo "   Failed"; exit 1; fi; \
	rm -f tst.txt
	./tsphere -d ../../lib/data

# DO NOT DELETE THIS LINE - make depend uses it
