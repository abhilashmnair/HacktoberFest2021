//Longest Substring Without Repeating Characters
// Amey Joshi (dev-ameyjoshi)
//
// Approach:
// 1.We use the sliding window approach.
// 2.Here the while loop will start when the initial character has been deleted and the initial 
// value has been incremented everytime with -> begin = begin + 1.
// This will increment it to 1 past the inital repeating character.
// 3.Examples have been provided for clarity.

// Time complexity: O(1)
// Space complexity: O(n)

let s1 = "abcabcbb"
let s2 = "pwwkew"


var lengthOfLongestSubstring = function(s) {
      let max = 0
      let begin = 0
      let set = new Set()
      
      
      for(let end = 0; end < s.length;end++){
          while(set.has(s[end])){
              set.delete(s[begin])
              begin = begin +1
          }
          set.add(s[end])
          max = Math.max(max,end-begin+1)
          
      }
      return max
      };

//Example 1
     let maxsubstring = lengthOfLongestSubstring(s1)
     console.log(maxsubstring)                           //Expected : 3

//Example 2
     let sub2 = lengthOfLongestSubstring(s2)
     console.log(sub2)                                   //Expected : 3
    