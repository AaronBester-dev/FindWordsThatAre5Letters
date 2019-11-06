all: trim.o reduceSpace.o findWords.o chop.o testConvert.o convertLowerCase.o replaceDigits.o 	 replacePunc.o findWords testConvert textRW wordBag
	gcc -ansi -Wall -o textRW textRW.c | gcc -ansi -Wall -o findWords findWords.o chop.o convertLowerCase.o replaceDigits.o replacePunc.o reduceSpace.o trim.o | gcc -ansi -Wall -o wordBag wordBag.c



findWords: findWords.o chop.o convertLowerCase.o replaceDigits.o replacePunc.o reduceSpace.o trim.o
	gcc -ansi -Wall -o findWords findWords.o chop.o convertLowerCase.o replaceDigits.o replacePunc.o reduceSpace.o trim.o

findWords.o: findWords.c
	gcc -ansi -Wall -c findWords.c

chop.o: chop.c
	gcc -ansi -Wall -c chop.c

convertLowerCase.o: convertLowerCase.c
	gcc -ansi -Wall -c convertLowerCase.c

replaceDigits.o: replaceDigits.c
	gcc -ansi -Wall -c replaceDigits.c

replacePunc.o: replacePunc.c
	gcc -ansi -Wall -c replacePunc.c

reduceSpace.o: reduceSpace.c
	gcc -ansi -Wall -c reduceSpace.c

trim.o: trim.c
	gcc -ansi -Wall -c trim.c

wordBag: wordBag.c
	gcc -ansi -Wall -o wordBag wordBag.c

clean:
	rm trim.o reduceSpace.o findWords.o chop.o testConvert.o convertLowerCase.o replaceDigits.o replacePunc.o findWords testConvert textRW wordBag
