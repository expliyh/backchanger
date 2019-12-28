#include "changeback.h"

using namespace std;

void change(string filename)
{
	string a = "\\";
	a += filename;
	stringstream imgPath;
	imgPath << a;
	SystemParametersInfoA(SPI_SETDESKWALLPAPER, 0, (PVOID)imgPath.str().c_str(), SPIF_UPDATEINIFILE | SPIF_SENDCHANGE);
}