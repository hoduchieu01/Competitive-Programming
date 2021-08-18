// Copyright (c) hoduchieu01
/*
    Given a list of words and two words word1 and word2, return the shortest distance between these two words in the list.
    Algorithm: Brute Force
    Time Complexity: O(n*n) & Space Complexity: O(1)
    // strcmp(string 1, string 2) == 0 when 2 strings equal
*/
int min(int a, int b){
    if(a > b) 
        return b;
    else
        return a;
}

int shortestDistance(char ** words, int wordsSize, char * word1, char * word2){
    int minDistance = wordsSize;
    for(int i = 0; i < wordsSize; i++){
        if(strcmp(words[i], word1) == 0){
            for(int j = 0; j < wordsSize; j++){
                if(strcmp(words[j], word2) == 0){
                    minDistance = min(minDistance, abs(i-j));
                }
            }
        }
    }
    return minDistance;
}