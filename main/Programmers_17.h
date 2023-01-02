//
// Created by Programmer on 2023/01/01.
//

#include "Common.h"
#include <vector>
#include <deque>
#include <algorithm>
bool comp(int a, int b) {
    return a > b;
}

class Programmers_17 : public Question
{
public:
    void Result() override
    {
        int M = 20;
        vector<int> load { 16, 15, 9, 17, 1, 3};
        sort(load.begin(), load.end(), comp);

        deque <int> loadQueue;
        for(int ele : load){
            loadQueue.push_back(ele);
        }

        vector<int> truckContainer;

        while(!loadQueue.empty()){
            int loadWeight = loadQueue.back();

            if(loadWeight > M)
                continue;

            bool newTruck = true;
            if(truckContainer.size() > 0){
                for(int i = 0 ; i < truckContainer.size(); i++){
                    if(truckContainer[i] + loadWeight <= M){
                        truckContainer[i] += loadWeight;
                        newTruck = false;
                        loadQueue.pop_back();
                        break;
                    }
                }
            }

            if(newTruck){   //제일 큰수로 넣기.
                loadWeight = loadQueue.front();
                loadQueue.pop_front();
                truckContainer.push_back(loadWeight);
            }
        }

        cout << truckContainer.size() << endl;
        return;
    }
};
