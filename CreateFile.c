#include <stdio.h>
#include <Windows.h>

int main()
{
	HANDLE myFile;
	LPCTSTR filePath = "C:\\Users\\user-2\\Desktop\\winProgramming\\TextFile.txt";
	myFile = CreateFile(
		filePath,
		GENERIC_WRITE | GENERIC_READ,
		0,
		NULL,
		CREATE_NEW,
		FILE_ATTRIBUTE_NORMAL,
		NULL);

	if (myFile == INVALID_HANDLE_VALUE)
	{
		fprintf(stderr, "Cannot create a file. Error No:%x\n", GetLastError());
		return 1;
	}
	CloseHandle(myFile);
	return 0;
}
