#include <string>
#include <vector>

using namespace std;
string ChangeStr(string s){
    s[0]=toupper(s[0]);
    for(int i=1;i<s.length();i++){
        s[i]=tolower(s[i]);
    }
    return s;
}

string solution(string s) {
    string answer = "";
    
    string temp="";
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            answer += ChangeStr(temp) + " ";
            temp.clear();
        } else {
            temp += s[i];
        }
    }
    answer += ChangeStr(temp);
    
    return answer;
}