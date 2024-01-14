#include<iostream>
#include<cstring>
using namespace std;
void reverse(string &str){
    int i=0;
    int j=str.length()-1;
    while(i<=j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
}
void replacecharacter(string &str){
    int index = 0;
    while(str[index] != '\0'){
        if(str[index] == 's'){
            str[index]='@';
        }
        index++;
    }
}    
string removeDuplicates(string s) {
    string ans = "";
        for (int index = 0; index < s.length() - 1; index++) {
        if (s[index] != s[index + 1]) {
            ans.push_back(s[index]);
        } 
        if(s[index] == s[index + 1]){
            ans.push_back(s[index]);
            ans.pop_back();
        }
       }
       // Handle the last character separately
       if (!s.empty()) {
        ans.push_back(s.back());
       }
    return ans;
}
string totallyremoveadjacentduplicate(string s){
        string ans = "";
        int index = 0;
        while(index < s.length()){
            if(ans.length() > 0 && ans[ans.length()-1] == s[index]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[index]);
            }
            index++;
        }
        return ans;
}

int main()
{
    string s;
    cout<<"Give string"<<endl;
    cin>>s;
    cout<<s.length()<<endl;
    cout<<s<<endl;
    cout<<removeDuplicates(s)<<endl;
    cout<<totallyremoveadjacentduplicate(s)<<endl;
    reverse(s);
    cout<<s<<endl;
    replacecharacter(s);
    cout<<s<<endl;
}


//SOLUTION
Give string
sujhsnjssk
10
sujhsnjssk
sujhsnjsk
sujhsnjk
kssjnshjus
k@@jn@hju@