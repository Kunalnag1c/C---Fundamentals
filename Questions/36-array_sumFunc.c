    //Find the sum of an array using a function.

#include<stdio.h>

int main(){
    int i,j,m,n;
    printf("Enter the size of array1= ");
    scanf("%d", &m);
    int a[m];
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the size of array2=");
    scanf("%d", &n);
    int b[n];
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }

    int sum[100];
    printf("Sum= ");
    for(i=0,j=0;i<m,j<n;i++,j++){
        sum[i]=a[i]+b[i];
        printf("%d ",sum[i]);

    }


    return 0;
}