class Solution {
public:
    int hammingWeight(int n) {
        int answer = 0;
        while(n != 0){
            // check last bit
            
            if(n & 1){
                answer++;
            }
            n = n >>1;
        }
        return answer;
    }
};