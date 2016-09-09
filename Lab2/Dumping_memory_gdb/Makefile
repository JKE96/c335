#**********************************************************
# Makefile
#
# These definitions set up the poly make files and depencies.
#
# Author: Jarod England U:jkenglan with no partner
# Date Created: 9/2/16
# Last Modified by: Jarod England
# Date Last Modified: 9/9/16
# Assignment: Lab 02
# Part of: poly
#


CC = gcc
CFLAGS = -g
LDFLAGS = -g

poly: poly.o dump.o
	$(CC) $(LDFLAGS) -o poly poly.o dump.o

poly.o: poly.c
	$(CC) $(CFLAGS) -c poly.c

dump.o: dump.c
	$(CC) $(CFLAGS) -c dump.c
