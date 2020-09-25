#include<stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int l, int r){
     int i=l+1,j,pivot = arr[l];

     for(j=l+1 ;j <= r; j++){
          if (arr[j] < pivot) {      
               swap(&arr[i], &arr[j]);
               i+=1; 
          } 
     }
     swap(&arr[i+1],&arr[l]);
     return i+1;
}

void quick_sort(int arr[], int l, int r){
     int p = partition(arr,l,r);

     quick_sort(arr,l,p-1);
     quick_sort(arr,p+1,r);
}

int main(){
    int arr[50];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    quick_sort(arr,0,n-1);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}