//complexity-O(N)
class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int len=nums.size();// to store the length of the array
        int ans=0;// to store te sum of XOR's
        for(int i=0;i<len;i++ )// the loop to iterate over each eelemnt in the array
            {
               ans |= nums[i];// pereforming OR operation in each element in the array
            }
        return  ans << (len-1); // the appending(len-1) time 0's right side
        
    }
};
// Steps to do:
//1) perfrom OR operation- of binary equivalent
//2) then append zero to the right side ..that too (len-1) time
// Example:
// nums=[1,3]-> Binary for of 1= 01 and 3=11 
// GIVEN OUPUT=6 Whose Binary Form = 110
// now we perform OR operation = 01^11=11 now when we comapre it with our output we need to append one 0 to the right
// and it same happens with other examples too we need to append(len-1) times zero to the right side
