# fast_heap
Provides a fast, mutable C++ `priority_queue` which mutates `top()` at double the speed of a naïve `pop()` + `push()`.

## Examples
- Merging _k_ streams of sorted data into one sorted stream. Each element in the merged stream would take 2log(_n_) time to compute using the C++ STL; with this library you can acheive a constant-factor reduction of 2x.
