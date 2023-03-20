#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    vector<int> num_count;
    vector<int> num_arr;
    int num=0,num_cnt=0,max_cnt=-1;
    
    sort(array.begin(),array.end());
    
    num = array[0];
    for(int i=0;i<array.size();i++){
        if(num == array[i]){
            num_cnt++;
        } else {
            num_count.push_back(num_cnt);
            if(max_cnt < num_cnt) max_cnt = num_cnt;
            num_cnt=1;
            
            num_arr.push_back(num);
            num = array[i];
        }
        
        if(i==array.size()-1){
            num_count.push_back(num_cnt);
            if(max_cnt < num_cnt) max_cnt = num_cnt;
            num_cnt=0;
            
            num_arr.push_back(num);
        }
    }
    
    int check_num=0;
    for(int i=0;i<num_count.size();i++){
        if(num_count[i]==max_cnt){
            answer = num_arr[i];
            check_num++;
            
            if(check_num>1){
                answer = -1;
                break;
            }
        }
    }
    
    return answer;
}