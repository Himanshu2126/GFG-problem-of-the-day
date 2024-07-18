//{ Driver Code Starts
// Initial Template for javascript

// Initial Template for javascript

'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => { inputString += inputStdin; });

process.stdin.on('end', _ => {
    inputString =
        inputString.trim().split('\n').map(string => { return string.trim(); });

    main();
});

function readLine() { return inputString[currentLine++]; }

function main() {
    let t = parseInt(readLine());
    let i = 0;
    for (; i < t; i++) {
        let input_line = readLine().split(' ').map(x => parseInt(x));
        let n = input_line.length;
        let A = [];
        for (let i = 0; i < n; i++) A.push(input_line[i]);
        let obj = new Solution();
        console.log(obj.alternatingMaxLength(A));
    }
}
// } Driver Code Ends


// User function Template for javascript
/**
 * @param {number[]} arr
 * @returns {number}
 */

class Solution {
    // Function to find the maximum length of alternating subsequence
    alternatingMaxLength(arr) {
        // code here
        
        
if (arr.length <= 1) return arr.length;
        
        // Initialize up and down to handle the first element
        let up = 1;
        let down = 1;

        for (let i = 1; i < arr.length; i++) {
            if (arr[i] > arr[i - 1]) {
                up = down + 1;
            } else if (arr[i] < arr[i - 1]) {
                down = up + 1;
            }
        }

        // The maximum length will be the larger value of up and down
        return Math.max(up, down);
        
        
        
    }
}