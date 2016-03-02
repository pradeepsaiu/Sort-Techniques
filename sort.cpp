
#include "sort.h"

SortList::SortList(int size_runtime)
{
	this->input 		= new int[size_runtime];
	this->sorted_input 	= new int[size_runtime];
	this->size 			= size_runtime;
	//storing the size indexing from 1
}

void SortList::fill_list()
{
	srand(time(NULL));
	int range=this->size*2;
	//taking double input size inorder to avoid collisions
	if(this->size < 20)
		range =15;
	for(int i=0;i<this->size;i++)
		{
			this->input[i]=rand()%range +1;
		}
}
void SortList::swap(int *left,int *right)
{
	int temp;
	temp=*left;
	*left=*right;
	*right=temp;
}
void SortList::display()
{
	if(this->size <=20)
	{
		for(int i=0;i<this->size;i++)
		{
			for(int j =0;j<this->input[i];j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		printf("\n");
	}
	else
	{
		for(int i=0;i<this->size;i++)
		{
			printf("%d\t",this->input[i]);
		}
		printf("\n");
	}
}

