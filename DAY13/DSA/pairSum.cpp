#include <bits/stdc++.h>
#include<vector>
using namespace std;


vector<vector<int>> pairSum(vector<int> &arr, int s){

   vector<vector<int>> ans;

   for(int i = 0; i<arr.size(); i++){

      for(int j = i+1; j<arr.size(); j++){

         if(arr[i] + arr[j] == s){
            vector<int> temp;

            temp.push_back(min(arr[i], arr[j]));
            temp.push_back(max(arr[i], arr[j]));

            ans.push_back(temp);
         }
      }
   }
   sort(ans.begin(), ans.end());
   return ans;
}

void printpairSum(const vector<vector<int>> &arr) {

    for(int i = 0; i < arr.size(); i++){
        cout << "(" << arr[i][0] << ", " << arr[i][1] << ") ";
    }
    cout << endl;
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int s = 6;

    vector<vector<int>> result = pairSum(arr, s);

    cout << "Pairs that sum up to " << s << ": ";
    
    printpairSum(result);

    return 0;
}