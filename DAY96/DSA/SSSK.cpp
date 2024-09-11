#include<bits/stdc++.h>
using namespace std;

int solve(int* arr, int n, int k){
    // Deques to store indices of maximum and minimum elements in a k-sized window
    deque<int> maxi(k);
    deque<int> mini(k);

    // Addition of first k size window 
    for(int i = 0; i < k; i++){
        while(!maxi.empty() && arr[i] >= arr[maxi.back()])
            maxi.pop_back();
        while(!mini.empty() && arr[i] <= arr[mini.back()])
            mini.pop_back();

        // Push the current index
        maxi.push_back(i);
        mini.push_back(i);
    }

    int ans = 0;
    // Now sum is equal to maxi and mini value 
    for(int i = k; i < n; i++){
        ans += arr[maxi.front()] + arr[mini.front()];

        // Now go to the next window 
        // Step 1: Remove elements that are out of this window 
        while(!maxi.empty() && i - maxi.front() >= k)
            maxi.pop_front();
        while(!mini.empty() && i - mini.front() >= k)
            mini.pop_front();

        // Step 2: Add the current element's index to both deques
        while(!maxi.empty() && arr[i] >= arr[maxi.back()])
            maxi.pop_back();
        while(!mini.empty() && arr[i] <= arr[mini.back()])
            mini.pop_back();

        maxi.push_back(i);
        mini.push_back(i);
    }

    // Make sure to consider last window also 
    ans += arr[maxi.front()] + arr[mini.front()];
    return ans;
}

int main(){

    int arr[7] = {2, 5, -1, 7, -3, -1, 2};
    int k = 4;
    cout << "Sum of minimum and maximum elements of all subarrays of size k is :- "<< solve(arr, 7, k) <<endl;

    return 0;
}