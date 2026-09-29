//quick sort
#include <stdio.h>
#include <time.h>

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

    start = clock();

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    end = clock();

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("Time taken : %f in sec",(double)(end-start)/CLOCKS_PER_SEC);
}