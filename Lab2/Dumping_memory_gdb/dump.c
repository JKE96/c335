#include <stdio.h>

    /**********************************************************
 * * dump.c
 * *
 * * These definitions dump memory.
 * *
 * * Author: Jarod England u:jkenglan with no partner
 * * Date Created: 9/2/16
 * * Last Modified by: Jarod England
 * * Date Last Modified: 9/9/16 
 * * Assignment: Lab 02
 * * Part of: poly
 * */

	//outputs the memory within poly in several different ways
	//Does not return a value, reads pointer values and prints its value according to what type is specified    
void dump_memory(void *p, int len)
    {
      int i;
      printf("address    char hexCh short     integer         float      doubleFloat\n");
      for (i = 0; i < len; i++) {
        printf("%8p %c %02x %+06hd %+d %+e %+Le  \n", 
	p + i,
	*(unsigned char *)(p + i),
	*(unsigned char *)(p + i),
	*(unsigned short *)(p + i),
	*(unsigned int *)(p + i),
	*(unsigned long *)(p + i),
	*(unsigned long *)(p + i));
      }
    }
