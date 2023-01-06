#include<iostream>
using namespace std;
class Solution {
public:
    int firstBadVersion(int n) {
        if(!isBadVersion(n))  // this function is implemented by the examiner  //
        {      
            return n+1;
        
        }
        return firstBadVersion(n-1);
    }
    
};