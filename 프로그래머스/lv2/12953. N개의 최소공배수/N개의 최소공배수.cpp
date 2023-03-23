#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int gcm(int a, int b){
    int result = b;
    while(1){
        if(a%result == 0 && b%result == 0) break;
        result--;
    }
    
    return result;
}

int solution(vector<int> arr) {
    sort(arr.begin(),arr.end());
    int answer = arr[0];
    
    for(int i=1;i<arr.size();i++){
        int n = gcm(answer, arr[i]);
        answer = n * (answer/n) * (arr[i]/n);
    }
    
    return answer;
}