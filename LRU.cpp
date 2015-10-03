// Implementation of LRU cache

#include<iostream>
#include<vector>

using namespace std;

struct ca_node
{
  int key;
  int val;
  int priority;
  //ca_node(int a,int b,int c) : key(a), val(b), priority(c) {}
};

class LRUCache{
public:
    int max_capacity;
    //int added_elem=0;
    //int search_pos=0;
    //int cur_pos=1;
    //int last_pos=1;
    LRUCache(int capacity) {
        max_capacity=capacity;
        
    }
    
    ca_node ca;
    vector<ca_node> cache(5,ca);
   /* 
    void swap(int a,int b)
    {
        int tmp;
        tmp=cache[a].key;
        cache[a].key=cache[b].key;
        cache[b].key = tmp;
        
        tmp=cache[a].val;
        cache[a].va=cache[b].val;
        cache[b].val=tmp;
        
        tmp=cache[a].priority;
        cache[a].priority=cache[b].priority;
        cache[b].priority=tmp;
        
    }
    int get(int key) {
        if(added_elem==0) return -1;
        int val;
        search_pos=heap_search(1,key);
        val=cache[search_pos].val;
        if(search_pos != -1)
        {
            cache[search_pos].priority=1;
            swap(search_pos,last_pos);
            heapify(search_pos);
        }
        return val;
        
    }
    
    int heap_search(int root,int key)
    {
        int found;
        if(cache[root].key==key) return root;
        
        int left=2*root,right=(2*root)+1;
        
        if(cache[left].key!=-1) found=heap_search(left,key);
        else return -1;
        
        if(cache[right].key !=-1 && found == -1) found=heap_search(right,key);
        else return -1;
        
        return found;
        
    }
    void heapify(int pos) {
        
        int left=2*pos,right=(2*pos)+1;
        if(cache[left].key==-1 && cache[right].key==-1) return;
        
        if(cache[left].key!=-1 && cache[right].key==-1)
        {
            swap(pos,left);
            return;
        }
        
        if(cache[left].priority>cache[right].priority)
        {
            swap(pos,left);
            heapify(left);
        }
        else
        {
            swap(pos,right);
            heapify(right);
        }
        
        
    }
    
    void set(int key, int value) {
        int i=0;
        if(added_elem<=max_capacity)
        {
            cache[cur_pos].key=key;
            cache[cur_pos].val=value;
            for(i=1;i<=cur_pos;i++)
            {
                if(cache[i].key!=-1) cache[i].priority+=1;
            }
            last_pos=cur_pos;
            if(cache[2*cur_pos].key==-1) cur_pos=2*cur_pos;
            else cur_pos=(2*cur_pos+1);
            
            added_elem++;
        }
        else
        {
            cache[1].key=key;
            cache[1].val=value;
            cache[1].priority=1;
            for(i=2;i<=last_pos;i++) cache[i].priority+=1;
            
            swap(1,last_pos);
            heapify(1);
            
        }
        
    }
	*/
};
int main()
{
	LRUCache ob(5);
	return 0;
}
