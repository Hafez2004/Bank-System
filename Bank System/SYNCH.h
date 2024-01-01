#pragma once
#include <iostream>
#include <algorithm>
#include <map>
#include <cctype>
#include <string>
#include <vector>
#include <windows.h>
#define str string
#define cls system("cls")
using namespace std;

class SYNCH // Synchroniser
{
public:
	void start();
	void finish();
	void aboutUs();
protected:
	void click();
	bool validateInput(string input);
	int error_ms = 1000,
		load_ms = 300,
		delay_ms = 2000,
		IO_ms = 3000;
};