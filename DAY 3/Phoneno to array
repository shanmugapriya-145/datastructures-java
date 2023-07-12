#include <stdio.h>
int main() {
    int rem;
    long int p;
    int arr[10]={};
    printf("Enter your phone number\n");
    scanf("%ld",&p);
    while(p>0)
    {
       
        rem=p%10;
        arr[rem]=1;
        p=p/10;
    }
    int narr=sizeof(arr)/sizeof(arr[0]);
    printf("%d",narr);
    for(int i=0;i<narr;i++)
    {
        printf("\n %d",arr[i]);
    }

    return 0;
}
