//
// Created by Programmer on 2022/12/30.
//

#include "Common.h"
#include <vector>

/**
 * [Level 0] 중복된 숫자 개수
 * 링크 : https://school.programmers.co.kr/learn/courses/30/lessons/120583
 */
class Programmers_12 : public Question
{
public:
    void Result() override
    {
        vector<int> array { 1, 2, 1};
        int n = 2;
        int answer = 0;
        for(int value : array){
            if(value == n)
                answer++;
        }

        cout << answer << endl;
        return;
    }
};