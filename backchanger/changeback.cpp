#include "changeback.h"

using namespace std;

void change(string folder)
{
	stringstream imgPath;
	imgPath << folder;
	SystemParametersInfoA(SPI_SETDESKWALLPAPER, 0, (PVOID)imgPath.str().c_str(), SPIF_UPDATEINIFILE | SPIF_SENDCHANGE);
}