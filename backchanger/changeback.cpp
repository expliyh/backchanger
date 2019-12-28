#include "changeback.h"

using namespace std;

void change(string filename)
{
	string a="\\";
	a += filename;
	SystemParametersInfoA(SPI_SETDESKWALLPAPER, 0, (PVOID)a.c_str(), SPIF_UPDATEINIFILE | SPIF_SENDCHANGE);
}