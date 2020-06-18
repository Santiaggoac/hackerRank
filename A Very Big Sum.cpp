#include <bits/stdc++.h>

using namespace std;

//int aVeryBigSum(int);
//res = aVeryBigSum(arr[n]);


int main(){
    int n = 0;
    cin >> n;

    int arr[n];
    long int res = 0;

    //Load array with numbers
    for(int i=0; i<n; i++){
        cin >> arr[i];
        res += arr[i];
    }
    
    cout << res << endl;
}
