#include <iostream>

using namespace std;

int main()
{
	int ArraySize = 10;
	int* DynamicArray = new int[ArraySize];

	for (int i = 0; i < 10; i++)
	{
		DynamicArray[i] = (i + 1) * 3;
	}

	int* NewDynamicArray = new int[20];
	copy(DynamicArray, DynamicArray + ArraySize, NewDynamicArray);
	delete[] DynamicArray;
	DynamicArray = NewDynamicArray;
	NewDynamicArray = nullptr;

	for (int i = 10; i < 20; i++)
	{
		DynamicArray[i] = (i - 9) * 4;
	}

	for (int i = 0; i < 20; i++)
	{
		cout << DynamicArray[i] << endl;
	}

	delete[] DynamicArray;
	DynamicArray = nullptr;

    return 0;
}