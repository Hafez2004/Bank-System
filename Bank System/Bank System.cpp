#include "SYNCH.h"
#include "Client.h"
using namespace std;
SYNCH BootStrap;
Client x;
int main()
{
	int count = 2;
	BootStrap.start();
	while(count--)
		x.signUp();
	x.showData();
	BootStrap.finish();
	return 0;
}