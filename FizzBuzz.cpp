#include <iostream>

void game()
{
    int max{ 100 };
    for (unsigned i{ 1 }; i <= max; i++)
    {
        if (i % 5 == 0 && i % 3 == 0)
        {
            std::cout << "Fizz Buzz";
        }
        else if (i % 3 == 0)
        {
            std::cout << "Fizz";
        }
        else if (i % 5 == 0)
        {
            std::cout << "Buzz";
        }
        else
        {
            std::cout << i;
        }

        if (i < max)
            std::cout << ", ";
        else
            std::cout << "!";
    }
}

int main()
{
    game();
}