// Given an expression string x. Examine whether the pairs and the orders of {,},(,),[,] are correct in exp.
// For example, the function should return 'true' for exp = [()]{}{[()()]()} and 'false' for exp = [(]).

// Note: The drive code prints "balanced" if function return true, otherwise it prints "not balanced".





// class Solution {
//   public:
//     //Function to check if brackets are balanced or not.
//     bool ispar(string x) {
//       // Your code here
//       stack < char > s;
      
//       for (char ch: x){
//         if (ch == '(' || ch == '{' || ch == '[') {
//           s.push(ch);
//         } 
//         else{
            
//           if(s.empty())
//             return false;
            
//           char top = s.top();
//           s.pop();
          
//         //  Checking for first and last bracket is same or not
//           if ((ch == ')' && top != '(') || (ch == '}' && top != '{') || (ch == ']' && top != '[')){
//             return false;
//           }
//         }
//       }
//       return s.empty();
//     }
// };