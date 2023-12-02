/* 
FROM CHATGPT: 

Sorting an array of 100MB with limited RAM of 10MB poses challenges due to space constraints. Let's discuss the feasibility of using each sorting algorithm you mentioned:

Bubble Sort:
Bubble sort is not suitable for sorting large arrays, especially in this scenario. It has a time complexity of O(n^2) and requires swapping elements, which makes it inefficient for large datasets. Additionally, it's an in-place sorting algorithm, meaning it doesn't require extra space for sorting. However, it's not recommended for sorting 100MB data with only 10MB of available space due to its inefficiency and high time complexity.

Counting Sort:
Counting sort is a non-comparison based sorting algorithm with a time complexity of O(n + k), where 'n' is the number of elements and 'k' is the range of input. It requires additional space proportional to the range of input elements. In this case, if the range of elements in the array is manageable within the available 10MB space, counting sort might be feasible. However, if the range of elements is significantly larger than the available space, counting sort might not be practical.

Merge Sort:
Merge sort is a comparison-based, divide-and-conquer sorting algorithm with a time complexity of O(n log n). It's efficient and has good performance for large datasets. However, merge sort requires additional space proportional to the size of the array being sorted. Since the given RAM has only 10MB available, using merge sort directly on the entire 100MB array might not be feasible due to the space requirement for temporary arrays during the merging process.

 */