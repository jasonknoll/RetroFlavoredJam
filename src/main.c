#include <gb/gb.h>
#include <stdint.h>
#include "puck_sprite.h"

#define SCREEN_WIDTH 160
#define SCREEN_HEIGHT 144

// TODO 
// Add test tilemap background
// Add test player sprite
// Scroll background based on player position
// Add puck
// Add ability to pick up and release puck
// Add net
// Add CPU opponent 
// Add CPU opponent goalie
// Add program state

// From the test_func.s file
extern int8_t test_func();

uint8_t puck_x = 8;
uint8_t puck_y = 16;

void check_input() {
    if (joypad() & J_A) {

    }

    if (joypad() & J_START) {

    }

    if (joypad() & J_LEFT) {
        if (puck_x >= 8) 
            puck_x--;
    }

    else if (joypad() & J_RIGHT) {
        if (puck_x <= 160)
            puck_x++;
    }
    

    if (joypad() & J_UP) {
        if (puck_y >= 16)
            puck_y--;
    }

    else if (joypad() & J_DOWN) {
        if (puck_y <= 144)
            puck_y++;
    } 
    

    delay(8);
}

int main() {

    SPRITES_8x8;

    set_sprite_data(0, 1, sprite);
    set_sprite_tile(0, 0);
    move_sprite(0, puck_x, puck_y);
    SHOW_SPRITES;

    // ERROR does not show window with sprite attached
    set_win_data(0, 1, sprite);
    move_win(7, 154);
    SHOW_WIN; // bottom GUI window
    

    for (;;) {
        // TODO main gameplay loop
        // TODO handle input
        // TODO check state
        // TODO add player(s)

        check_input();
        move_sprite(0, puck_x, puck_y);
    }

    return 0;
}

