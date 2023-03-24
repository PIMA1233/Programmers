#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = ""; // 정답 string
    int max_s = -2134567890, min_s = 2134567890; // 최대, 최소값 int
    
    string temp = ""; // 찾아낸 숫자 저장
    // s에서 숫자 찾아내 최대, 최소값 저장하는 for문
    for(int i=0;i<s.length();i++){
        if(s[i] == ' '){
            if(max_s < stoi(temp)) max_s = stoi(temp);
            if(min_s > stoi(temp)) min_s = stoi(temp);
            temp.clear();
        } else {
            temp += s[i];
        }
    }
    if(max_s < stoi(temp)) max_s = stoi(temp);
    if(min_s > stoi(temp)) min_s = stoi(temp);
    
    answer = to_string(min_s) + " " + to_string(max_s);
    
    return answer;
}