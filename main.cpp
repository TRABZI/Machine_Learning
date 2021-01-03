#include <iostream>
#include <new>
#include <vector>
#include <stdlib.h>
#include <chrono>
#include <ctime>
#include <random>
#include "quicksort.h"
#include "swap_function.h"
#include "disp_vect.h"
#include "test_tri.h"


using namespace std;

//generateur un tableau 


namespace random_function
{
	
	auto generate_numbers (int N)
	{
		std::vector<int> v;
		v.resize(N);

		std::random_device random_device;
		std::mt19937 random_engine(random_device());
		std::uniform_int_distribution<int> distribution_1_100(1, 100);

		for(int i = 0 ; i < N ; i++)
		{
			v[i] = distribution_1_100(random_engine);
			//std::cout << v[i] << endl;
		}	

		return v;
	}
}


int main(int argc, char *argv[])
{
	
	int N ;

	cout << "enter the size of vector:" << endl;
	cin >> N;

	auto start = std::chrono::system_clock::now();

	auto v = random_function::generate_numbers(N);

	cout << "vector before sort:" << endl;
	disp_vect(v);

	// test if v is in order or not. If not we run tri_a_bull to sort it 
	
	bool b = test_tri(v);
	if (!b)
	{
		quicksort(v,N);
	}
	cout << "vector after sort is:" << endl;
	disp_vect(v);

	auto end = std::chrono::system_clock::now();

	std::chrono::duration<double> elapsed_seconds = end-start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
 
    std::cout << "end of excution " << std::ctime(&end_time) << " time of excution: " << elapsed_seconds.count() << "s\n";

}