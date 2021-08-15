#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
	int temp=*a;
    *a=*b;
    *b=temp;
}

void selection_sort(int *arr, int len){
	int i=0, j=0, min,k;
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
}

int main(int argc, char *argv[]){
    int arr[10] =  {1,5,9,3,6,8,2,4,7};
    int i;
	for(i = 0; i < 10;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	
	selection_sort(arr,10);
	
	for(i = 0; i < 10;i++){
		printf("%d",arr[i]);
	}
    return 0;
}
