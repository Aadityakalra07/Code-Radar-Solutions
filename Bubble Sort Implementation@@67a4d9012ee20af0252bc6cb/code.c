void bubbleSort(arr,n){
    for(i=0; i<n; i++){
        if(arr[0]>arr[i]){
            int temp=arr[0];
            arr[0]=arr[i];
            arr[i]=temp;
        }
        i++;
    }
}
void printArray(arr,n){
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
