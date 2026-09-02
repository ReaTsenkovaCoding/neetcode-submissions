class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        
        seen = set()

        for n in nums:
            seen.add(n)
        
        longest = 0
        for n in nums:
            count = 1
            if n-1 not in seen:
                while n+1 in seen:
                    count += 1
                    n += 1
                longest = max(count, longest)
        return longest
        