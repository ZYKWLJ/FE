#include "../../../include/__include.h"

#define PREFIX_A_X PREFIX_BUTTON_X + 16
#define PREFIX_A_Y PREFIX_BUTTON_Y - 1
#define HORIZONTAL_MARGIN_PREFIX_KEYS 3
#define VERTICAL_MARGIN_PREFIX_KEYS 2

void prefix_keys_init();

void print_prefix_keys();

void print_prefix_keys_available(int index_of_keys) ;

extern int last_prefix_key;
extern int cur_prefix_key;
