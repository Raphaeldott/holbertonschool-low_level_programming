ex 0
gcc -E "$CFILE" -o c

gcc: This is the compiler command.
-E: This option tells gcc to stop after the preprocessing stage. It outputs the preprocessed code, which includes expanded macros and included header files.
"$CFILE": This variable should contain the path to the C source file you want to preprocess. The quotes ensure that the command handles any spaces in the file path correctly.
-o c: This specifies the output file name as c. The preprocessed output will be saved to this file.

ex 1 
gcc -c "$CFILE"

 The -c option in the gcc command is what tells the compiler to compile the source code into an object file without linking. So, regardless of how you specify the output filename, using -c ensures that no linking happens.

ex 2 
gcc -S "$CFILE"

-S stop to the assembly stage   file.s
