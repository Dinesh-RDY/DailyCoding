class Solution:
    def findCost(self, nums, cost,x):
        cost = 0
        for i in range(len(nums)):
            cost += abs(nums[i] - x) * cost[i]
        return cost
    def minCost(self, nums: List[int], cost: List[int]) -> int:
        low = high = nums[0]
        for i in range(len(nums)):
        
            if (low > nums[i]): low = nums[i]
            if (high < nums[i]): high = nums[i]
        while ((high - low) > 2):
            mid1 = low + (high - low) // 3
            mid2 = high - (high - low) // 3
    
            cost1 = self.findCost(nums, cost, mid1)
            cost2 = self.findCost(nums, cost, mid2)
            if (cost1 < cost2):
                high = mid2
            else:
                low = mid1
        x=  self.findCost(nums, cost, (low + high) // 2)
        y = self.findCost(nums, cost, (low + high) //2 + 1)
        return min(x,y)
        