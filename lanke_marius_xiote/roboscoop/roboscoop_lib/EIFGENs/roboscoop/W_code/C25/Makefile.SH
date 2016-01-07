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
echo "Compiling C code in C25"
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

OBJECTS = big_file_C25_c.o 

OLDOBJECTS =  sp799.o sp799d.o ar805.o ar805d.o ty793.o ty793d.o ty794.o ty794d.o \
	ty795.o ty795d.o ty797.o ty797d.o ty798.o ty798d.o tr814.o tr814d.o \
	bo818.o bo818d.o ar819.o ar819d.o fi817.o fi817d.o dy822.o dy822d.o \
	co812.o co812d.o rt792.o rt792d.o it802.o it802d.o bo816.o bo816d.o \
	it803.o it803d.o re815.o re815d.o rt796.o rt796d.o li808.o li808d.o \
	in806.o in806d.o cu809.o cu809d.o ta807.o ta807d.o in801.o in801d.o \
	ba811.o ba811d.o se820.o se820d.o ac810.o ac810d.o re800.o re800d.o \
	co813.o co813d.o na804.o na804d.o bi821.o bi821d.o ch824.o ch824d.o \
	dy823.o dy823d.o 

all: Cobj25.o

Cobj25.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj25.o $(OBJECTS)
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

