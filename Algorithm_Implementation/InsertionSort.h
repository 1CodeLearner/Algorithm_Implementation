#pragma once
#include <vector>

//inline void Insertion(std::vector<int>& v) 
//{
//	for (int i = 1; i < v.size(); ++i) 
//	{
//		for (int j = i; j > 0; --j) 
//		{
//			//if previous value is bigger than current value
//			if (v[j] < v[j - 1]) 
//			{
//				//swap values between previous and current j
//				std::swap(v[j], v[j-1]);
//			}
//		}
//		//result is lowest value ending up in leftmost side
//	}
//}

inline  void Insertion(std::vector<int>& v) 
{
	for (int i = 1; i < v.size(); ++i) 
	{
		int holdingVal = v[i];
		int insertedIdx = i;
		for (int j = i; j > 0; --j)
		{	
			//if value in hand is less than compared value
			if (holdingVal < v[j-1])
			{
				v[insertedIdx] = v[j-1];
				insertedIdx--;
			}
			else break;
		}
		v[insertedIdx] = holdingVal;
	}
}