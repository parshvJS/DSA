#include <stdio.h>

int main() {
    int size,search,flag;
    printf("enter the size : ");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        printf("Enter the Element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("Enter the search Element : ");
    scanf("%d" ,&search);
    printf("\n");
    
    for(int i=0;i<size ;i++){
        if(a[i]==search){
            flag=i;
            break;
        }
    }
    
    if(flag!=0){
        printf("Element found on index : %d",flag+1);
    }
    else{
        printf("Entered search element no exist in data ! ");
    }

    return 0;
}