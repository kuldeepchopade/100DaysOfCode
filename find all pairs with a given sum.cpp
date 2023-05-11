    
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        sort(A,A+N);
        vector<pair<int,int>> mp;
        for(int i =0;i<N ;i++){
            for(int j =0;j<M;j++){
                if(A[i] + B[j] == X) mp.push_back({A[i],B[j]});
            }
        }
     
      return mp;
      
    }
