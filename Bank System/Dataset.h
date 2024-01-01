#pragma once
#include <iostream>
#include <windows.h>
#include <vector>
#define str string
using namespace std;
class Dataset
{
protected:
	vector<str> userName, Email, Password, Address;
	vector<vector<int>> DateOfBrith;
	vector<double> Balance;
};