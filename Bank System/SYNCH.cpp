#include "SYNCH.h"

void SYNCH::start()
{
    system("color 06");
	cout << "\t\t\t\t\t[Bank System]\n";
	cout <<
        "\t\t\t _____          _    ____          _     \n"
		"\t\t\t|  ___|__  _ __| |_ / ___|__ _ ___| |__  \n"
		"\t\t\t| |_ / _ \\| '__| __| |   / _` / __| '_ \\ \n"
		"\t\t\t|  _| (_) | |  | |_| |__| (_| \\__ \\ | | |\n"
		"\t\t\t|_|  \\___/|_|   \\__|\\____\\__,_|___/_| |_|\n";
	cout <<
                 "\t\t\t\t            ____\n"
                 "\t\t\t\t     _,-ddd888888bbb-._\n"
                 "\t\t\t\t   d88888888888888888888b\n"
                 "\t\t\t\t d888888888888888888888888b\n"
                 "\t\t\t\t6888888888888888888888888889\n"
                 "\t\t\t\t68888b8\"\"8q8888888p8\"\"8d88889\n"
                 "\t\t\t\t`d8887     p88888q     4888b'\n"
                 "\t\t\t\t `d8887    p88888q    4888b'\n"
                 "\t\t\t\t   `d887   p88888q   488b'\n"
                 "\t\t\t\t     `d8bod8888888dob8b'\n"
                 "\t\t\t\t       `d88888888888d'\n"
                 "\t\t\t\t         `d8888888b'\n"
                 "\t\t\t\t           `d8888b'\n"
                 "\t\t\t\t             `bd'\n";
	Sleep(IO_ms);
	system("cls");
}

void SYNCH::finish()
{
    char x = 5;
    cout << "\n\n\n\n\t\t\t\t\t";
    while (x--)
    {
        cout << "###  ";
        Sleep(load_ms);
    }
    cout << "\n\t\t\t\t\t\t [Done]";
    Sleep(IO_ms);
    system("cls");
}

void SYNCH::aboutUs()
{
    cout << "No Description here...\n";
    Sleep(1500);
    system("cls");
}

void SYNCH::click()
{
    str command;
    cout << "\n\n:: ", cin >> command;
    if (command == "exit" || command == "out" || command == "quit")
    {
        cls;
        finish();
        ExitProcess(0);
    }
    cls;
}

bool SYNCH::validateInput(string input)
{
    for (int index = 0; index < input.size(); index++)
        if (input[index] < 48 || input[index] > 57)
            return false;
    return true;
}