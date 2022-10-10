// Dilhan Franco - Palindrome Number - Easy
// 10/09/2022

#include <algorithm> 
#include<iostream>
#include<string>

class Solution {
public:
    bool isPalindrome(int x) {
        //converts int x to string
        string s = to_string(x);
        
        //creates a temporary variable to hold current string s
        string temp = s;
        
        //reverses string s
        reverse(s.begin(), s.end()); 
        
        //checks if reversed string s and temp are equal
        if(temp == s){
            //if true, it is a palindrome number
            return true;
        }
        //otherwise it returns false
        return false;
        
    }
};