# Finding-duplicate-elements-in-an-array
🔍 Duplicate Element Finder
This program identifies and returns duplicate elements from an input array. It uses an efficient approach with unordered sets to ensure fast lookups and minimal time complexity. It does not return how many times an element has occured.

🛠️ How It Works:
The code iterates through the array and tracks seen elements using a set (seen).
If an element appears more than once, it is added to a duplicate set (duplicateSet).
The final result is a list of all duplicate elements, returned as a vector.
⚙️ How to Use:
Input:
Enter the number of elements in the array.
Provide the array elements.
Output:
The program displays the duplicate elements found in the array.
💻 Example:
Enter the number of elements: 8
Enter elements: 
1 3 2 3 4 5 2 1
Output:
Duplicate elements: 1 3 2
🚀 Key Features:
Efficient: O(n) time complexity, making it suitable for large arrays.
Minimal Space Overhead: Uses unordered sets for fast lookups.
Scalable: Can handle large datasets with ease.
