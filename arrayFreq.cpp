#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void freq(int[], int, int[]);

int main()
{
    srand(time(0));
    const int MAX_SIZE = 100;
    const int MAX_NUM = 30;

    int data[MAX_SIZE];
    int cnt[MAX_NUM] = {0};
    int i;

    for (i=0; i < MAX_SIZE; i++){
        data[i] = rand() %(MAX_NUM );
        //cout << data[i] << endl;
    }

    freq(data, MAX_SIZE, cnt);

    for (i=0; i < MAX_NUM; i++)
    {
        if (cnt[i] != 0)
            cout << i << " occurs " << cnt[i] << " times\n";
    }


}

// calculate the frequency of each element in data[]
// use data[i] as index into cnt[] and increment
void freq(int data[], int sz, int cnt[])
{
    for (int i = 0; i < sz; i++)
        cnt[data[i]]++;

}


