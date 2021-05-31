#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int*, int*);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

clock_t start, end;

void swap(int *a, int *b){
	int temp=*a;
    *a=*b;
    *b=temp;
}

void bubble_sort(int *array, int len){
	int i = 0,j = 0;
	printf("Bubble sort : ");
	start = clock();
	
    for(i = 0; i < len; i++) {
        for(j = 0; j < len - 1 - i; j++) {
            if(array[j+1] < array[j]) {
            	swap(&array[j+1],&array[j]);
 	     	}
	   }
	
	}
	end = clock();
	float time_used = (float) (end-start)/CLK_TCK;
	printf("%.3f\n",time_used);
}
