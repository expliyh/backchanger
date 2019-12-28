#include "changeback.h"

using namespace std;

void change(string filename)
{
	char buffer[MAX_PATH];
	_getcwd(buffer, MAX_PATH);
	string a = buffer;
	a += "\\";
	a += filename;
	SystemParametersInfoA(SPI_SETDESKWALLPAPER, 0, (PVOID)a.c_str(), SPIF_UPDATEINIFILE | SPIF_SENDCHANGE);
}