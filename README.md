# Generic Container Template Class 📦

A C++ template class implementation of a flexible container that can store various data types.

## Features
- **Template-based design**: Stores elements of any data type (int, double, string, etc.)
- **Dynamic capacity**: Handles up to 50 elements (expandable)
- **Utility methods**: Provides essential container operations
- **Type-safe**: Compile-time type checking

## Class Structure
```cpp
template <typename T>
class Container {
private:
    T* list;  // Dynamic array of elements
public:
    Container(int size);  // Constructor
    ~Container();         // Destructor
    // Utility methods...
};
