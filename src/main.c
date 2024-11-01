#include <gb/gb.h>
#include <stdint.h>
#include "puck_sprite.h"

// TODO 
// Add test tilemap background
// Add test player sprite
// Scroll background based on player position
// Add puck
// Add ability to pick up and release puck
// Add net
// Add CPU opponent 
// Add CPU opponent goalie

// From the test_func.s file
extern int8_t test_func();

int main() {
    SPRITES_8x8;

    int8_t test = test_func();

    if (test == 1) {
        set_sprite_data(0, 1, sprite);
        set_sprite_tile(0, 0);
        move_sprite(0, 8, 16);
        SHOW_SPRITES;
    }

    return 0;
}
