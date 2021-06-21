#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bubble_sort.h" 


void selection_sort(int *arr, int len){
	int i=0, j=0, min,k;
	
	printf("Selection sort : ");
	start = clock();
	
	for(i=0;i<len-1;i++){
		min=i;
		for(j=i;j<len;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		if(i!=min){
			swap(&arr[min],&arr[i]);
		}
	}
	end = clock();
	
	float time_used = (float) (end-start)/CLK_TCK;
	printf("%.3f\n",time_used);
}

