#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin_1-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/all_letters.o \
	${OBJECTDIR}/capitalizes.o \
	${OBJECTDIR}/dedup.o \
	${OBJECTDIR}/diff.o \
	${OBJECTDIR}/ends_with_ignore_case.o \
	${OBJECTDIR}/find.o \
	${OBJECTDIR}/is_empty.o \
	${OBJECTDIR}/len_diff.o \
	${OBJECTDIR}/num_in_range.o \
	${OBJECTDIR}/pad.o \
	${OBJECTDIR}/ptr_to.o \
	${OBJECTDIR}/repeat.o \
	${OBJECTDIR}/replace.o \
	${OBJECTDIR}/rm_empties.o \
	${OBJECTDIR}/rm_left_space.o \
	${OBJECTDIR}/rm_right_space.o \
	${OBJECTDIR}/rm_space.o \
	${OBJECTDIR}/shorten.o \
	${OBJECTDIR}/str_chop_all.o \
	${OBJECTDIR}/str_connect.o \
	${OBJECTDIR}/str_zip.o \
	${OBJECTDIR}/strcmp_ign_case.o \
	${OBJECTDIR}/strtester.o \
	${OBJECTDIR}/take_last.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lab7.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lab7.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lab7 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/all_letters.o: all_letters.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/all_letters.o all_letters.c

${OBJECTDIR}/capitalizes.o: capitalizes.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/capitalizes.o capitalizes.c

${OBJECTDIR}/dedup.o: dedup.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/dedup.o dedup.c

${OBJECTDIR}/diff.o: diff.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/diff.o diff.c

${OBJECTDIR}/ends_with_ignore_case.o: ends_with_ignore_case.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ends_with_ignore_case.o ends_with_ignore_case.c

${OBJECTDIR}/find.o: find.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/find.o find.c

${OBJECTDIR}/is_empty.o: is_empty.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/is_empty.o is_empty.c

${OBJECTDIR}/len_diff.o: len_diff.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/len_diff.o len_diff.c

${OBJECTDIR}/num_in_range.o: num_in_range.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/num_in_range.o num_in_range.c

${OBJECTDIR}/pad.o: pad.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/pad.o pad.c

${OBJECTDIR}/ptr_to.o: ptr_to.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ptr_to.o ptr_to.c

${OBJECTDIR}/repeat.o: repeat.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/repeat.o repeat.c

${OBJECTDIR}/replace.o: replace.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/replace.o replace.c

${OBJECTDIR}/rm_empties.o: rm_empties.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/rm_empties.o rm_empties.c

${OBJECTDIR}/rm_left_space.o: rm_left_space.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/rm_left_space.o rm_left_space.c

${OBJECTDIR}/rm_right_space.o: rm_right_space.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/rm_right_space.o rm_right_space.c

${OBJECTDIR}/rm_space.o: rm_space.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/rm_space.o rm_space.c

${OBJECTDIR}/shorten.o: shorten.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/shorten.o shorten.c

${OBJECTDIR}/str_chop_all.o: str_chop_all.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/str_chop_all.o str_chop_all.c

${OBJECTDIR}/str_connect.o: str_connect.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/str_connect.o str_connect.c

${OBJECTDIR}/str_zip.o: str_zip.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/str_zip.o str_zip.c

${OBJECTDIR}/strcmp_ign_case.o: strcmp_ign_case.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/strcmp_ign_case.o strcmp_ign_case.c

${OBJECTDIR}/strtester.o: strtester.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/strtester.o strtester.c

${OBJECTDIR}/take_last.o: take_last.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/take_last.o take_last.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
