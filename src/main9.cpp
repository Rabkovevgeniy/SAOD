#include <SAOD.h>
int M, C;
using namespace std;

int main(){
    int i;  
      srand(time(0));
    M=C=0;
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
    i = 1000000;
    int* a = new int[i];
        cout << i << "\t";
        FillRand(a, i);
        ShellSort(a, i,1);
        cout << M + C << "\t";
        FillRand(a, i);
        HeapSort(a, i);
        cout << M + C << "\t";
    return 0;
}