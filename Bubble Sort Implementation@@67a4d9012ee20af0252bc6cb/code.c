int bubbleSort(arr,n){
    for(int i=0; i<n; i++){
        if(arr[0]>arr[i]){
            int temp=arr[0];
            arr[0]=arr[i];
            arr[i]=temp;
        }
        i++;
    }
    return arr;
}
void printArray(arr,n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
