#
all:	all1 all2 
all1:	04-fork 
all2:	05-fork 06-fork 10-fork 11-fork cascafork cascafork2

04-fork: 04-fork.c
	gcc -o 04-fork 04-fork.c

05-fork: 05-fork.c
	gcc -o 05-fork 05-fork.c

06-fork: 06-fork.c
	gcc -o 06-fork 06-fork.c

10-fork: 10-fork.c
	gcc -o 10-fork 10-fork.c

11-fork: 11-fork.c
	gcc -o 11-fork 11-fork.c

cascafork: cascafork.c
	gcc -o cascafork cascafork.c

cascafork2: cascafork2.c
	gcc -o cascafork2 cascafork2.c

clean:
	/bin/rm -f *.o *.c~  
	/bin/rm -f 04-fork 05-fork 06-fork
	/bin/rm -f 10-fork 11-fork cascafork cascafork2

