#include <iostream>
#include "SelectionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "InsertionSort.h"
#include <random>

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
	std::mt19937 mt(std::random_device{}());
	std::uniform_int_distribution<int> dist(2,50);
	int max = dist(mt);
	std::vector<int> v;
	for (int i = 0; i < max; ++i) 
	{
		v.push_back(dist(mt));
	}

	//SelectionSortExample(v);

	//MergeSort(values);
	//QuickSort(values, 0, values.size() - 1);
	Insertion(v);

	Print(v);


	//int array[] = {10,12,14,16,2,4,6,8};
	//std::cout << BinarySearch(array) << std::endl;

}