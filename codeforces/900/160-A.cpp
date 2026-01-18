#include <iostream>

using namespace std;


int main() {
    int n;
    cin >> n;
    int arr[n];

    int total = 0;

    for(int i = 0; i<n; i++) {
        cin >> arr[i];
        total += arr[i];
    }

    int half = total / 2;

    sort(arr, arr + n);


    int cnt = 0;
    int pick = 0;

    for(int i = n-1; i>=0; i--) {
        pick += arr[i];
        cnt ++;
        if(pick > half) break;
    }

    cout << cnt << endl;
    return 0;
}