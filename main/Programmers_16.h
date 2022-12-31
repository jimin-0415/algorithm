//
// Created by Programmer on 2022/12/31.
//

#include "Common.h"
#include <vector>

/**
 * [Level 0] 분수의 덧셈
 * 링크 : https://school.programmers.co.kr/learn/courses/30/lessons/120808
 */
class Programmers_16 : public Question
{
public:
    void Result() override
    {
        int denum1 = 9;
        int num1 =2;
        int denum2 = 1;
        int num2 = 3;

        vector<int> answer;
        int denum = denum1 * num2 + denum2 * num1;
        int num = num2 * num1;

        //최소 공배수 구하기
        int maximun = 1;
        for(int i = 1; i <= denum; ++i){
            if(num % i == 0 && denum % i ==0)
                maximun = i;
        }

        answer.push_back(denum / maximun);
        answer.push_back(num / maximun);

        for(int value : answer){
            cout << value << endl;
        }

        return;
    }
};