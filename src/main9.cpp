#include <SAOD.h>
int M, C;
using namespace std;
int main(){
    int i;
       cout << "n\t\t\tHeap Sort" << endl;
       cout<<"\tint\tdec\trand"<<endl;

    for (i = 100; i < 501; i += 100)
    {
        int* a = new int[i];
        cout << i << "\t";
        FillInc(a, i);
        HeapSort(a, i);
        cout << M + C << "\t";
        FillDec(a, i);
        HeapSort(a, i);
        cout << M + C << "\t";
        FillRand(a, i);
        HeapSort(a, i);
        cout << M + C << endl;
        delete[]a;
    }
    cout << endl;

    return 0;
}