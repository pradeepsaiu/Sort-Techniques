#ifndef radixh
#define radixh

#include "sort.h"


class RadixSort : public SortList
{
	public:
		RadixSort(int size_runtime);
		void radix_sort(int size_runtime);
		//sorts the input array with specified digit
		void count_sort(int digit);
		int get_digit(int num,int digit);
};

#endif