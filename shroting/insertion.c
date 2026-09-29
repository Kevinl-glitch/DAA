#include <stdio.h>
#include <time.h>

void insertionSort(int arr[] ,int n){
    int i , j , key;

    for(int i=1;i<n;i++){
        key=arr[i];
        j=i-1;

        
            while(j>=0 && arr[j] > key){
                arr[j+1]=arr[j];
                j--;
            }
        
        arr[j+1]=key;
    }
}

void main(){
    int n;

    printf("Enter a number of element : ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter a element : ");
        scanf("%d",&arr[i]);
    }

    clock_t start , end;

    start=clock();
    insertionSort(arr,n);
    end=clock();

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("Time taken %f in sec",(double)(end-start)/CLOCKS_PER_SEC);
}