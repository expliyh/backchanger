#pragma once
#include <Windows.h>
#include <WinInet.h>
#include <iostream>
#include <stdio.h>
#include <direct.h>
#include <string>
#include <urlmon.h>
#pragma comment(lib, "urlmon.lib")
#pragma comment(lib, "wininet.lib")

using namespace std;

void download(string url,string filename);