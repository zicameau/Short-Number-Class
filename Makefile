#/*************************

# Trevor O'Neil
# CISP 400 MW 5:20 - 6:30p.m.
# Programming Project #2
# February 20 2016

#***************************/


main: ShortMain.o Short.o
	g++ -Wall -pedantic ShortMain.o Short.o  -o main
ShortMain.o: ShortMain.cpp Short.cpp Short.h
	g++ -Wall -pedantic ShortMain.cpp -c
Short.o: Short.cpp Short.h
	g++ -Wall -pedantic Short.cpp -c



