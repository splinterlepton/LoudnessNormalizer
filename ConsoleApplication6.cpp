// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

int _tmain(int argc, _TCHAR* argv[])
{

	WIN32_FIND_DATA File_Data;

	FindFirstFile(TEXT("C:\\Users\\Muzyka\\*.mp3"), &File_Data);
	std::cout << File_Data.cFileName << std::endl;

	HANDLE hfile = FindFirstFile(TEXT("C:\\Users\\Muzyka\\*.mp3"), &File_Data);
	while (FindNextFile(hfile, &File_Data))
	{
		std::cout << File_Data.cFileName << std::endl;
	}
	FindClose(hfile);

	std::cin.get();
	return 0;
}

