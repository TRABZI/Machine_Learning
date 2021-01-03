#include <iostream>
#include <vector>
#include <stdlib.h>
#include "disp_vect.h"

using namespace std;

void disp_vect(std::vector<int> v)
	{
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i] <<",";
		}
		cout << " " << endl;
	}