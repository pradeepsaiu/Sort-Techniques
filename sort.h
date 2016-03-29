#ifndef sortclass
#define sortclass
#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <cmath>
using namespace std;

class SortList
{
	public:
		int *input;
		int *sorted_input;
		//size indexed from zero
		int size;
	public:
		SortList(int size_runtime);
		void fill_list();
		void swap(int *left,int *right);
		void display();
};

#endif