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

OBJECTS = big_file_C7_c.o 

OLDOBJECTS =  id218.o id218d.o re201.o re201d.o in212.o in212d.o fi225.o fi225d.o \
	fi227.o fi227d.o st220.o st220d.o un226.o un226d.o st211.o st211d.o \
	na221.o na221d.o ac213.o ac213d.o ar208.o ar208d.o ex230.o ex230d.o \
	re200.o re200d.o di224.o di224d.o in198.o in198d.o nu204.o nu204d.o \
	me217.o me217d.o me216.o me216d.o io219.o io219d.o di214.o di214d.o \
	ha207.o ha207d.o ec199.o ec199d.o ci206.o ci206d.o ra228.o ra228d.o \
	ab203.o ab203d.o ar210.o ar210d.o fi223.o fi223d.o ma215.o ma215d.o \
	na222.o na222d.o ar209.o ar209d.o pl229.o pl229d.o cu205.o cu205d.o \
	de202.o de202d.o 

all: Cobj7.o

Cobj7.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj7.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

