# Open Command for Windows

Windows implementation of the `open` command on Mac OS X

(forked from https://github.com/yoggy/open-command-for-Windows)

## What's the open command?

The open command is the bridge between the terminal and the explorer.

If you type `open some-file.txt`, then soon notepad.exe launches as when you double-clicked the file.

The open command detects extensions of files and launches proper application.

## Build and Install

1. Install **MinGW** ([installer is here](http://sourceforge.net/projects/mingw/files/Installer/mingw-get-setup.exe/download))
2. Download [master.zip
](https://github.com/atmarksharp/open-command-for-Windows/archive/master.zip) from "Download ZIP" of this page, and unzip it
4. Open command prompt, and move to the unzipped folder (`cd path/to/project`)
5. Type `gcc open.cpp -o open`, then open.exe will be generated
6. Bring it (open.exe) to a folder that was registered on the *PATH* (environmental variable)

## Usage

`open [filename]` <br>
`open.exe [filename]`

```bash
open file1.txt // opens file1.txt with notepad
open directory1 // opens directory1 with explorer
open dir1\dir2\img.png // opens img.png
open "c:\Dir\File.js" // opens File.js
```
