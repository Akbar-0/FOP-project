# Want to run this code?

   Create a windows batch file then. Namely compile.bat.

"A Windows batch file is a script file containing a series of commands that are executed in sequence by the Windows command line interpreter".

To create a compile.bat file on Windows, you can follow four small steps:

1. Open a text editor such as Notepad or Notepad++.

2. Copy and paste the following lines into the text editor:


#
      @echo off
      gcc myOS.c -o myOS -lwinmm

      IF NOT %ERRORLEVEL%==0 (
          echo Compilation failed!
      ) ELSE (
          echo Compilation successful!
      )
      pause
      .\myOS.exe



3. Save the file with the name compile.bat. Make sure to select "All Files" as the file type and ensure that the file extension is .bat.

4. Move the compile.bat file to the same directory as your source code file (myOS.c).


## Done?
   Now you can run the compile.bat file by double-clicking on it or executing it from the command prompt. It will compile the program using the gcc compiler and display a message indicating whether the compilation was successful or failed.

## NOTE:
   Make sure you have the GCC compiler installed on your system and set up properly before running the compile.bat file.
