#include<stdio.h>
int main(){
    int a[]={9,5,8,3,1,7},i,j;
    for( i=0;i<6-1;i++){
        int minIndex=i;
        for( j=i+1;j<6;j++){
            if(a[minIndex]>a[j]){
                minIndex=j;
            }

        }
        if(minIndex!=i){
            int temp=a[i];
            a[i]=a[minIndex];
            a[minIndex]=temp;

        }

    }

    for( i=0;i<6;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}