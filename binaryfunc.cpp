#include<stdio.h>

void binary(int a[],int key,int left,int right){
    int mid=(left+right)/2;
    if(left>right)
        printf("not found");
    else if(a[mid]==key)
        printf("found at index %d",mid);
    else if(a[mid]>key)
        binary(a,key,left,mid-1);
    else
        binary(a,key,mid+1,right);
}

int main(){
    int a[]={1,2,5,6,7,8,9,12},key;
    printf("enter key");
    scanf("%d",&key);
    binary(a,key,0,sizeof(a)/sizeof(a[0]));
}