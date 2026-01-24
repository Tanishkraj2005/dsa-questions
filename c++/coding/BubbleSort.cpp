#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n ; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[maxIndex]) 
                maxIndex = j;
             swap(arr[i], arr[maxIndex]);

        cout << "After his step: " << i + 1 << endl;
        for (int k = 0; k < n; k++) 
        cout << arr[k] << " ";
        cout << endl;
    }

    cout << "Finally, he got it\n";
    for (int i = 0; i < n; i++) 
    cout << arr[i] << " ";
    cout << endl;

    return 0;
}
