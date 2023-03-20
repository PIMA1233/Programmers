#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> F_arr;
    
    F_arr.push_back(0);
    F_arr.push_back(1);
    
    for(int i=2;i<=n;i++){
        F_arr.push_back((F_arr[i-2]+F_arr[i-1])%1234567);
    }
    
    answer = F_arr.back();
    
    return answer;
}