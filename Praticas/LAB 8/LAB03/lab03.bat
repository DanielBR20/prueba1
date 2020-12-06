echo compiling
gcc -c lab03.c -o lab03.o
gcc -c MENU.c -o MENU.o
gcc -c BML.c -o BML.o
gcc -o lab3.exe lab03.o MENU.o BML.o
.\lab3.exe
pause