//
// Created by Programmer on 2022/12/30.
//

#include "Common.h"
#include <vector>

/**
 * [Level 0] 배열 뒤집기
 * 링크 : https://school.programmers.co.kr/learn/courses/30/lessons/120821
 */
class Programmers_13 : public Question
{
public:
    void Result() override
    {
        vector<int> num_list{ 1, 2};

        for(int i = 0; i < num_list.size() / 2; i++){
            int temp = num_list[i]; //0
            num_list[i] = num_list[num_list.size() - i - 1]; //2
            num_list[num_list.size() - i - 1] = temp;
        }

        vector<int> answer {num_list.begin(), num_list.end()};
        for(int i : answer){
            cout << i << " ";
        }
        return;
    }
};