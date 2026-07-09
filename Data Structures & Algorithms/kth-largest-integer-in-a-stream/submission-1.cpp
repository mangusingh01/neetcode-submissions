class KthLargest {
public:
    // min heap - will keep minimum element at the top
    // max heap - will keep maximum element at the top
    // top k element will be in min heap 
    // rest will in max heap
    // min heap will never have more than k elements 
    // if new element is larger than the top element of max heap 
    // then it should be part of min heap which is containing most large elements

    // priority_queue<int> maxHeap; 
    priority_queue<int, vector<int>, greater<int>> minHeap; 
    int maxSize; 

    KthLargest(int k, vector<int>& nums) {
        maxSize = k; 
        for(int i=0; i<nums.size(); i++) {
            minHeap.push(nums[i]);
        }
    }
    
    int add(int val) {

        minHeap.push(val);
        
        while(minHeap.size() > maxSize) {
            minHeap.pop(); 
        }

        return minHeap.top(); 
    }
};
