#include "checkres.h"



resolution::resolution()
{
	height = GetSystemMetrics(SM_CYSCREEN);
	width = GetSystemMetrics(SM_CXSCREEN);
}

string resolution::to_str(bool addx = false)
{
	string re = to_string(width);
	if (addx)
	{
		re += "x";
	}
	re += to_string(height);
	return re;
}
