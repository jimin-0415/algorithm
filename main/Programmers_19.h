//
// Created by Programmer on 2023/01/01.
//

#include "Common.h"
#include <vector>
#include <queue>
#include <map>
class Programmers_19 : public Question
{
private:
    vector<vector<int>> graph;
public:
    queue<int> queueList;
    int BFS(int pivotindex, vector<bool> visited, vector<int> depth) //BFS 의 경우 Qeue에 넣어서 위에서부터 아래로 실행한다.
    {
        int freindCount = 0;
        queueList.push(pivotindex); //1. queue에 넣는다.
        visited[pivotindex] = true; //방문했으니까 동일하게 true
        depth[pivotindex] = 0;  //초기 index Depth = 0;

        while(!queueList.empty())    //queue가 비었는지 확인.
        {
            pivotindex = queueList.front();
            queueList.pop();

            for(int i = 0; i < graph[pivotindex].size(); ++i)
            {
                if(depth[pivotindex] >= 2)
                    break;

                int nextIndex = graph[pivotindex][i];
                if(!visited[nextIndex]) //방문했냐?.. 안했어? 그럼 큐에 넣어버림
                {
                    depth[nextIndex] = depth[pivotindex] + 1;
                    queueList.push(nextIndex);
                    visited[nextIndex] = true;
                    freindCount++;
                }
            }
        }
        return freindCount;
    }


    void Result() override
    {
        int N = 7;
        vector<vector<int>> relation{
                {1,2},
                {4,2},
                {3,1},
                {4,5},
                {6,7},
        };
        vector<int> answer;

        graph.resize(N + 1);

        for (vector<int> ele : relation) {
            int first = ele[0];
            int second = ele[1];
            graph[first].push_back(second);
            graph[second].push_back(first);
        }

        vector<bool> visited;
        visited.resize(N + 1);
        vector<int> depth;
        depth.resize(N + 1);
        for (int i = 1; i <= N; i++) {
            fill(visited.begin(), visited.end(), false);
            fill(depth.begin(), depth.end(), 0);
            answer.push_back(BFS(i, visited, depth));
        }

        for(int i = 0; i < answer.size(); i++){
            cout<< answer[i] << endl;
        }
        return;
    }
};

