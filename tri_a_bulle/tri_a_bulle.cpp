#include <iostream>
#include <vector>
#include <stdlib.h>
#include "tri_a_bulle.h"


void tri_a_bulle(std::vector<int>& v)
	{

		int tmp;
		for (int i = v.size(); i >= 1; i--)
		{
			for (int j = 0; j < i-1; j++)
			{
				if (v[j] > v[j+1])
				{	
					
					tmp = v[j];
					v[j] = v[j+1];
					v[j+1] = tmp;
				}
			}
		}
	}
