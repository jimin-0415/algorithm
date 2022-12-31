//
// Created by Programmer on 2022/12/31.
//

#include "Common.h"
#include <vector>
#include <queue>
/**
 * [Level 2] 두 큐 합 같게 만들기
 * 링크 : https://school.programmers.co.kr/learn/courses/30/lessons/118667
 */
class Programmers_15 : public Question
{
public:
    void Result() override
    {
        int answer = -1;

        vector<int> queue1 { 1, 2, 1, 2 };
        vector<int> queue2 { 1, 10, 1, 2 };

        queue<int> queue1Container;
        queue<int> queue2Container;
        long stack1Count = 0;
        long stack2Count = 0;
        for(int ele : queue1){
            queue1Container.push(ele);
            stack1Count += ele;
        }

        for(int ele : queue2){
            queue2Container.push(ele);
            stack2Count += ele;
        }

        const long halfCount = (stack1Count + stack2Count) / 2;
        if((stack1Count + stack2Count) % 2 != 0){
            cout << answer << endl;
            return;
        }

        int popCount = 0;
        long queue1PopCount = 0;
        long queue2PopCount = 0;
        while((!queue1Container.empty() && !queue2Container.empty())){
            if(halfCount == stack1Count || (queue1PopCount > queue1.size() * 2 && queue2PopCount > queue2.size() * 2))
                break;

            if(stack1Count > stack2Count){
                long queue1Value = queue1Container.front();
                queue1Container.pop();
                queue2Container.push(queue1Value);

                stack1Count -= queue1Value;
                stack2Count += queue1Value;
                queue1PopCount++;
                popCount++;
            }
            else {
                long queue2Value = queue2Container.front();
                queue2Container.pop();
                queue1Container.push(queue2Value);
                stack1Count += queue2Value;
                stack2Count -= queue2Value;
                queue2PopCount++;
                popCount++;
            }
        }

        if(stack1Count == stack2Count){
            answer = popCount;
        }

        cout << answer << endl;
        return;
    }
};