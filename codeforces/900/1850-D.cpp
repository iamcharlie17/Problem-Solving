#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int arr[n];
        for(int i = 0; i<n; i++) {
            cin >> arr[i];
        }


        sort(arr, arr + n);

        int result = 0;
        int count = 0;

        for(int i = 0; i<n-1; i++) {
            if(arr[i+1] - arr[i] <=k){
                count ++;
                if(count > result) {
                    result = count;
                }
            }else{
                count = 0;
            }
        }


        cout << n - result - 1 << endl;

    }

    return 0;
}