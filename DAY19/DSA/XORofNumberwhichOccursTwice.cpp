#include <bits/stdc++.h>
#include <array>

using namespace std;

int duplicateNumbersXOR(int nums[], int n) {
    sort(nums, nums + n);  // Correctly sort the array using pointers

    int xorResult = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                xorResult ^= nums[i];
                i++;  // Skip the next element as it's already counted
                break;
            }
        }
    }

    return xorResult;
}

int main() {
    int n;

    cout << "Enter the value of n :- " << endl;
    cin >> n;

    int nums[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << "XOR of Numbers Which Appear Twice is :- " << duplicateNumbersXOR(nums, n) << endl;
}
