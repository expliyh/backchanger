#include "download.h"



void download(string url,string filename)
{
	char buffer[MAX_PATH];
	_getcwd(buffer, MAX_PATH);
	string a = "//";
	a += filename;
	strcat_s(buffer, a.c_str());
	HRESULT Result = URLDownloadToFileA(NULL, url.c_str(), buffer, 0, NULL);
	switch (Result)
	{
	case S_OK:break;
	case E_OUTOFMEMORY: printf("The buffer length is invalid, or there is insufficient memory to complete the operation.\n"); break;
	}
	return;
}