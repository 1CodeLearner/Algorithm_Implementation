#include <iostream>
#include "MergeSort.h"

int unsortedInt[] = { 1, 6,3, 5, 7, 1,8, 12,4, 6 }; //7, 7,7, 2,3,4, 6,7,7, 8,6,8,9,0 ,1, 2,12,6};
int size = 10;



void SelectionSortExample(int* _ptrArr, int _size)
{
	//max value first
	for (int i = 0; i < _size - 1; ++i)
	{
		int value = _ptrArr[i];
		int valueIndex = i;
		for (int j = i + 1; j < _size; ++j)
		{
			if (value < _ptrArr[j])
			{
				value = _ptrArr[j];
				valueIndex = j;
			}
		}
		int temp = _ptrArr[i];
		_ptrArr[i] = value;
		_ptrArr[valueIndex] = temp;
	}
	for (int i = 0; i < _size; ++i) 
	{
		std::cout << _ptrArr[i] << " ";
	}
	std::cout << std::endl;
}

int BinarySearch() 
{
	
}


int main()
{
	SelectionSortExample(unsortedInt, size);

	std::vector<int> values = {190,1,2891,2834,1,1,25,67,1};
	MergeSort(values);
	for(auto i = values.begin(); i!=values.end(); ++i)
	{
		std::cout << *i << " ";
	}

	
	int array[] = {10,12,14,16,2,4,6,8};
	std::cout << BinarySearch(array) << std::endl;

}