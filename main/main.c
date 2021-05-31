#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bubble_sort.h" 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{	
	
	int array_size = 100000;
	srand((unsigned int)time(NULL));
	
	int array[array_size];
	int i; 
	
	for (i = 0; i < array_size; i++){
		int a = rand();
		array[i] = a;
		printf("%d \n",array[i]);	
	}
	
	bubble_sort(array,array_size);
	
}
