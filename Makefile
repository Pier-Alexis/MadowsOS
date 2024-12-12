
all: multitasking.o file_system.o interface_manager.o

multitasking.o: multitasking.c
	gcc -m32 -ffreestanding -c multitasking.c -o multitasking.o

file_system.o: file_system.c
	gcc -m32 -ffreestanding -c file_system.c -o file_system.o

interface_manager.o: interface_manager.c
	gcc -m32 -ffreestanding -c interface_manager.c -o interface_manager.o

clean:
	rm -f *.o
