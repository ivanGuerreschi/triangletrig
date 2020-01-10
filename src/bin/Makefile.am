if DEBUG
  AM_CFLAGS =-I$(top_srcdir)/src/bin -I$(top_srcdir)/src/lib -Wall -g -O3
else
  AM_CFLAGS =-I$(top_srcdir)/src/bin -I$(top_srcdir)/src/lib -Wall -O3
endif

bin_PROGRAMS = triangletrig
triangletrig_SOURCES = main.c

triangletrig_LDADD = $(top_builddir)/src/lib/librectangle.a $(AM_LDFLAGS)
