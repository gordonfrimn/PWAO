all: main clean

main: main.o InputLib.o StringParser.o OutputLib.o WorkFiles.o
	gcc -Wall main.o InputLib.o StringParser.o OutputLib.o WorkFiles.o -o PWAO.exe

main.o: main.c sharedFiles/InputLib.h sharedFiles/StringParser.h
	gcc -c main.c

InputLib.o: sharedFiles/InputLib.h sharedFiles/InputLib.c
	gcc -c sharedFiles/InputLib.c

StringParser.o: sharedFiles/StringParser.h sharedFiles/StringParser.c
	gcc -c sharedFiles/StringParser.c
	
WorkFiles.o: sharedFiles/WorkFiles.h sharedFiles/WorkFiles.c
	gcc -c sharedFiles/WorkFiles.c
	
OutputLib.o: sharedFiles/OutputLib.h sharedFiles/OutputLib.c
	gcc -c sharedFiles/OutputLib.c

clean:
	rm -rf *.o main