#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int odd_cnt=0, even_cnt=0;
    for(int i=0;i<num_list.size();i++){
        if(num_list[i]%2==1){
            odd_cnt++;
        } else {
            even_cnt++;
        }
    }
    
    answer.push_back(even_cnt);
    answer.push_back(odd_cnt);
    return answer;
}