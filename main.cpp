#include <iostream>
#include <ctime>

unsigned long long fibonacciAddition(int n)
{
    unsigned long long a = 0, b = 1, c, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

unsigned long long fibonacci(int a){
    if (a == 0 || a == 1)
        return 1;
    else
        return fibonacci(a-1) + fibonacci(a-2);
}

void dynamic_fib(int a){
    unsigned long long fib[a];
    fib[0] = 1;
    if(a > 0)fib[1] = 1;
    if (a == 0){
        std::cout << 0 << std::endl;
        return;
    }
    for (int i = 2; i < a; i++){
        fib[i] = fib[i-1]+fib[i-2];
        //std::cout << "fib" << i << ": " << fib[i] << std::endl;
    }
    std::cout << fib[a-1] << std::endl;
}

int main() {
    clock_t t1, t2;

   for(int i = 0; i < 45; i ++){
        std::cout << "i: " << i <<" fibonacciAddition(i): " << fibonacciAddition(i) << std::endl;
    }
    std::cout << std::endl;

    for(int i = 0; i < 45; i ++){
        std::cout << "i: " << i <<" dynamic_fib(i): ";
        dynamic_fib(i);
    }
    std::cout << std::endl;

    for(int i = 0; i < 45;i++){
        t1 = clock();
        std::cout << "i: " << i <<" fibonacci(i): " << fibonacci(i) << " time: ";
        t2 = clock();
        float diff = (static_cast<float>(t2) - (float)t1);
        std::cout << diff << std::endl;
    }
    
    return 0;
}
