./oracle.exe -b "at${1}.txt" > output.expected.txt
`pwd`/../tictac -b "at${1}.txt" > output.actual.txt
diff -rupP output.actual.txt output.expected.txt
