int bubbleSort(int arr*, int n){
    for(int i=0;i<n-1;i++){
        int temp;
        for(int j=i+1;j<n-1;j++){
            if(arr[i]>arr[i+1]){
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}
int printArray(int arr*, int n){
     for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}