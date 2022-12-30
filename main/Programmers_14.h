//
// Created by Programmer on 2022/12/30.
//

#include "Common.h"
#include <vector>
#include <unordered_set>
/**
 * [Level 1] 신규 아이디 추천
 * 링크 : https://school.programmers.co.kr/learn/courses/30/lessons/72410
 */
class Programmers_14 : public Question
{
public:
    void Result() override
    {
        string new_id = "abcdefghijklmn.p";
        string answer = "";

        unordered_set<char> us {
            'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
            'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
            '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '_', '.',
        };

        char temp = ' ';
        for(int i = 0; i < new_id.size(); i++){
            if(new_id[i] >= 'A' && new_id[i] <= 'Z'){
                new_id[i] |= 32;    //1단계 대문자 소문자로 비트 연산,
            }

            if(us.find(new_id[i]) == us.end()){
                continue; //2단계. 특정 문자열 외 모두 제거
            }

            if(temp == '.' && new_id[i] == temp){
                continue;
            }

            answer += new_id [i];
            temp = new_id[i];
        }

        while(answer.size() > 0 && answer[0] == '.'){
            answer.erase(0 , 1);
        }

        while(answer.size() > 0 && answer[answer.size() -1] == '.'){
            answer.erase(answer.size() -1 , 1);
        }

        if(answer.size() >= 16){
            answer.erase(15, answer.size());
        }


        while(answer.size() > 0 && answer[answer.size() -1] == '.'){
            answer.erase(answer.size() -1 , 1);
        }

        if(answer.size() <= 0){
            answer = "a";   //5단계
        }

        if(answer.size() < 3){
            for(int i = answer.size(); i < 3; ++i){
                answer += answer[answer.size() -1];
            }
        }

        cout << answer << endl;
        return;
    }
};