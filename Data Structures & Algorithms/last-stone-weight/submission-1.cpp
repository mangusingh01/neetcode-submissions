class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> hp; 

        for(int i=0; i<stones.size(); i++) {
            hp.push(stones[i]);
        }

        while(hp.size()>1) {
            int a = hp.top(); 
            hp.pop(); 
            int b = hp.top(); 
            hp.pop(); 

            int x = abs(a-b); 

            if(x != 0) {
                hp.push(x); 
            }
        }

        hp.push(0);
        return hp.top(); 
    }
};
