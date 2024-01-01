#pragma once
#include <iostream>
#include <windows.h>
using namespace std;
class SYNCH // Synchroniser
{
public:
	void start();
	void finish();
	void aboutUs();
protected:
	int error_ms = 1000,
		load_ms = 200,
		delay_ms = 2000,
		IO_ms = 3000;
};