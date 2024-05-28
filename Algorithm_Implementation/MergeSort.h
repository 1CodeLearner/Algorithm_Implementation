#pragma once
#include <vector>
#include <iostream>
#include <algorithm>


template<typename T>
void Merge(std::vector<T>& left, std::vector<T>& right, std::vector<T>& output);

template<typename T>
void MergeSort(std::vector<T>& values)
{
	if(values.size() < 2) return;

	int mid = values.size() / 2;

	std::vector<T> left(mid);
	std::vector<T> right(values.size() - mid);

	std::copy(values.begin(), values.begin() + mid, left.begin());
	std::copy(values.begin() + mid, values.end(), right.begin());

	//for (int i = 0; i < mid; ++i) {
	//	left[i] = values[i];
	//}
	//for (int i = mid; i < values.size(); ++i) {
	//	right[i - mid] = values[i];
	//}

	MergeSort(left); 
	MergeSort(right);

	Merge(left, right, values);


	//if (values.size() < 2)
	//	return;

	//int max = values.size();
	//int min = 0;

	//int mid = (max - min) / 2 + min;

	//std::vector<T> left(mid);
	//std::vector<T> right(max - mid);

	//std::copy(values.begin(), values.begin() + mid, left.begin());
	//std::copy(values.begin() + mid, values.begin() + max, right.begin());

	//MergeSort(left);
	//MergeSort(right);

	//Merge(left, right, values);



}

template<typename T>
void Merge(std::vector<T>& left, std::vector<T>& right, std::vector<T>& output)
{
	int i = 0, j = 0, k = 0;

	while (i < left.size() && j < right.size())
	{
		if (left[i] < right[j])
		{
			output[k] = left[i];
			i++;
		}
		else
		{
			output[k] = right[j];
			j++;
		}
		k++;
	}

	while (i < left.size())
	{
		output[k] = left[i];
		i++;
		k++;
	}

	while (j < right.size())
	{
		output[k] = right[j];
		j++;
		k++;
	}
}