#include "pch.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
	int NumOfLines, count = 0, count1 = 0, k = 0;
	cout << "Enter number of rows: ";
	cin >> NumOfLines;
	for (int i = 1; i <= NumOfLines; ++i)
	{
		for (int counter = 1; counter <= NumOfLines - i; ++counter)
		{
			cout << "  ";
			++count;
		}
		while (k != 2 * i - 1)
		{
			if (count <= NumOfLines - 1)
			{
				cout << i - k << " ";
				++count;
			}
			else
			{
				++count1;
				cout << k - i + 2 << " ";
			}
			++k;
		}
		count1 = count = k = 0;
		cout << endl;
	}
	return 0;
}