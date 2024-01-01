#include "Client.h"

Client::Client() : fname(""), lname(""), email(""), confirm(""), pass(""), addr("")
{
    bth.push_back(0);
    bth.push_back(0);
    bth.push_back(0);
}

void Client::signUp()
{
	cout << "\t\t[SIGN-UP]\n\n";
	cout << "First Name : ", cin >> fname;
	cout << " Last Name : ", cin >> lname;
    cout << "  Address  : ";
    do { getline(cin, addr); } while (addr == "");
    cout << "\t[Date Of Birth]\n";
    do{
        cout << "Day : ", cin >> bth[0];
        cout << "Month : ", cin >> bth[1];
        cout << "Year : ", cin >> bth[2];
        if (!validateDateOfBirth(bth[0], bth[1], bth[2]))
        {
            cout << "\t[Invalid Date]\n";
            Sleep(error_ms);
        }
    } while (!validateDateOfBirth(bth[0], bth[1], bth[2]));
    cls;
    cout << "\t\t[SIGN-UP]\n\n";
    do
    {
        cout << "Email : ", cin >> email;
        cout << "Password : ", cin >> pass;
        cout << "Confirm Password : ", cin >> confirm;
        if (isFound(email))
        {
            cout << "\t[Unavailable Email]\n";
            Sleep(error_ms);
        }
        else if (pass != confirm || pass == "" || confirm == "")
        {
            cout << "\t[Invalid Password]\n";
            Sleep(error_ms);
        }
    } while (isFound(email) || pass != confirm || pass == "" || confirm == "");
    addClient();
    cout << "\t\t[DONE]";
    Sleep(delay_ms);
    cls;
}

bool Client::isFound(str email_)
{
    auto it = find(Email.begin(), Email.end(), email_);
    return it != Email.end();
}

bool Client::checkAccess(str email_, str pass_)
{
    auto it = find(Email.begin(), Email.end(), email_);
    if (it != Email.end())
    {
        int index = distance(Email.begin(), it);
        if (Password[index] == pass_)
            return true;
    }
    return false;
}

bool Client::isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool Client::validateDateOfBirth(int day, int month, int year) {

    // Map to store month names with their corresponding month lengths
    map<int, int> monthLengths = {
        {1, 31}, {2, 28}, {3, 31}, {4, 30},
        {5, 31}, {6, 30}, {7, 31}, {8, 31},
        {9, 30}, {10, 31}, {11, 30}, {12, 31}
    };

    // Check if the month is valid
    if (month < 1 || month > 12)
        return false;

    // Check if the day is valid for the given month
    if (day < 1 || day > monthLengths[month])
        return false;

    // Check if February has 29 days for a leap year
    if (month == 2 && day == 29 && !isLeapYear(year))
        return false;

    // Check if the year is reasonable (assuming a realistic upper limit)
    if (year < 1900 || year > 2100)
        return false;

    // Date is valid
    return true;
}

void Client::addClient()
{
    userName.push_back(fname + ' ' + lname);
    DateOfBrith.push_back(bth);
    Email.push_back(email);
    Password.push_back(pass);
    Address.push_back(addr);
    Balance.push_back(0.0);
}

void Client::showData()
{
    cout << "\t\t[Clients Data]\n\n";
    if (Email.size() > 0)
    {
        str ok;
        for (int i = 0; i < Email.size(); i++)
        {
            cout << '\t' << i+1 << ' ' << userName[i] << "   " << Email[i] << "   " << DateOfBrith[i][0];
            for (int j = 1; j < DateOfBrith[i].size(); j++)
                cout << '/' << DateOfBrith[i][j];
            cout << endl;
        }
        cout << ":: ", cin >> ok;
        Sleep(load_ms);
        cls;
    }
    else
    {
        cout << "\t\t[Empty Data]\n\n";
        Sleep(load_ms);
    }
}