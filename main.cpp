#include <iostream>

using namespace std;
// 0 f; 1 h; 2+; 3-
int main(void)
{   
    int steps=1; //count repetitions
    int n=0;
    int m=0;
    int counto[512];
    int countn[512];
    //init counto and count n with 0 and the rest with 4
    //4 is terminating char
    cout << "enter steps! : ";
    cin >> steps;
    for(int c=0; c<512; c++)
    {
        countn[c] = 4;
    }
    countn[0] = 0;
    
    cout << "init" << endl;
    
    //count
    
    for(int d = 0; d <= steps; d++)
    {
        m=0;
        n=0;
        //do while steps not reached yet
        cout << "loop" << endl;
        //convert new to old
            for(int c=0; c<512; c++)
            {
                counto[c] = countn[c];
            }
            //check and place new
            do{
                if(counto[n] == 0) //f+h
                {
                    countn[m] = 0;
                    countn[m+1]  = 2;
                    countn[m+2] = 1;
                    m = m+3;
                    n++;
                }
                if(counto[n] == 1) //f-h
                {
                    countn[m] = 0;
                    countn[m+1]  = 3;
                    countn[m+2] = 1;
                    m = m+3;
                    n++;
                }
                if(counto[n] == 2)
                {
                    countn[m] = 2; 
                    m++;
                    n++;
                }
                if(counto[n] == 3)
                {
                    countn[m] = 3; 
                    m++;
                    n++;
                }

        }while(counto[n] != 4);
    }
    
    for(int c=0; c<512; c++)
    {
        cout << counto[c];
    }
    
    cout << "finished!" << endl;
    return 0;
}
/*counto[0] = 0;
countn[0] = 0;
countn[1] = 2;
countn[2] = 1;*/