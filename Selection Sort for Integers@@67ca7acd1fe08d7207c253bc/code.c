int selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int min=-1;
        int mindex=-1;
        for(int j=i;j<n-1;j++){
            if(min>arr[j]){
                min=arr[j];
                mindex = j;
            }
       }
       int temp=arr[mindex];
       arr[mindex]=arr[i];
       arr[j]=temp;
    }
}
int printArray(int arr[], int n){
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}