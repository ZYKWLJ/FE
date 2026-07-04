#include "../../../include/__include.h"

int last_prefix_key = 26;
int cur_prefix_key = 26;

int prefix_key[27][2];
// the last index is - means all word are available.
void prefix_keys_init()
{
    for (int i = 0; i < 9; i++)
    {
        prefix_key[i][0] = PREFIX_A_X + HORIZONTAL_MARGIN_PREFIX_KEYS * i;
        prefix_key[i][1] = PREFIX_A_Y;
    }
    for (int i = 0; i < 9; i++)
    {
        prefix_key[i + 9][0] = PREFIX_A_X + HORIZONTAL_MARGIN_PREFIX_KEYS * i;
        prefix_key[i + 9][1] = PREFIX_A_Y + VERTICAL_MARGIN_PREFIX_KEYS;
    }
    for (int i = 0; i < 9; i++)
    {
        prefix_key[i + 18][0] = PREFIX_A_X + HORIZONTAL_MARGIN_PREFIX_KEYS * i;
        prefix_key[i + 18][1] = PREFIX_A_Y + 2 * VERTICAL_MARGIN_PREFIX_KEYS;
    }
}

void print_prefix_keys_available(int index_of_keys)
{
    gotoxy(prefix_key[index_of_keys][0], prefix_key[index_of_keys][1]);
    printf("%s%c%s", GREEN, index_of_keys < 26 ? 'A' + index_of_keys : '%', RESET);
}

void print_prefix_keys()
{
    prefix_keys_init();
    for (int i = 0; i < 26; i++)
    {
        gotoxy(prefix_key[i][0], prefix_key[i][1]);
        printf("%c", 'A' + i);
    }
    print_prefix_keys_available(26);
    print_suffix_char();
}

void print_suffix_char()
{
    printf("%s", GREEN);
    gotoxy(prefix_key[17][0] + 4, prefix_key[17][1]);
    printf("%c", '+');
    gotoxy(prefix_key[17][0] + 8, prefix_key[17][1]);
    printf("%c", '%');
    printf("%s", RESET);
}