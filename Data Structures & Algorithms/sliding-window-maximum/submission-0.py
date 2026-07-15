class Solution:
    from collections import deque
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        output=[]
        queue=deque()
        left=0
        for right in range(len(nums)):
            while queue and nums[queue[-1]]<nums[right]:
                queue.pop()
            queue.append(right)
            if queue[0]<left:
                queue.popleft()
            if right+1>=k:
                output.append(nums[queue[0]])
                left+=1
        return output
        