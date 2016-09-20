#Author: Jarod England
#Date created: 9/14/16
#Last Modified by: Jarod England
#Date last modified: 9/14/16
#Assignment HW1
#part of c335

CC = arm-none-eabi-gcc
CFLAGS = -g -O1 -mcpu=cortex-m0 -mthumb
AS = arm-none-eabi-as
LFLAGS = -g -mcpu=cortex-m0 -mthumb
CSFLAGS = -g -mcpu=cortex-m0 -mthumb --specs=rdimon.specs -lc -lrdimon

test.o:
	$(CC) $(CFLAGS) -c test.c -o test.o
t1.o:
	$(AS) $(LFLAGS) t1.s -o t1.o

HW1.elf: test.o t1.o
	$(CC) $(CSFLAGS) test.o t1.o -o HW1.elf 
main.s:
	$(CC) -c -S -g -Wa,-a,-ad -mcpu=cortex-m0 -mthumb test.c -o main.s

test : HW1.elf
	qemu-system-arm  -machine versatilepb -cpu cortex-m3 -nographic \
		-monitor null -serial null \
		-semihosting -kernel HW1.elf > output.txt

clean:
	rm -f test.o
	rm -f t1.o
	rm -f HW1.elf
	rm -f main.s

export QEMU_AUDIO_DRV=wav
