Question
Given a string s, return true if the s can be palindrome after deleting at most one character from it.
Example 1:

Input: s = "aba"
Output: true
Example 2:

Input: s = "abca"
Output: true
Explanation: You could delete the character 'c'.
Example 3:

Input: s = "abc"
Output: false
 
#include<iostream>
#include<cstring>
using namespace std;
bool isPalindrome3(string &str, int start, int end) {
    while (start <= end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
bool ispalindrome2(string &str) {
    int i = 0;
    int j = str.length() - 1;

    while (i <= j) {
        if (str[i] == str[j]) {
            i++;
            j--;
        } else {
            bool ans1 = isPalindrome3(str,i+1,j);
            bool ans2 = isPalindrome3(str,i,j-1);
            return ans1 || ans2;
        }
    }
    return true;
}
int main(){
    string s;
    cout<<"Give string"<<endl;
    cin>>s;
    cout<<ispalindrome2(s);
}

//SOLUTION
Give string
namcan
1(true)