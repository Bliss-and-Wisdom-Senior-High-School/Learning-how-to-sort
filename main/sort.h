#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*declear function here.😅*/
void swap(int *a, int *b);
void bubble_sort(int *array, int len);
void selection_sort(int* arr, int len);
void merge(int *arr,int left,int mid ,int right);
void mergesort(int arr[], int left, int right);
void merge_sort(int arr[], int left, int right);
void quicksort(int *array, int front, int end);
void quicksort(int *array, int front, int end);
void insertion_sort(int arr[], int len);

void swap(int *a, int *b){
	int temp=*a;
    *a=*b;
    *b=temp;
}

void bubble_sort(int *array, int len){
	int i = 0,j = 0;
	clock_t start, end;
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
	float time_used = (float) (end-start)/CLOCKS_PER_SEC;
	printf("%.3f\n",time_used);
}

void selection_sort(int *arr, int len){
	int i=0, j=0, min,k;
	clock_t start, end;
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
	
	float time_used = (float) (end-start)/CLOCKS_PER_SEC;
	printf("%.3f\n",time_used);
}

void merge(int *arr,int left,int mid ,int right){
		
		//int left_index = mid - left + 1;
	    //int right_index = right - mid;
		int right_arr[right - mid];
		int left_arr[mid - left + 1]; 
		
		int i, j;
		for (i = 0; i < mid - left + 1; i++)
	        	left_arr[i] = arr[left + i];
	   	for (j = 0; j < right - mid; j++)
	        	right_arr[j] = arr[mid + 1 + j];
		
		int left_index = 0;
		int right_index = 0;
		int marge_index = left;
		
		while (left_index < mid - left + 1 && right_index < right - mid){
	        if (left_arr[left_index] <= right_arr[right_index]) {
	            arr[marge_index] = left_arr[left_index];
	            left_index++;
	        }
	        else {
	            arr[marge_index] = right_arr[right_index];
	            right_index++;
	        }
	        marge_index++;
	    }
		
		while (left_index < mid - left + 1) {
	        arr[marge_index] = left_arr[left_index];
	        left_index++;
	        marge_index++;
	    }
	    
	    while (right_index < right - mid) {
	        arr[marge_index] = right_arr[right_index];
	        right_index++;
	        marge_index++;
	    }
}


void mergesort(int arr[], int left, int right){
	
	
	    if (left < right){
	        int mid = left + (right - left) / 2;
	 
	        // Sort first and second halves
	        mergesort(arr, left, mid);
	        mergesort(arr, mid + 1, right);
	 
	        merge(arr, left, mid, right);
	    }
	
}

void merge_sort(int arr[], int left, int right){
	clock_t start, end;
	printf("merge sort : ");
	start = clock();
	
	mergesort(arr, left, right);
	
	end = clock();
	float time_used = (float) (end-start)/CLOCKS_PER_SEC;
	printf("%.3f\n",time_used);
}


void quicksort(int *array, int front, int end){
	int j;
    if (front < end) {
        int pivot = array[end];
        int i = front -1;
        for (j = front; j < end; j++) {
            if (array[j] < pivot) {
                i++;
                swap(&array[i], &array[j]);
            }
        }
        i++;
        swap(&array[i], &array[end]);
        quicksort(array, front, i - 1);
        quicksort(array, i + 1, end);
    }
}

void quick_sort(int *arr,int front,int end){
	clock_t start, end1;
	printf("quick sort : ");
	start = clock();
	
	quicksort(arr, front, end);
	
	end1 = clock();
	float time_used = (float) (end1-start)/CLOCKS_PER_SEC;
	printf("%.3f\n",time_used);
}

void insertion_sort(int arr[], int len){
	int i, preIndex, n;
	clock_t start, end1;
	printf("insertion sort : ");
	start = clock();
	
	for(i = 1; i < len; i++){
		preIndex=i-1;
		n=arr[i];
		while(n < arr[preIndex] && preIndex >= 0){
			arr[preIndex+1]=arr[preIndex];
			preIndex-=1;
		}
		arr[preIndex+1]=n;
	}
	end1 = clock();
	float time_used = (float) (end1-start)/CLOCKS_PER_SEC;
	printf("%.3f\n",time_used);
}

