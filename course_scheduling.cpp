#include<iostream>
#include<vector>
#include<queue>
#include<utility>

using namespace std;

class Solution {
public:
    void do_bsf(vector<int>& res,vector<vector<int> >& rel_course,int cur,pair<int,int> *nodes)
    {
        /* 1-> white edge , 2-> grey , 3-> black */
        /* initially all edges are white */
        queue<int> q;
        int elem;
        /* set first edge to gray */
        nodes[cur].second=2;
        q.push(cur);
        while(!q.empty())
        {
            elem=q.front();
            /* search for neighbours of cur and push them on queue */
            for(int i=0;i<rel_course[0].size();i++)
            {
                if(rel_course[elem][i]==1&&nodes[i].second==1)
                {
                    q.push(i);
                    nodes[i].second=2;
                }
            }
            q.pop();
            nodes[elem].second=3;
            res.push_back(elem);
            
        }
        
        
    }
    vector<int> findOrder(int numCourses, vector<pair<int, int> >& prerequisites) {
        
        // Form a graph is n*n matrix and then perform bfs to all data
        
        int i=0;
        
        vector<int> sub(numCourses,0);
        vector<vector<int> > rel_course(numCourses,sub);
        vector<int> res;
        pair<int,int> nodes[numCourses];
        
        for(i=0;i<numCourses;i++)
        {
            nodes[i].first=i;
            nodes[i].second=1;
        }
        int start=0;
        
        for(i=0;i<prerequisites.size();i++)
        {
            if(prerequisites[i].second<=start) start=prerequisites[i].second;
            
            rel_course[prerequisites[i].second][prerequisites[i].first]=1;
        }
        
        do_bsf(res,rel_course,start,nodes);
        
        return res;
        
    }
};
int main()
{
	Solution ob;
	pair<int,int> p[]={make_pair(1,0),make_pair(2,0),make_pair(3,1),make_pair(3,2)};
	vector<pair<int,int> > pre;
	pre.push_back(p);
	ob.findOrder(4,pre);
	return 0;
}
