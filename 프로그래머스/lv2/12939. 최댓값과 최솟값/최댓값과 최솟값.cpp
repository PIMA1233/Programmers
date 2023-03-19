#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    string num="";
    vector<int> arr;
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            num+=s[i];
        } else{
            arr.push_back(stoi(num));
            num.clear();
        }
    }
    arr.push_back(stoi(num));
    
    sort(arr.begin(),arr.end());
    answer += to_string(arr.front()) + " " + to_string(arr.back());
    
    return answer;
}