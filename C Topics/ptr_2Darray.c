#include<stdio.h>

int main(){
    int a[2][3]={{1,2,3},{4,5,6}};
    // int *p[3]=a;    //int p pointer to a

    // printf("%d\n",a[1][2]);
    // printf("%d\n",*(*(a+1)+2)); //a[1][2] == *(*(a+1)+2)

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d",*(*(a+i)+j));
            // printf("%d",a[i][j]);        // *(*(a+i)+j) == a[i][j]
        }
        printf("\n");
    }

    return 0;
}




/////# 3D array #/////

// int a[3][2][2];
// int *ptr[2][2]=a;