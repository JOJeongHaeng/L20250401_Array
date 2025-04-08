#include <iostream>

using namespace std;

int* Resize(int* Original, int OriginalSize, int NewSize)
{
	int* NewDynamicArray = new int[NewSize];

	for (int i = 0; i < OriginalSize; i++)
	{
		NewDynamicArray[i] = Original[i];
	}

	delete[] Original;
	Original = NewDynamicArray;
	NewDynamicArray = nullptr;

	return Original;
}

int main()
{
	int ArraySize = 10;
	int* DynamicArray = new int[ArraySize];

	for (int i = 0; i < 10; i++)
	{
		DynamicArray[i] = (i + 1) * 3;
	}

	DynamicArray = Resize(DynamicArray, 10, 20);

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