#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    while(age != 0){
        char c = age%10 + 'a';
        answer = c + answer;
        age /= 10;
    }
    return answer;
}