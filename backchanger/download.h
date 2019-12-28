#pragma once
#include <Windows.h>
#include <stdio.h>
#include <direct.h>
#include <string>
#include <urlmon.h>
#pragma comment(lib, "urlmon.lib")

using namespace std;

void download(string url,string filename);