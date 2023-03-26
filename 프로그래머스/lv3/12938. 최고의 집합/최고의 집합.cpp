#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int s) {
    vector<int> answer;
    
    if(s<n){
        answer.push_back(-1);
    } else{
        if(s%n == 0) {
            for(int i=0;i<n;i++){
                answer.push_back(s/n);
            }
        } else {
            int remain_num = s%n;
            for(int i=0;i<n;i++){
                answer.push_back(s/n);
            }
            
            for(int i=0;i<remain_num;i++){
                answer[i]++;
            }
        }
        sort(answer.begin(),answer.end());
    }
    return answer;
}