INCLUDE_PATH =  -I"$$ROS_LOCATION/include/" -I"/home/frank/catkin_group_workspace/src/lanke_marius_xiote/roboscoop/roboscoop_lib/_cpp" -I"$$CATKIN_WORKSPACE/devel/include/" -I"$$CATKIN_WORKSPACE/src/ful/" -I"$$ROBOLAB_ASEBA_PATH/asebaros/srv_gen/cpp/include/" -I"$$ROBOLAB_ASEBA_PATH/asebaros/msg_gen/cpp/include/"
SHELL = /bin/sh
CC = gcc
CPP = g++
CFLAGS = -O0 -pipe -fPIC -D_GNU_SOURCE -m64 -DEIF_THREADS -DEIF_LINUXTHREADS  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"/home/frank/Eiffel_15.08/studio/spec/linux-x86-64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -fPIC -D_GNU_SOURCE -m64 -DEIF_THREADS -DEIF_LINUXTHREADS  -DWORKBENCH -I"/home/frank/Eiffel_15.08/studio/spec/linux-x86-64/include" -I. $(INCLUDE_PATH)
LDFLAGS = -m elf_x86_64
CCLDFLAGS = -m64  
LDSHAREDFLAGS =  -m elf_x86_64 -shared -o
EIFLIB = "/home/frank/Eiffel_15.08/studio/spec/linux-x86-64/lib/libmtwkbench.a"
EIFTEMPLATES = /home/frank/Eiffel_15.08/studio/config/linux-x86-64/templates
LIBS = -lm -lpthread
MAKE = make
AR = ar
LD = ld
MKDEP = \$(EIFFEL_SRC)/C/mkdep $(DPFLAGS) --
MV = /bin/mv
CP = /bin/cp
RANLIB = :
RM = /bin/rm -f
FILE_EXIST = 
RMDIR = 
X2C = "/home/frank/Eiffel_15.08/studio/spec/linux-x86-64/bin/x2c"
SHAREDLINK = ld
SHAREDLIBS = -lm
SHARED_SUFFIX = .so
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = touch finished 
SYSTEM_IN_DYNAMIC_LIB = driver.so 

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C12_c.o 

OLDOBJECTS =  sp391.o sp391d.o ty378.o ty378d.o ty389.o ty389d.o ty390.o ty390d.o \
	bo365.o bo365d.o ar366.o ar366d.o fi364.o fi364d.o dy369.o dy369d.o \
	to374.o to374d.o ha379.o ha379d.o ha383.o ha383d.o it394.o it394d.o \
	bo363.o bo363d.o it395.o it395d.o ta376.o ta376d.o ta381.o ta381d.o \
	ta385.o ta385d.o ce388.o ce388d.o ta386.o ta386d.o un372.o un372d.o \
	in393.o in393d.o ha377.o ha377d.o ha382.o ha382d.o ha387.o ha387d.o \
	li373.o li373d.o se367.o se367d.o re392.o re392d.o bi368.o bi368d.o \
	ta375.o ta375d.o ta380.o ta380d.o ta384.o ta384d.o ch371.o ch371d.o \
	dy370.o dy370d.o 

all: Cobj12.o

Cobj12.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj12.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

