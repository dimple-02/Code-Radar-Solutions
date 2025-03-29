void selectionSort( char arr[], int n){
    for(int i=0;i<n-1;i++){
        char min=arr[i];
        int mindex=i;
        for(int j=i;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                mindex = j;
            }
       }
       char temp=arr[mindex];
       arr[mindex]=arr[i];
       arr[i]=temp;
    }
}
char printArray(char arr[], int n){
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}