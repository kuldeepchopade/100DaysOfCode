    void rotateArr(int arr[], int d, int n){
        // code here
        if(d > n) {
            d = d % n ;
            
        }
        vector <int > v ;
        for(int i = d ; i < n ;i++) {
            v.push_back(arr[i]) ;
        }
        for(int i = 0 ; i < d ; i++) {
            
            v.push_back(arr[i]) ;
        }
        for(int i = 0 ; i < n  ;i++) {
            arr[i] = v[i] ;
        }
    }
