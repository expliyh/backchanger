#pragma once
#include <string>
#include <iostream>
#include <Windows.h>
using namespace std;


class resolution
{
public:
	string to_str(bool addx = false);
	resolution();
private:
	int height, width;
};