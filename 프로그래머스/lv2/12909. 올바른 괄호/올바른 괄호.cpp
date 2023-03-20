#include<string>
#include <iostream>
#include <vector>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    vector<char> check_str;
    
    for(int i=0;i<s.length();i++){
        if(check_str.size()!=0 && check_str.back() == '(' && s[i] == ')'){
            check_str.pop_back();
        } else{
            check_str.push_back(s[i]);
        }
    }
    
    if(check_str.size()==0){
        answer=true;
    } else{
        answer=false;
    }

    return answer;
}