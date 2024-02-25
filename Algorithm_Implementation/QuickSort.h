#pragma once
#include <vector>
#include <iostream>
#include <random>

int Partition(std::vector<int>& Vector, int low, int high);

int RandomizedPartition(std::vector<int>& Vector, int low, int high);

inline void QuickSort(std::vector<int>& Vector, int low, int high )
{
	if(low > high)
	{
		return; 
	}

	int pivot = RandomizedPartition(Vector, low, high);

	QuickSort(Vector, low, pivot - 1);
	QuickSort(Vector, pivot + 1, high);
}

inline int RandomizedPartition(std::vector<int>& Vector, int low, int high)
{
	std::mt19937 random(std::random_device{}());
	std::uniform_int_distribution<int> dist(low, high);
	int pivot = dist(random);

	std::swap(Vector[pivot], Vector[high]);
	int i = 0;
	pivot = i;

	while(i < high)
	{
		if(Vector[i] <= Vector[high])
		{
			std::swap(Vector[pivot], Vector[i]);
			pivot++;
		}
		i++;
	}

	std::swap(Vector[pivot], Vector[high]);
	return pivot;
}


inline int Partition(std::vector<int>& Vector, int low, int high)
{
	//Rightmost value in Vector
	int Value = Vector[high];

	int i = low;
	int curIndex = i;

	while(i < high)
	{
		if(Vector[i] <= Value)
		{
			std::swap(Vector[curIndex], Vector[i]);
			curIndex++;
		}
		i++;
	}

	std::swap(Vector[curIndex], Vector[high]);
	return curIndex;
}

