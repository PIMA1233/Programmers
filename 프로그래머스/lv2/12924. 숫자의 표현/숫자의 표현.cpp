#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i=1;i<=n;i++){
        int num_sum=0;
        int start_num=i;
        while(1){
            if(num_sum == n) {
                answer++;
                break;
            }
            else if(num_sum > n){
                break;
            }
            
            num_sum += start_num;
            start_num++;
        }
    }
    
    return answer;
}