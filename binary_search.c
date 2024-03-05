#include <stdio.h>
int main(){
    int arr[]={12,23,36,45,59,69,75,84,89,92,98};
    int l,r,mid,n,data;
    n=sizeof(arr)/sizeof(arr[0]);
    l=0;
    r=n-1;
    printf("Enter the data to search :- ");
    scanf("%d",&data);
    mid=(l+r)/2;
    while(l<=r){
        mid=(l+r)/2;
        if(data==arr[mid]){
            printf("Data found at index %d ",mid);
            break;
        }
        else if(data<arr[mid]){
            r=mid-1;

        }
        else{
            l=mid+1;
            mid=(l+r)/2;
        }
        
    }
    if(l>r){
        printf("Data not found");
    }
    return 0;

}