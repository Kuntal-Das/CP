#include <bits/stdc++.h>
#define ui unsigned long long int //"ui" is just a alias for "unsigned long long int", so i can use "ui" whenever i want to write "unsigned long long int" 

// #define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); *IGNORE
/*one Test Case:

1
10
10 9 8 7 6 5 4 3 2 1

*/
using namespace std;


//it will take only positive integer
ui fscanInt()
{
    //not expecting negative value as the problem will not provide test cases with -Ve numbers
    ui n1 = 0, c = _getchar_nolock(); // extract current character from buffer, Linux func : getchar_unlocked();
    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c > 47 && c < 58); c = _getchar_nolock())
        //(n<<1)+(n1<<3) is equal to n*10 but faster
        n1 = (n1 << 1) + (n1 << 3) + c - 48;
    return n1;
}

int main()
{
    printf(">>");//this printf is just to help me know when it is up and running
    ui t = fscanInt();//input for "t", "t" denoting the number of test cases to follow.
    while (t--)
    {
        // input for n.a single integer n, the number of cars
        ui n = fscanInt(), prev = INT_MAX, nxt, fc = 0;
        //assigned "prev" the maximum value a integer can take,prev will denote high speed of the car at front of "nxt"
        //"fc" is the count of cars with its High speed
        while (n--)
        {
            // input for "nxt", "nxt" denoting the maximum speed of the cars 
            //using a loop to take input in the order they entered the long straight segment.
            nxt = fscanInt();
            if (prev > nxt)
                fc++;
            prev = nxt;
        }
        printf("%lld\n", fc);
    }
    return 0;
}