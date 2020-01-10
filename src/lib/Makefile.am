if DEBUG
  AM_CFLAGS =-I$(top_srcdir)/src/lib -Wall -g -O3
else
  AM_CFLAGS =-I$(top_srcdir)/src/lib -Wall
endif

# The libraries to build
noinst_LIBRARIES = librectangle.a
noinst_HEADERS = rectangle.h

# The files to add to the library and to the source distribution
librectangle_a_SOURCES = \               
