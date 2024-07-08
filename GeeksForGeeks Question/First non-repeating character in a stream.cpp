// Given an input stream A of n characters consisting only of lower case alphabets. While reading characters from the stream, you have to tell which character has appeared only once in the stream upto that point. If there are many characters that have appeared only once, you have to tell which one of them was the first one to appear. If there is no such character then append '#' to the answer.






// class Solution {
// 	public:
// 		string FirstNonRepeating(string A){
		    
// 		    string ans = "";
// 		    unordered_map<char, int> ump;
		    
// 		    queue<char> q;
		    
// 		    for(int i = 0; i < A.size(); i++){
// 		      //  check if non repetating element is present in string
// 		      //then push it in the queue and count in the map
// 		        if(ump.find(A[i]) == ump.end()){
// 		            q.push(A[i]);
// 		        }
// 		        ump[A[i]]++;
		        
// 		      //  if element is repeating then pop that element from queue
// 		        while(!q.empty() && ump[q.front()] > 1){
// 		            q.pop();
// 		        }
		        
// 		      //  if queue is not empty then add the front element in the ans 
// 		        if(!q.empty()){
// 		            ans += q.front();
// 		        }
// 		      //  otherwise add # to the answer
// 		        else{
// 		            ans += "#";
// 		        }
// 		    }
// 		    return ans;
// 		}
// };