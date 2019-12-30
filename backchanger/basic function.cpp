#include "basic function.h"


string mk_guidurl(int level, string fenlei = "")
{
	string re = mainurl;
	switch (level)
	{
	case 0:
	{
		re += "guide/index";
		re += nft;
		break;
	}	
	case 1:
	{
		re = mainurl;
		re += "guide/";
		string secguidname = fenlei + nft;
		re += secguidname;
		break;
	}
	default:
		break;
	}
	return re;
}

string mk_backurl(string fenlei, string backdate, string res)
{
	string re = mainurl;
	re += "images/";
	re += fenlei;
	re += "/";
	re += backdate;
	re += "/";
	if (res != "")
	{
		re += res;
	}
	else
	{
		re += "default";
	}
	re += bxt;
	return re;
}
