#include <iostream>
using namespace std;

int main()
{
        int n, N;
        cin >> n;

        int anterior, resp = 0, cont = 0;

        for(int i = 0; i < n; i++)
        {
                if(i > 0)
                { 
                        anterior = N;
//                        cout << i << endl
                }
                cin >> N;

//              cout << anterior << endl;
                if(anterior == N)
                {
                        cont++;
                }
                else
                {
                        cont = 0;
                }
//             cout << cont << endl;
                if(cont > resp)
                {
                        resp = cont;
                }
        }

        if(resp > 0)
        {
                cout << resp+1 << endl;
        }
        else
        {
                cout << resp << endl;
        }

        return 0;
}