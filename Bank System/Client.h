#pragma once
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include "Dataset.h"
#include "SYNCH.h"
#define str string
#define cls system("cls")
using namespace std;
class Client : public SYNCH, public Dataset
{
public:
	Client();
	void signUp();
	//void login();
	void showData();
private:
	bool isFound(str email_);
	bool checkAccess(str email_, str pass_);
	bool isLeapYear(int year);
	bool validateDateOfBirth(int day, int month, int year);
	void addClient();
protected:
	str fname, lname, email, pass, confirm, addr;
	vector<int> bth; // bth[0] day, bth[1] month, bth[2] year
};

