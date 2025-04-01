#include <iostream>

using namespace std;

int main()
{
	string star = "*";
	for (int i = 0; i < 5; i++)
	{
		cout << star << endl;
		star = star + "*";
	}

	cout << endl;
	
	int MaxCount = 0;

	cin >> MaxCount;

	for (int i = 0; i < MaxCount; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < MaxCount; i++)
	{
		for (int j = 0; j < MaxCount - i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 0; i < MaxCount; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < MaxCount - i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 0; i < MaxCount; i++)
	{
		for (int j = 0; j < MaxCount; j++)
		{
			if (j >= i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

    return 0;
}