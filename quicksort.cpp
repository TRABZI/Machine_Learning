#include <iostream>
#include <vector>
#include <stdlib.h>
#include "swap_function.h"
#include "quicksort.h"


int partition(std::vector<int>& v,int start,int end)
	{
		auto counter=start;
		auto p=v[start];
		
		for (int i=start+1; i<=end; i++) {
			if (v[i]<p) {
				counter++;
				swap_function(v[counter], v[i]);
			}
		}
		swap_function(v[counter], v[start]);
		return counter;
	}		

void qsort(std::vector<int>& v, int start, int end)
{
	if(start<end)
	{
		auto piv = partition(v,start,end);
		qsort(v,start, piv-1);
		qsort(v,piv+1,end);
	}

}

void quicksort(std::vector<int>& v, int length)
{
	qsort(v,0,length-1);
}

