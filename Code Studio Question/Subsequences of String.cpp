// Problem statement
// You are given a string 'STR' containing lowercase English letters from a to z inclusive. Your task is to find all non-empty possible subsequences of 'STR'.

// A Subsequence of a string is the one which is generated by deleting 0 or more letters from the string and keeping the rest of the letters in the same order.


// #include <bits/stdc++.h> 
// void solve(string str, string output, int index, vector<string>& ans){
// 	// Base Case
// 	if(index >= str.size()){
// 		if(output.length() > 0)
// 			ans.push_back(output);
// 		return ;
// 	}

// 	// Recursive Call For Exclude
// 	solve(str, output, index + 1, ans);

// 	// Recursive Call For Include
// 	int element = str[index];
// 	output.push_back(element);
// 	solve(str, output, index + 1, ans);
// }
// vector<string> subsequences(string str){
	
// 	vector<string> ans;

// 	string output = "";

// 	int index = 0;
// 	solve(str, output, index, ans);
// 	return ans;	
// }
