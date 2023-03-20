#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    string temp=s;
    int change_cnt=0, zero_cnt=0;
    
    while(1){
        if(temp == "1") break;
        
        string first_str="";
        for(int i=0;i<temp.length();i++){
            if(temp[i]=='0') zero_cnt++;
            else {
                first_str += temp[i];
            }
        }
        
        string second_str="";
        int first_str_len = first_str.length();
        while(first_str_len != 0){
            if(first_str_len%2 == 1) second_str = "1" + second_str;
            else second_str = "0" + second_str;
            first_str_len /= 2;
        }
        change_cnt++;
        temp=second_str;
    }
    
    answer.push_back(change_cnt);
    answer.push_back(zero_cnt);
    
    return answer;
}