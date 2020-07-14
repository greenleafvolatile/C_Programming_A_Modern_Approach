/* "Modify the poker.c program of Section 10.5 by moving the num_in_rank and num_in_suit arrays into main, 
   which will pass them as arguments to read_cards and analyze_hand." */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS_IN_HAND 5
#define CARD_ATTRIBUTES 2

/* external variables */
int cards_in_hand[NUM_CARDS_IN_HAND][CARD_ATTRIBUTES], pairs;
bool straight, flush, four, three;

/* prototypes */
void
read_cards(void);

bool
card_exists(int rank, int suit);

bool
check_for_flush(void);

void
analyze_hand(void);

void
print_result(void);

void
sort_by_rank(void);

void
get_rank_array(int array[]);

void
sort_rank_array(int array[]);

bool
check_for_same(int array[], int value);

int
count_pairs(int array[]);


// entry point to the program.
int
main(void) {

    for (;;) {
        read_cards();
        analyze_hand();
        print_result();
    }
}

void
read_cards(void) {
    char ch, rank_ch, suit_ch;
    int rank, suit, i, j;
    bool bad_card;
    int cards_read = 0;

    for (i = 0; i < NUM_CARDS_IN_HAND; i++) {
        for (j = 0; j < CARD_ATTRIBUTES; j++) {
            cards_in_hand[i][j] = 0;
        }
    }
    
    while (cards_read < NUM_CARDS_IN_HAND) {
        bad_card = false;

        printf("Enter a card (0 to quit): ");

        rank_ch = getchar();

        switch (rank_ch) {
            case '0' : exit(EXIT_SUCCESS);
            case '2' : rank = 1; break;
            case '3' : rank = 2; break;
            case '4' : rank = 3; break;
            case '5' : rank = 4; break;
            case '6' : rank = 5; break;
            case '7' : rank = 6; break;
            case '8' : rank = 7; break;
            case '9' : rank = 8; break;
            case 't' :
            case 'T' : rank = 9; break;
            case 'j' :
            case 'J' : rank = 10; break;
            case 'q' :
            case 'Q' : rank = 11; break;
            case 'k' :
            case 'K' : rank = 12; break;
            case 'a' :
            case 'A' : rank = 13; break;
            default  : bad_card = true; break ;
        }

        suit_ch = getchar();
        switch (suit_ch) {
            case 'c' :
            case 'C' : suit = 1; break;
            case 'd' :
            case 'D' : suit = 2; break;
            case 'h' : 
            case 'H' : suit = 3; break;
            case 's' :
            case 'S' : suit = 4; break;
            default  : bad_card = true; break;
        }

        while ((ch=getchar()) != '\n') {
            if (ch!=' ') {
                bad_card = true;
            }
        }

        if (bad_card) {
            printf("Bad card; ignored.\n");
        }

        // Check for duplicate card.
        else if (card_exists(rank, suit)) {
            printf("Duplicate card; ignored.\n");
        }
        else {
            cards_in_hand[cards_read][0] = rank;
            cards_in_hand[cards_read][1] = suit;
            cards_read++;
        }
    }
}

bool
card_exists(int rank_entered, int suit_entered) {
    for (int i = 0; i < NUM_CARDS_IN_HAND; i ++) {
        if (cards_in_hand[i][0] == rank_entered &&  cards_in_hand[i][1] == suit_entered) {
            return true;
        }
    }
    return false;
}

void
analyze_hand(void) {
    int ranks_in_hand[NUM_CARDS_IN_HAND];
    straight = true;
    flush = false;
    four = false;
    three = false;

    // Check for flush (five cards of the same suit).
    flush = check_for_flush();

    // Create an array of all the ranks_in_hand in the current hand. 
    get_rank_array(ranks_in_hand);

    // Sort array of ranks_in_hand (insertion sort).
    sort_rank_array(ranks_in_hand);

    // Check for straight (five cards with consecutive ranks).
    for (int i = 0; i < NUM_CARDS_IN_HAND - 1; i++) {
        if (ranks_in_hand[i] != ranks_in_hand[i + 1] - 1) {
            straight = false;
        }
    }
    
    // Check for four-of-a-kind.
    four = check_for_same(ranks_in_hand, 4);

    // Check for three-of-a-kind.
    three = check_for_same(ranks_in_hand, 3);

    // Count number of pairs.
    pairs = count_pairs(ranks_in_hand);
}

bool
check_for_flush() {
    int suit  = cards_in_hand[0][1];
    for (int i = 0; i < NUM_CARDS_IN_HAND; i++) {
        if (cards_in_hand[i][1] != suit) {
            return false;
        }
    }
    return true;
}

int
count_pairs(int array[]) {     
    int pairs = 0;
    for (int i = 0; i < NUM_CARDS_IN_HAND; i++) {
        int rank = array[i];
        for (int j = i + 1; j < NUM_CARDS_IN_HAND; j++) {
            if (array[j] == rank) {
                pairs++;
                break;
            }
         }
         while (array[i + 1] == rank) i++;
    }
    return pairs;
}

bool
check_for_same(int ranks_in_hand[], int number) {
    for (int i = 0; i < NUM_CARDS_IN_HAND; i++) {
        int equal_numbers = 0;
        for (int j = 0; j < NUM_CARDS_IN_HAND; j++) {
            if (ranks_in_hand[i] == ranks_in_hand[j]) {
                equal_numbers++;
            }
        }
        if (equal_numbers == number){
            return true;
        }
    }
    return false;
}

void
sort_rank_array(int ranks_in_hand[]) {
    for (int i = 1; i < NUM_CARDS_IN_HAND; i++) {
        int next = ranks_in_hand[i];
        int j = i;
        while (j > 0 && ranks_in_hand[j - 1] > next) {
            ranks_in_hand[j] = ranks_in_hand[j - 1];
            j--;
        }
        ranks_in_hand[j] = next;
    }
}

void
get_rank_array(int array[]) {
    for (int i = 0; i < NUM_CARDS_IN_HAND; i++) {
        array[i] = cards_in_hand[i][0];
    }
}
     
void
print_result(void) {
    if (straight && flush)          printf("Straight flush");
    else if (four)                  printf("Four of a kind");
    else if (three && pairs == 1)   printf("Full house");
    else if (flush)                 printf("Flush");
    else if (straight)              printf("Straight");
    else if (three)                 printf("Three of a kind");
    else if (pairs == 2)            printf("Two pairs");
    else if (pairs == 1)            printf("Pair");
    else                            printf("High card");

    printf("\n\n");
}



   








    






