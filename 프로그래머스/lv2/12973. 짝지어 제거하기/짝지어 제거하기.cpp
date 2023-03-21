#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(string s)
{
    int answer = 0;
    
    if(s.length()==0 || s.length()%2 == 1)
        return answer;
    
    vector<char> check_char;
    for(int i=0;i<s.length();i++){
        if(check_char.size() > 0){
            if(check_char.back() == s[i]){
                check_char.pop_back();
            } else {
                check_char.push_back(s[i]);
            }
        } else {
            check_char.push_back(s[i]);
        }
    }
    
    if(check_char.size() == 0) answer = 1;
    else answer = 0;
    

    return answer;
}