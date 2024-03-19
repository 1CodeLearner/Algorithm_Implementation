#pragma once
#include <vector>

inline void SelectionSort(std::vector<int>& v)
{
	for (int i = 0; i < v.size() - 1; ++i) 
	{
		int min = v[i];
		int index = i;
		for (int j = i + 1; j < v.size(); ++j) 
		{
			//if value is less than current lowest value
			if (v[j] < min) 
			{
				min = v[j];
				index = j;
			}
		}
		std::swap(v[i], v[index]);
	}
}

