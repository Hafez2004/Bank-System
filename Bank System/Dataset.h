#pragma once
#include "SYNCH.h"
#define str string
using namespace std;
class Dataset : public SYNCH
{
protected:
	vector<str> userName, Email, Password, Address;
	vector<vector<int>> DateOfBrith;
	vector<double> Balance;
};