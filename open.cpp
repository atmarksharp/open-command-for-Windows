//
//	ShellExecute() sample, like "open" command in Mac OS X.
//
//	see also... http://msdn.microsoft.com/ja-jp/library/cc422072.aspx
//

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0600
#endif

#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <tchar.h>
#include <shellapi.h>

void usage()
{
	printf("\nusage: open.exe [filename]\n");
}

void error(TCHAR *filename)
{
	printf("\n[Error] can't open file: %s\n", filename);
}

bool open(TCHAR *filename)
{
	HINSTANCE h = ::ShellExecute(NULL, _T("open"), filename, NULL, NULL, SW_SHOW);
	if(32 > (intptr_t)h){
		return false;
	}

	return true;
}

int APIENTRY _tWinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPTSTR    lpCmdLine,
                     int       nCmdShow){
	if (__argc == 1){
		usage(); exit(1);
	}

	TCHAR *filename = __targv[1];
	bool flag = open(filename);
	if(!flag){
		error(filename); exit(1);
	}

	return 0;
}
