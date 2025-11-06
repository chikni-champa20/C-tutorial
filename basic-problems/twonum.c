/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
*/
#include<stdio.h>
int main()
{
    int n, arr[n],i,j, target;
    printf("Size: ");
    scanf("%d",&n);
    printf("Array elements: \n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Target number: ");
    scanf("%d",&target);

    for ( i = 0; i < n; i++)
    {
        for(j=i+1;j<n;j++)
            {
                if(arr[i]+arr[j]==target)
                    printf("[%d,%d]\t",i,j);
            }
    }
    
    return 0;
}