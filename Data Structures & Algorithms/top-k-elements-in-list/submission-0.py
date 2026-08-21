class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        pairs = {}

        for n in nums: 
            pairs[n] = pairs.get(n, 0) + 1 # 1:3, 2:2, 3:1

        items = pairs.items() # [(1,3), (2,2), (3,1)]
        items_sorted = sorted(items, key = lambda x: x[1], reverse = True) # [(1,3), (2,2), (3,1)]
        top_k = items_sorted[:k]

        top_k_nums = []
        top_k_nums = [i[0] for i in top_k]
        
        return top_k_nums