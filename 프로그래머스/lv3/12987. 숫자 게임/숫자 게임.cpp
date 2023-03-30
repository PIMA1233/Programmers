#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B) {
    int answer = -1;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    if(A.front() >= B.back()) {
        answer = 0;
    } else {
        int A_idx = 0, B_idx = 0;
        while(B_idx < B.size()) {
            if(A[A_idx] < B[B_idx]) {
                A_idx++;
                B_idx++;
            } else {
                B_idx++;
            }
        }
        answer = A_idx;
    }
    
    
    return answer;
}