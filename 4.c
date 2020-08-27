//1905622 - NITISH KUMAR SONTHALIA
//SEARCHING
#include <stdio.h>

int main()
{
    int i,n;  
 
     printf("Enter size of array: ");
    scanf("%d",&n);
    int a[100];
 
     printf("Enter %d elements in the array : ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the element to be searched");
    int s,c;
    scanf("%d",&s);
    for (i = 0; i < n; i++){
        if (a[i] == s){
            printf("Element Found ");
            c=1;
            break;
        } 
    } 
    if (c!= 1){
        printf("Element  not Found ");
    }
         
    return 0;
}