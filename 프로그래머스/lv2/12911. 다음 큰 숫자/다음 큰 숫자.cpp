#include <string>
#include <vector>

using namespace std;

int one_count(int n){
    int result = 0;
    while(n!=0){
        if(n%2==1) result++;
        
        n/=2;
    }
    
    return result;
}

int solution(int n) {
    int answer = 0;
    int n_one_count = one_count(n);
    
    answer = n+1;
    while(1){
        if(n_one_count == one_count(answer)) break;
        answer++;
    }
    
    return answer;
}