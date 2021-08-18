# Copyright (c) hoduchieu01
class Solution:
    def shortestDistance(self, words: List[str], word1: str, word2: str) -> int:
        word_dict = defaultdict(list)
        for i, w in enumerate(words):
            if w in (word1, word2): 
                word_dict[w].append(i)
        minDistance = float('inf')
        for i in word_dict[word1]:
            for j in word_dict[word2]:
                minDistance = min(minDistance, abs(i-j))
        return minDistance