#include "heap.h"

HeapSort::HeapSort(int size_runtime):SortList(size_runtime){}

void HeapSort::heap_sort(int size_runtime)
{
	build_max_heap(size_runtime);
	for(int i=size_runtime;i>=0;i--)
	{
		if(this->size <= 20)
			display();
		swap(input+0,input+i);
	 	max_heapify(0,i-1);
	}
}
//if n is parent 2n,2n+1 are it's children
void HeapSort::build_max_heap(int size_runtime)
{
	for(int i=floor(size_runtime/2);i>=0;i--)
	{
		//o index so size_runtime -1
		max_heapify(i,size_runtime-1);
	}
}
//for maintaining max heap when root gets effected
void HeapSort::max_heapify(int i,int size_runtime)
{
	int left,right,largest;
	//base case if only one element exists
	if(i==size_runtime)
		return;
	//since the root  is at zero index.
	left  = 2*i+1;
	right = 2*i+2;
	//won't reach array out of bound coz if first fails it exits
	if(left<=size_runtime && input[left]>input[i])
		largest = left;
	else
		largest = i;
	if(right<=size_runtime && input[right]>input[largest])
		largest = right;
	if(largest != i)
	{
		swap(input+i,input+largest);
		max_heapify(largest,size_runtime);
	}
	//else is one of the base case.
}