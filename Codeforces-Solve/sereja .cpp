#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n_cards;
    cin >> n_cards;

    vector <int> card(n_cards);
    for(int i = 0; i < n_cards; i++)
     cin >> card[i];

    int sergey_sum = 0, dima_sum = 0;
    for(int front_i = 0, back_i = n_cards - 1, no_of_turns = 1; no_of_turns <= n_cards; no_of_turns++)
    {
        int greater_card = max(card[front_i], card[back_i]);

        if(card[front_i] >= card[back_i])
            front_i++;
        else
            back_i--;

        if(no_of_turns%2 == 1)
            sergey_sum += greater_card;
        else
            dima_sum += greater_card;

    }

    //cout << sergey_sum ;
    //cout << dima_sum;
    printf("%d %d",sergey_sum,dima_sum);
    return 0;
}
