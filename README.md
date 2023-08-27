# fast_heap
Provides a fast, mutable C++ `priority_queue` which mutates `top()` at double the speed of a naïve `pop()` + `push()`.

## Usage
Same as [`std::priority_queue`](https://en.cppreference.com/w/cpp/container/priority_queue), except for the addition of:

### `mutable_priority_queue::replace_top(const value_type& value)`
Efficiently replaces the top of the heap with a copy of `value` using only one heapify-down operation.

### `mutable_priority_queue::replace_top(value_type&& value)`
Efficiently replaces the top of the heap with rvalue `value` using only one heapify-down operation.

## Examples
- Merging _k_ streams of sorted data into one sorted stream. Each element in the merged stream would take 2log(_n_) time to compute using the C++ STL; with this library you can acheive a constant-factor reduction of 2x.
