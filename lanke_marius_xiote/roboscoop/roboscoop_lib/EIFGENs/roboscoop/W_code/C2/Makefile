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

OBJECTS = big_file_C2_c.o big_file_C2_cpp.o 

OLDOBJECTS =  ro44.o ro44d.o ba41.o ba41d.o po58.o po58d.o sy40.o sy40d.o st39.o \
	st39d.o op38.o op38d.o tr37.o tr37d.o ma57.o ma57d.o wa36.o wa36d.o \
	pr35.o pr35d.o ut33.o ut33d.o ut34.o ut34d.o as56.o as56d.o la65.o \
	la65d.o ma64.o ma64d.o oc63.o oc63d.o po55.o po55d.o po54.o po54d.o \
	qu53.o qu53d.o he52.o he52d.o ve51.o ve51d.o od62.o od62d.o fl50.o \
	fl50d.o co49.o co49d.o tw48.o tw48d.o me43.o me43d.o pa61.o pa61d.o \
	tw47.o tw47d.o po60.o po60d.o po46.o po46d.o st59.o st59d.o ma45.o \
	ma45d.o oc42.o oc42d.o 

all: Cobj2.o

Cobj2.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj2.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

