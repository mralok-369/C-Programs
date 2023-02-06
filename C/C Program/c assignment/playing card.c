#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define num_suit 4
#define num_ranks 13
int main(){
    bool in_hand[num_suit][num_ranks]={false};
    int num_cards,rank,suit;

    char rank_code[] = {'2','3','4','5','6','7','8','9','t','j','q','k','a'};
    char suit_code[] = {'c','s','d','h'};

    srand((unsigned) time(NULL));
    printf("Give no. of cards: ");
    scanf("%d",&num_cards);
    printf("Your hand: ");
    while(num_cards > 0){
        suit = rand() % num_suit;
        rank = rand() % num_ranks;

        if(!in_hand[suit][rank]){
            in_hand[suit][rank] = true;
            num_cards--;
            printf("%c%c ",rank_code[rank],suit_code[suit]);
        }

    }

    return 0;
}


