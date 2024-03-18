#pragma once
#include <vector>
#include <iostream>
#include <random>

int Partition(std::vector<int>& Vector, int low, int high);
int RandomizedPartition(std::vector<int>& Vector, int low, int high);
int SecondPartition(std::vector<int>& Vector, int low, int high);

inline void QuickSort(std::vector<int>& Vector, int low, int high )
{
	if(low > high)
	{
		return; 
	}

	int pivot = SecondPartition(Vector, low, high);

	QuickSort(Vector, low, pivot - 1);
	QuickSort(Vector, pivot + 1, high);
}

inline int SecondPartition(std::vector<int>& Vector, int low, int high)
{
	int value = Vector[low];

	int left = low + 1; 
	int right = high;

	//Continue until left is greater than right
	while(left <= right)
	{
		//increment until left element is greater than the value
		while(left <= high && value >= Vector[left])
			left++;
		//increment until right element is less than the value
		while(right >= low + 1 && value <= Vector[right])
			right--;

		if(left < right)
			std::swap(Vector[left], Vector[right]);
	}

	std::swap(Vector[low], Vector[right]);
	//return pivot index
	return right;
}

inline int RandomizedPartition(std::vector<int>& Vector, int low, int high)
{
	std::mt19937 random(std::random_device{}());
	std::uniform_int_distribution<int> dist(low, high);
	int index = dist(random);

	std::swap(Vector[index], Vector[high]);
	int i = 0;
	int pivot = i;

	while(i < high)
	{
		//if an element is lower than given vector[high], swap elements between pivot and index
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

