//
// Created by Programmer on 2022/12/26.
//

#include "Common.h"
#include <vector>
//두수의 합 [Level 0]
//
//링크 : https://school.programmers.co.kr/learn/courses/30/lessons/120897
class Programmers_06 : public Question
{
public:
    void Result() override
    {
        int num1 = 20;
        int num2 = 30;

        int answer = -1;
        //두수의 합
        answer = num1 + num2;
        //두수의 차
        answer = num1 - num2;
        //두수의 곱
        answer = num1 * num2;
        //몫 구하기
        answer = num1 / num2;
        //나머지 구하기
        answer = num1 % num2;

        //result
        cout<< answer << endl;
        return;
    }
};
