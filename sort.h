#ifndef sortclass
#define sortclass
#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <cmath>

class SortList
{
	protected:
		int *input;
		int *sorted_input;
		int size;
	public:
		SortList(int size_runtime);
		void fill_list();
		void swap(int *left,int *right);
		void display();
};

#endif