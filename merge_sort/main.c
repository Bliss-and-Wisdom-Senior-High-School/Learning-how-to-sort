#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
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


void merge_sort(int arr[], int left, int right){
	    if (left < right){
	        int mid = left + (right - left) / 2;
	 
	        // Sort first and second halves
	        merge_sort(arr, left, mid);
	        merge_sort(arr, mid + 1, right);
	 
	        merge(arr, left, mid, right);
	    }
	}
	

int main(int argc, char *argv[]) {
	
	int arr[] = {12, 11, 13, 5, 6, 7};
	int left = 0 ,right = 5;
	merge_sort(arr,left,right);
	int i;
	for(i = 0;i < 6;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
	
	
	

