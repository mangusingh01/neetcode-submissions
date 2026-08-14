/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    static bool compare(Interval &a, Interval &b) {
        if(a.start == b.start) {
            return a.end<b.end;
        }
        return a.start < b.start; 
    }

    int minMeetingRooms(vector<Interval>& intervals) {
        sort(intervals.begin(), intervals.end(), compare); 
        priority_queue<int, vector<int>, greater<int>> pq;

        for(auto &a: intervals) {
            if(pq.size() == 0 ){
                pq.push(a.end);
                continue;
            }

            int candidate = pq.top(); 
            if(candidate <= a.start) {
                pq.pop(); 
                pq.push(a.end);
            } else {
                pq.push(a.end);
            }

        }

        return pq.size();
    }
};
