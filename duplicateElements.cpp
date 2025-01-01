#include<iostream>
#include<vector>
#include<algorithm>
#include <unordered_set>


using namespace std;

vector<int> duplicateArray(vector<int>& arr) {
    unordered_set<int> seen;
    unordered_set<int> duplicateSet;
    
    for (int i = 0; i < arr.size(); i++) {
        if (seen.find(arr[i]) != seen.end()) {
            duplicateSet.insert(arr[i]);
        } else {
            seen.insert(arr[i]);
        }
    }
    
    vector<int> duplicate(duplicateSet.begin(), duplicateSet.end());
    return duplicate;
}

int main(){

    int n;
    cout<<"Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: "<< endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    duplicateArray(arr);
    



    return 0;
}
