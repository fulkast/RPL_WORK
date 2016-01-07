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
echo "Compiling C code in C12"
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

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

