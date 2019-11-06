Usage of findWords:
cat [textfile] | ./findWords
Finds all the words in the text file that are longer than 5 words.

Usage of wordBag:
cat [textfile] | ./findWords | sort | ./wordBag | sort - gk1,1r -gk2,2
Prints out all the words that are longer than 5 words and tells the user how many times they appear.
