#pragma once
#include <iostream>
#include <string>
#include "changeback.h"
#include "checkres.h"
#include "download.h"
#include <fstream>
#include "define.h"

using namespace std;

string mk_guidurl(int level, string fenlei = "");
string mk_backurl(string fenlei, string backdate, string resolution = "");