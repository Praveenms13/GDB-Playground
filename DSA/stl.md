STL in C++ stands for the **Standard Template Library**. It's a powerful library that provides a collection of generic classes and functions to help programmers with common data structures and algorithms. The STL is one of the most important features of C++ as it allows developers to write more efficient and cleaner code by using pre-defined templates.

STL Are
1. Algorithms
2. Containers
3. Functions
4. Iterators


### Key Components of STL:
1. **Containers**:
   - Containers are data structures that store collections of objects. They are template classes, meaning they can hold any data type.
   - Examples:
     - **Sequence Containers**: `vector`, `deque`, `list`, `array`
     - **Associative Containers**: `set`, `map`, `multiset`, `multimap`
     - **Unordered Containers**: `unordered_set`, `unordered_map`, `unordered_multiset`, `unordered_multimap`
     - **Container Adapters**: `stack`, `queue`, `priority_queue`

2. **Iterators**:
   - Iterators are objects that act as pointers, allowing traversal through the elements of a container. They provide a way to access elements of a container sequentially without exposing the underlying structure.
   - Types of iterators:
     - **Input Iterator**
     - **Output Iterator**
     - **Forward Iterator**
     - **Bidirectional Iterator**
     - **Random Access Iterator**

3. **Algorithms**:
   - The STL provides a wide range of generic algorithms that operate on containers. These algorithms can be used for searching, sorting, modifying, and manipulating elements within containers.
   - Examples:
     - `sort`, `find`, `count`, `accumulate`, `for_each`, `copy`, `reverse`, `unique`, `transform`

4. **Functors (Function Objects)**:
   - A functor is any object that can be treated as a function or function pointer. In STL, functors are often used with algorithms to customize their behavior.

5. **Allocators**:
   - Allocators handle the memory management for STL containers, abstracting away the details of memory allocation and deallocation.

### Example Usage:
Here's a simple example of using STL in C++:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {4, 1, 3, 5, 2};

    // Sort the vector
    std::sort(numbers.begin(), numbers.end());

    // Print the sorted vector
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
```

This program sorts a list of numbers using the `sort` algorithm from the STL and prints the sorted numbers.

The STL is designed to be efficient, reusable, and flexible, making it an essential tool in modern C++ programming.