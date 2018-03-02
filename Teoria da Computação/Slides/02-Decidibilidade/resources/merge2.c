void sort2(int arr[], int l, int r) {
    if (l < r) {
        int m = l+(r-l)/2;
 
        sort2(arr, l, m);
        sort2(arr, m+1, r);
 
        merge(arr, l, m, r);
    }
}