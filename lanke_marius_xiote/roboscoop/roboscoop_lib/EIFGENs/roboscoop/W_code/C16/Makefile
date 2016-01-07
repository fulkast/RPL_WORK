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

OBJECTS = big_file_C16_c.o 

OLDOBJECTS =  sp503.o sp503d.o ar510.o ar510d.o ty508.o ty508d.o tr519.o tr519d.o \
	bo523.o bo523d.o ar524.o ar524d.o fi522.o fi522d.o dy497.o dy497d.o \
	dy527.o dy527d.o co517.o co517d.o to502.o to502d.o it506.o it506d.o \
	bo521.o bo521d.o it507.o it507d.o re520.o re520d.o li513.o li513d.o \
	in511.o in511d.o cu514.o cu514d.o ta512.o ta512d.o un500.o un500d.o \
	in505.o in505d.o li501.o li501d.o ba516.o ba516d.o se495.o se495d.o \
	se525.o se525d.o ac515.o ac515d.o re504.o re504d.o co518.o co518d.o \
	na509.o na509d.o bi496.o bi496d.o bi526.o bi526d.o ch499.o ch499d.o \
	dy498.o dy498d.o 

all: Cobj16.o

Cobj16.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj16.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

