//
// Created by Programmer on 2022/12/27.
//

#include "Common.h"
#include <vector>
//자릿수 더하기[Level 0]
// ->
//링크 : https://school.programmers.co.kr/learn/courses/30/lessons/120906
class Programmers_08 : public Question
{
public:
    void Result() override
    {
        int n = 100;
        string intToString = to_string(n);
        vector<int> valueContainer { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

        int answer = 0;
        for(int i = 1; i <= n; i *= 10){
            int num = n % (i * 10);
            num = num / i;
            answer += num;
        }

        cout << answer << endl;
        return;
    }
};