/*Sample Input:
8
7 5 2 11 2 43 1 1
2
Sample Output:
2 11 2 43 1 1 7 5*/

#include <bits/stdc++.h>

using namespace std;

 

int rotateArray(int arr[],int N,int K){

    for(int i=K;i<N;i++){

        cout<<arr[i]<<" ";

    }

    for(int i=0;i<K;i++){

        cout<<arr[i]<<" ";

    }

}

int main(){

    int N,K,i;

    cin>>N;

    int arr[N];

    for(i=0;i<N;i++){

        cin>>arr[i];

    }

    cin>>K;

    rotateArray(arr,N,K);

    return 0;

}
