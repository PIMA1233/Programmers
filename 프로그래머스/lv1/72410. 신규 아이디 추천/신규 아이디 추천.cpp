#include <string>
#include <vector>

using namespace std;

string FirstStep(string new_id){
    string result="";
    for(int i=0;i<new_id.length();i++){
        if(new_id[i]>='A'&&new_id[i]<='Z'){
            result += new_id[i] + 'a' - 'A';
        } else {
            result += new_id[i];
        }
    }
    
    return result;
}

string SecondStep(string answer){
    string result="";
    for(int i=0;i<answer.length();i++){
        if(answer[i]=='-'||answer[i]=='_'||answer[i]=='.'||(answer[i]>='a'&&answer[i]<='z')||(answer[i]>='0'&&answer[i]<='9')){
            result += answer[i];
        } else;
    }
    
    return result;
}

string ThirdStep(string answer){
    string result="";
    for(int i=0;i<answer.length();){
        if(answer[i]!='.') {
            result += answer[i];
            i++;
        }
        else {
            if(i+1 < answer.length() && answer[i+1]!='.'){
                result += '.';
                i++;
            }
            else{
                i++;
            }
        }
    }
    
    return result;
}

string ForthStep(string answer){
    string result="";
    for(int i=0;i<answer.length();i++){
        if((i==0 || i==answer.length()-1)&&answer[i]=='.') continue;
        result += answer[i];
    }
    
    return result;
}

string FifthStep(string answer){
    string result="";
    if(answer==""){
        result = "a";
    } else {
        for(int i=0;i<answer.length();i++){
            result += answer[i];
        }
    }
    
    return result;
}

string SixthStep(string answer){
    string result="";
    if(answer.length()>=16){
        string temp="";
        for(int i=0;i<15;i++){
            temp += answer[i];
        }
        result = ForthStep(temp);
    } else {
        result = answer;
    }
    
    return result;
}

string SeventhStep(string answer){
    string result="";
    if(answer.length()<=2){
        result = answer;
        for(int i=answer.length();i<3;i++){
            result += answer[answer.length()-1];
        }
    } else {
        result = answer;
    }
    
    return result;
}

string solution(string new_id) {
    string answer = "";
    
    string first_answer = FirstStep(new_id);
    string second_answer = SecondStep(first_answer);
    string third_answer = ThirdStep(second_answer);
    string forth_answer = ForthStep(third_answer);
    string fifth_answer = FifthStep(forth_answer);
    string sixth_answer = SixthStep(fifth_answer);
    answer = SeventhStep(sixth_answer);
    
    return answer;
}