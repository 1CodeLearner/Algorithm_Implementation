#include <iostream>
#include "SelectionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"

int BinarySearch()
{
	return 0;
}


void Print(std::vector<int> v)
{
	for (auto i = v.begin(); i != v.end(); ++i)
	{
		std::cout << *i << " ";
	}
}

int main()
{
	std::vector<int> v = { 1, 6,3, 5, 7, 1,8, 12,4, 6 }; //7, 7,7, 2,3,4, 6,7,7, 8,6,8,9,0 ,1, 2,12,6};

	//SelectionSortExample(v);

	//MergeSort(values);
	//QuickSort(values, 0, values.size() - 1);
	
	Print(v);


	//int array[] = {10,12,14,16,2,4,6,8};
	//std::cout << BinarySearch(array) << std::endl;

}