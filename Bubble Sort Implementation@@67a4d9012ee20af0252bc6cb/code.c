int bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){

    
    int temp;
    for(int j=0;j<n-1;j++){
        if(arr[i]>arr[j+1]){
            temp=arr[i];
            arr[i]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
}
int printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}