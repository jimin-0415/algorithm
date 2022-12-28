//
// Created by Programmer on 2022/12/28.
//

#include "Common.h"
#include <vector>
#include <queue>
/**
 * [Level 1] 푸드 파이트 대회
 */
class Programmers_10 : public Question
{
public:
    void Result() override
    {
        vector<int> food = {1,7,1,3};
        string answer = "";
        deque<int> dq;
        dq.push_back(0);

        for(int i = food.size() - 1; i > 0; i--){
            for(int j = 0; j < food[i] / 2; j++){
                dq.push_front(i);
                dq.push_back(i);
            }
        }

        while(!dq.empty()){
            answer += to_string(dq.front());
            dq.pop_front();
        }
        cout << answer << endl;
        return;
    }

    //만약 가져온 음식을 알아서 배분할 경우.
    /*void Result() override
    {
        vector<int> food = {1, 1, ,2 ,3 ,4 ,2 , 3, 2, 3, 3};
        string answer = "";
        priority_queue<int, vector<int>, less<int>> pq(food.begin(), food.end());
        deque<int> dq;
        dq.push_back(0);
        int tempFoodCost = 0;
        while(!pq.empty()){
            if(tempFoodCost == 0){
                tempFoodCost = pq.top();
                pq.pop();
            }
            else {
                if(!pq.empty()){
                    const int nextFoodCost = pq.top();
                    if(nextFoodCost == tempFoodCost){
                        dq.push_front(nextFoodCost);
                        dq.push_back(nextFoodCost);
                        tempFoodCost = 0;
                    }
                    else {
                        tempFoodCost = nextFoodCost;
                    }
                    pq.pop();
                }
            }
        }

        while(!dq.empty()){
            answer += to_string(dq.front());
            dq.pop_front();
        }

        cout << answer << endl;
        return;
    }*/
};