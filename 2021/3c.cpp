/* Arrays:

Static size: Defined at compile time with a fixed size that cannot be changed during program execution.
Memory allocation: Stored on the stack, offering faster access and smaller overhead.
Initialization: Can be directly initialized with values during declaration.
Simplicity: Easy syntax and straightforward access using index-based notation.
Limitations: Size cannot adapt to changing data requirements. Exceeding the size leads to undefined behavior or crashes.
Dynamic Arrays:

Dynamic size: Allocated memory on the heap at runtime, allowing the size to grow or shrink as needed.
Memory allocation: Requires manual allocation using malloc, calloc, or new and deallocation using free or delete.
Initialization: Usually not directly initialized, elements are added or removed dynamically.
Flexibility: Adapts to varying data needs, making it suitable for unpredictable data sizes.
Complexity: Requires careful memory management to avoid leaks and dangling pointers.
 */