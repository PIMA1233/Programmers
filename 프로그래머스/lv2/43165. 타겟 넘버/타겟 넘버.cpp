#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> numbers, int target) {
    int answer = 0;
    
    for(int i=0;i<pow(2,numbers.size());i++){
        int cnt = i, sum = 0;
        
        for(int j=0;j<numbers.size();j++){
            if(cnt & 1) {
                sum += numbers[j];
            } else {
                sum += numbers[j] * -1;
            }
            cnt = cnt >> 1;
        }
        
        if(sum == target) answer++;
    }
    
    return answer;
}