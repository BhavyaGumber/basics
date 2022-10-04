void reverse(int arr[],int i, int j){
    if(i>=j){
        return;
    }
    
        swap(arr[i],arr[j]);
        return reverse(arr,i+1,j-1);
    
}

int main()
{
    int arr[]={1,2,3,4,5};
    // int n=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,0,4);
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
