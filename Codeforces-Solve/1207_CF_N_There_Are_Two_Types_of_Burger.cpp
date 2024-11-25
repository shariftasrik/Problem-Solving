#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int b,p,f;
        cin >> b >> p >> f;

        int h,c;
        cin >> h >> c;

        int total_cost = 0,p_cost = 0,f_cost = 0, remb_half = 0;

        int b_half = b/2;

        if(b_half < 1){
            total_cost = 0;
        }
        if(c >= h){
            if(b_half >= f){
                f_cost = f * c;
                remb_half = b_half - f;

                if(remb_half >= p){
                    p_cost = p * h;
                }else{
                    p_cost = remb_half * h;
                }
            }else if(b_half < f){
                f_cost = b_half * c;
            }
        }else{
            if(b_half >= p){
                p_cost = p * h;
                remb_half = b_half - p;

                if(remb_half >= f){
                    f_cost = f*c;
                }
                else{
                   f_cost = remb_half * c;
                }
            }else if(b_half < p){
                p_cost = b_half * h;
            }
        }

        total_cost = f_cost + p_cost;
        cout << total_cost << endl;

    }
    return 0;
}
