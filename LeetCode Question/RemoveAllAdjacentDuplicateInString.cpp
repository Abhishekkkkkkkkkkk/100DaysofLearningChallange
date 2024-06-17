// You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

// We repeatedly make duplicate removals on s until we no longer can.

// Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.




// class Solution {
// public:
//     string removeDuplicates(string s) {
        
//         if (s.empty()) return "";
        
//         string ans = "";
        
//         for (int i = 0; i < s.size(); i++){
            
//             if (!ans.empty() && ans.back() == s[i])
//                 ans.pop_back();
            
//             else
//                 ans.push_back(s[i]);
//         }
        
//         return ans;
//     }
// };