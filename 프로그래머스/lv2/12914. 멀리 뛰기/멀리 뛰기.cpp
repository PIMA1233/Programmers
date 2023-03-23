#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    vector<int> result;
    
    result.push_back(1);
    result.push_back(2);
    
    for(int i=2;i<=n;i++){
        result.push_back((result[i-2]+result[i-1])%1234567);
    }
    
    answer = result[n-1];
    
    return answer;
}