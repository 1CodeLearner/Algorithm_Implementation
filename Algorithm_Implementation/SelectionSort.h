#pragma once
#include <vector>

inline void SelectionSortExample(std::vector<int>& v)
{
	//max value first
	for (int i = 0; i < v.size() - 1; ++i)
	{
		int value = v[i];
		int valueIndex = i;
		for (int j = i + 1; j < v.size(); ++j)
		{
			if (value < v[j])
			{
				value = v[j];
				valueIndex = j;
			}
		}
		int temp = v[i];
		v[i] = value;
		v[valueIndex] = temp;
	}
}

