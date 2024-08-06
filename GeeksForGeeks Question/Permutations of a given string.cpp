// Given a string S. The task is to print all unique permutations of the given string that may contain dulplicates in lexicographically sorted order.

// class Solution
// {
//     private:
//         void solve(string S, vector<string>& ans, int index){
            
//             // Base Case
//             if (index >= S.size()) {
//                 ans.push_back(S);
//                 return;
//             }
            
//             // To avoid duplicate permutations
//             unordered_set<char> seen; 

//             for (int j = index; j < S.size(); j++){
                
//                 // Skip if character already used
//                 if (seen.find(S[j]) != seen.end()){
//                     continue;
//                 }
//                 seen.insert(S[j]);
//                 swap(S[index], S[j]);
//                 solve(S, ans, index + 1);
                
//                 // Backtracking
//                 swap(S[index], S[j]);
//             }
//         }
// 	public:
// 		vector<string>find_permutation(string S)
// 		{
// 		    // Code here there
// 		    vector<string> ans;
//             solve(S, ans, 0);
//             sort(ans.begin(), ans.end());
//             return ans;
// 		}
// };