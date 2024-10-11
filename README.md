//2 dimension array
#include<stdio.h>
int main(){
    int i , j;
    int marks [2][3] = {{2,3,4},{5,6,7}};
    for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        printf("marks [%d][%d] = %d\n",i,j, marks [i][j]);
    }
}
        return 0;
    }
