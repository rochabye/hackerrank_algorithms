
#include <bits/stdc++.h>

using namespace std;

// Complete the viralAdvertising function below.
int viralAdvertising(int n) {
    
    int shared = 5, liked, cumulative = 0;
    
    while ( n > 0 )
    {
        liked = shared / 2;
        shared = liked * 3; 
        cumulative += liked;
        --n;
    }
    return cumulative;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);



    fout << result << "\n";

    fout.close();

    return 0;
}