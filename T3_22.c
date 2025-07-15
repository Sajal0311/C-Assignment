#include<stdio.h>
int sumarray(int arr[],int n,int i){
    while(n>0){
        i+=arr[n-1];
        return sumarray(arr,n-1,i);
    }
    printf("Sum of all elements is %d",i);
    return 0;
}
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements in array:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i=0;
    sumarray(arr,n,i);
    return 0;
}