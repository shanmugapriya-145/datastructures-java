//Merging the elements in the lists
#include <stdio.h>
int main() {
    int a[]={1,2,3};
    int b[]={4,5,6};
    int c[10];
    int na=sizeof(a)/sizeof(a[0]);
    int nb=sizeof(b)/sizeof(b[0]);
    printf("Size of a=%d\n",na);
    printf("Size of b=%d\n",nb);
    for(int i=0;i<na;i++)
    {
        c[i]=a[i];
    }
    for(int j=0;j<nb;j++)
    {
        c[na+j]=b[j];
    }
    printf("Elements of c:\n");
    for(int k=0;k<(na+nb);k++)
    {
        printf("%d\n",c[k]);
    }
    int nc=sizeof(c)/sizeof(c[0]);
    printf("Size of c=%d\n",na);
    return 0;
}
