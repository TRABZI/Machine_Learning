#include <iostream>
#include <vector>
#include <stdlib.h>
#include "test_tri.h"


bool test_tri(std::vector<int> v)
	{
		for (int i = 0; i < v.size()-1; i++)
		{
			if(v[i]>v[i+1]) return false;
		}
		return true;
	}
