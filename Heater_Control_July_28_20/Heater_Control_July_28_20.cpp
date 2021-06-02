#include <iostream> 
#include <string> 
using namespace std;

int main()
{
	int a;
	while (1 == 1)
	{
		cout << "Turn heater off""\n";
		cout << "Enter Temperature of car""\n";
		cin >> a;
		do {
			if (a < 5)
			{
				cout << "turn on heater" "\n";
				break;
			}

		} while (a < 10);
		do {
			if (a > 10)
			{
				cout << "Turn heater off" "\n";
				break;

			}
		} while (a > 10);
	}
	return 0;