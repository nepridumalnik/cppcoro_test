#include <cppcoro/generator.hpp>
#include <cppcoro/task.hpp>
#include <cppcoro/sync_wait.hpp>

#include <iostream>

cppcoro::generator<int> intYielder()
{
    co_yield 0;
    co_yield 1;
}

int main(int argc, char const *argv[])
{
    std::vector<int> v;
    for (int n : intYielder())
    {
        std::cout << "yielded " << n << '\n';
        v.push_back(n);
    }

    bool success = v[0] == 0 && v[1] == 1;
    if (!success)
    {
        return 1;
    }

    std::cout << "success";
    return 0;
}
