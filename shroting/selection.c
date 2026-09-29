#include <stdio.h>
#include <time.h>

void selectionSort(int arr[],int n){
    int i , j ,minj , minx;

    for(int i=0;i<n;i++){
        minj=i;
        minx=arr[i];

        for(int j=i+1;j<n;j++){
            if(arr[j]<minx){
                minj=j;
                minx=arr[j];
            }
        }
        arr[minj]=arr[i];
        arr[i]=minx;
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
    selectionSort(arr,n);
    end=clock();

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("Time taken %f in sec",(double)(end-start)/CLOCKS_PER_SEC);
}