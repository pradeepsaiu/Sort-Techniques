#include "exchange.h"

ExchangeSort::ExchangeSort(int size_runtime):SortList(size_runtime){}

void ExchangeSort::sort()
{
	for(int i=0;i<this->size-1;i++)
	{
		for(int j=i+1;j<this->size;j++)
		{
			if(input[i]>input[j])
				swap(input+i,input+j);
		}
		if(this->size <= 20)
			display();
	}
}