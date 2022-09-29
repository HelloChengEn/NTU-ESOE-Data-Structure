#include <iostream>

int* showPrime(int p);
bool isPrime(int p);
int* findPrime(int p);

using namespace std;

int main()
{
    int a = 5869; int b = 3053; int c = 104395302;
    int d = 4;

    int* res = showPrime(a);
    cout << res[0] << ',' << res[1];

    return 0;
}

int* showPrime(int p)
{
    int result[2]; int i;

    cout << "Input number is: " << p << endl;

    /* if is prime print: p, 0
       else print: prevPrime, nextPrime */
    if (isPrime(p)) {
        cout << "Input number is prime" << endl;
        result[0] = p; result[1] = 0;
    }
    else {
        cout << "Input number is not prime" << endl;
        int* result = findPrime(p);
        //cout << result[0] << ' ' << result[1] << endl;
    }

    return result;
}

bool isPrime(int p)
{
    int i;
    for (i = 2; i <= p / 2; i++) {
        if (p % i == 0) {
            return false;
        }
    }
    return true;
}

int* findPrime(int p)
{
    int res[2]; 
    int* prevPrime;
    prevPrime = new int[p + 1];
    int nextPrime = p;

    cout << "In findPrime()" << endl;
    
    /*  Method to find prev prime number
        Sieve of Eratosthenes */
    
        // suppose the prev number are prime
    int i;
    for (i = 2; i <= p + 1; i++) {
        prevPrime[i] = true;
    }
  
        // for loop sqrt(p) times if p is prime than set p*divisor = false
    int divisor;
    for (divisor = 2; divisor * divisor <= p; divisor++) {
        if (prevPrime[divisor]) {
            for (i = 2 * divisor; i <= p; i = i + divisor) {
                prevPrime[i] = false;
            }
        }
    }
        // find the last prime number by reversing the nextPrime array
    //bool found = false;
    while (!prevPrime[p]) {
        p--;
        if (prevPrime[p]) {
            res[0] = p;
        }
    }

    //cout << "the pl number is: " << res[0] << endl;
    
    /*  Method to find next prime number
        adding nextPrime until it is prime number */ 
    bool found = false;
    while (!found) {
        nextPrime++;
        if (isPrime(nextPrime)) {
            found = true;
        }
    }
    res[1] = nextPrime;

    cout << "the pl, pr number is: " << res[0] << "," << res[1] << endl;
    cout << "leave findPrime()" << endl;

    return res;
}
