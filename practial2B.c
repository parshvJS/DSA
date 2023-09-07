#include <stdio.h>

int binarySearch(int a[] , int search ,int size){

    int start = 0,mid;
    int end = size -1;

    while (start <=end) {
        mid=(start + end) /2;
        if(a[mid] ==search) {
            return mid+1;
        }
        if(a[mid] < search){
                    //    printf("searching in right side\n");
                    start=mid +1;
        }
        else
        {
            end = mid-1;
        }
    }


}



void main()
{
    int size,search;
    printf("Enter the size : ");
    scanf("%d", &size);
            printf("\n");


    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the Element %d : \n", i+1);
        scanf("%d", &a[i]);
        printf("\n");
    }

    printf("Enter the search Element : \n" ); 
    scanf("%d" , &search);
            printf("\n");


    if(a[size-1] < search){
        printf("entered Element Doesn't Exist ! ");
                printf("\n");

    }
    else{
        int searchIndex = binarySearch(a , search ,size-1);
        printf("Element Exist in Index : %d " , searchIndex);
    }
}