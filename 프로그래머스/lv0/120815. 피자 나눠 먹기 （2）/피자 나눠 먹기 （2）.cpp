#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int GetGCD(int a, int b){
    int n=0;
    while(b!=0){
        n=a%b;
        a=b;
        b=n;
    }
    
    return a;
}

int solution(int n) {
    int answer = 0;
    if(n%6==0){
        answer = n/6;
    } else {
        int gcd = GetGCD(min(n,6),max(n,6));
        answer = n/gcd;
    }
    return answer;
}