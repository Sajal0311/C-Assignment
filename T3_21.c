#include<stdio.h>
int array(int arr[],int n,int i){
    while(i<n){
        printf("%d ",arr[i]);
        return array(arr,n,i+1);
    }
    return 0;
}
int main(){
    int n;
    printf("Enter the size fd array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i=0;
    array(arr,n,i);
    return 0;
}