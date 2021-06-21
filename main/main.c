#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h" 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{	
	
	int array_size = 100000;
	srand((unsigned int)time(NULL));
	
	int array1[array_size];
	int array2[array_size];
	int i; 
	
	for (i = 0; i < array_size; i++){
		int a = rand();
		array1[i] = a;
		array2[i] = a;
		printf("%d \n",array2[i]);	
	}
	
	//bubble_sort(array2,array_size);
	//merge_sort(array2, 0, array_size);
	quick_sort(array1, 0,array_size-1);
	
	
	return 0;
}
