case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C10"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$\$ROS_LOCATION/include/" -I"/home/frank/catkin_group_workspace/src/lanke_marius_xiote/roboscoop/roboscoop_lib/_cpp" -I"\$\$CATKIN_WORKSPACE/devel/include/" -I"\$\$CATKIN_WORKSPACE/src/ful/" -I"\$\$ROBOLAB_ASEBA_PATH/asebaros/srv_gen/cpp/include/" -I"\$\$ROBOLAB_ASEBA_PATH/asebaros/msg_gen/cpp/include/"
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $mtccflags $large -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $mtcppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $windows_flags
LDSHAREDFLAGS =  $mtldsharedflags
EIFLIB = "$rt_lib/$prefix$mt_prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $mtlibs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = driver$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C10_c.o 

OLDOBJECTS =  sp326.o sp326d.o ar311.o ar311d.o ro310.o ro310d.o pr306.o pr306d.o \
	fu320.o fu320d.o ty307.o ty307d.o ty308.o ty308d.o ty305.o ty305d.o \
	ty309.o ty309d.o tr321.o tr321d.o co318.o co318d.o it324.o it324d.o \
	bo329.o bo329d.o se300.o se300d.o it325.o it325d.o re328.o re328d.o \
	rt303.o rt303d.o bo299.o bo299d.o rt304.o rt304d.o li314.o li314d.o \
	im297.o im297d.o in312.o in312d.o cu315.o cu315d.o ta313.o ta313d.o \
	in323.o in323d.o ba317.o ba317d.o ac316.o ac316d.o rt302.o rt302d.o \
	re322.o re322d.o co319.o co319d.o na327.o na327d.o co298.o co298d.o \
	rt301.o rt301d.o 

all: Cobj10.o

Cobj10.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj10.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

