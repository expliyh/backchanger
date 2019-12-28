#include "download.h"



void download(string url,string filename)
{
	DeleteUrlCacheEntryA(url.c_str());
	HRESULT Result = URLDownloadToFileA(NULL, url.c_str(), filename.c_str(), 0, NULL);
	switch (Result)
	{
	case S_OK:break;
	case E_OUTOFMEMORY: printf("The buffer length is invalid, or there is insufficient memory to complete the operation.\n"); break;
	}
	return;
}