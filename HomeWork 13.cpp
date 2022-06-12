#include <iostream>
#include <ctime>

int main()
{
    //Task 1
    int num;
    std::string ans = "This number is prime\n \n";
    std::cin >> num;
    

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            ans = "This number isn't prime\n \n";
            break;
        }
    }
    std::cout << ans;



    //Task 2
    int number;
    std::string answ = "No consecutive numbers \n \n";
    std::cin >> number;


    for (int i = 0; ; i++)
    {
        int prev = number % 10;
        number /= 10;


        if (prev == number % 10)
        {
            answ = "There are consecutive numbers \n \n";
            break;
        }
    }
    std::cout << answ;
    


    //Task 3
    int nummer;
    std::string answe = "True \n \n";
    std::cin >> nummer;


    for (int i = 0; ; i++)
    {
        int prev = nummer % 10;
        nummer /= 10;


        if (prev > nummer % 10)
        {
            answe = "False";
            break;
        }
    }
    std::cout << answe;



    //Task 4
    int max = 99999999, count = 0;


    for (int i = 10000000; i < max; i++)
    {
        if (i % 12345 == 0)
        {
            std::cout << i << "\n";
            count += 1;
        }
    }
    std::cout << "\nTotal number of digits found: " << count << "\n";



    //Task 5
    int randonum, percent = 0;
    srand(time(0));
    std::cout << "\n \nRandom numbers: ";


    for (int i = 0; i < 100; i++)
    {
        randonum = rand() % 100;
        if (rand() % 2 == 1)
        {
            randonum -= 100;
            percent += 1;
        }
        std::cout << randonum << ", ";
    }
    std::cout << "\nNumbers greater than zero are " << 100 - percent << " %\n";
    std::cout << "Numbers less than zero are " << percent << " %\n";

}
