#include "download.h"



void download(string url)
{
	char buffer[MAX_PATH];
	_getcwd(buffer, MAX_PATH);
	strcat_s(buffer, "//back.jpg");
	HRESULT Result = URLDownloadToFileA(NULL, url.c_str(), buffer, 0, NULL);
	switch (Result)
	{
	case S_OK:break;
	case E_OUTOFMEMORY: printf("The buffer length is invalid, or there is insufficient memory to complete the operation.\n"); break;
	}
	return;
}