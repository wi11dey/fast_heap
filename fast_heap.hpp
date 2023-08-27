#include<queue>
#include<vector>
#include<functional>

template<
    typename T,
    typename Container = std::vector<T>,
    typename Compare = std::less<T>
>
class mutable_priority_queue : public std::priority_queue<T, Container, Compare> {
public:
    void replace_top(const T& new_top) {
        this->c.push_back(new_top);
        this->pop();
    }

    void replace_top(T&& new_top) {
        this->c.push_back(new_top);
        this->pop();
    }
};
