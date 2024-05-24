#include <bits/stdc++.h>
#include<vector>
using namespace std;

bool isPossible(long long n, long long m, vector<int> time, long long mid){
    long long dayCount = 1;
    long long totalTime = 0;
    for(long long i = 0; i < m; i++) {
        if(totalTime + time[i] <= mid) {
            totalTime += time[i];
        } else {
            dayCount++;
            if(dayCount > n || time[i] > mid) {
                return false;
            }
            totalTime = time[i];
        }
    }
    return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) {   
    long long start = 0;
    long long sum = 0;
    for(long long i = 0; i < m; i++) {
        sum += time[i];
    }
    long long end = sum;
    long long ans = -1;

    while(start <= end) {
        long long mid = start + (end - start) / 2;

        if(isPossible(n, m, time, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    int n = 3;
    int m = 5;
    vector<int> time = {1,2,2,3,1};

    cout << "Minimal value of the maximum amount of time for which Ayush studies in a day: " << ayushGivesNinjatest(n, m, time) << endl;

    return 0;

}
