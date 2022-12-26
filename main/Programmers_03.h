//
// Created by Programmer on 2022/12/26.
//

#include "Common.h"
#include <vector>
#include <queue>
//명예의 전당
//
//링크 : https://school.programmers.co.kr/learn/courses/30/lessons/138477
class Programmers_03 : public Question
{
public:
    void Result() override
    {
        int k = 5;
        vector<int> score { 10, 20, 100, 20, 30, 40 , 200};

        priority_queue<int, vector<int>, greater<int>> scoreQueue;
        vector<int> answer;
        for(int dayScore : score){
            if(scoreQueue.size() < k)
                scoreQueue.push(dayScore);
            else{
                if(scoreQueue.top() < dayScore){
                    scoreQueue.pop();
                    scoreQueue.push(dayScore);
                }
            }
            answer.push_back(scoreQueue.top());
        }

        //result;
        for(int i : answer){
            cout << i << endl;
        }
        return;
    }
};

/**
프로그래머스 답변
#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    priority_queue<int, vector<int>, greater<int>> scoreQueue;

    for(int dayScore : score){
        if(scoreQueue.size() < k)
            scoreQueue.push(dayScore);
        else{
            if(scoreQueue.top() < dayScore){
                scoreQueue.pop();
                scoreQueue.push(dayScore);
            }
        }
        answer.push_back(scoreQueue.top());
    }
    return answer;
}
*/