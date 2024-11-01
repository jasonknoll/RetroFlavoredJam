# Game Design Document
#### Retro Flavored Jam #1

Genre: Arcade Sports (hockey)

My submission for this jam is an arcade ice hoceky game with the theme, **Finite/Limited**, mixed in to follow the criteria for the jam. The game is heavily inspired by Blades of Steel on the NES and Gameboy.

## Overview

The game will be a 2D hockey game for the Gameboy. The player will play 1-on-1 against a computer opponent where the objective is to score more goals than the opponent in the given amount of time. Each player has a goaltender, controlled indirectly by the player, to give the player an extra layer of defense. 

The player will have the ability to move in all directions as well as pass and shoot the puck. A shot will always travel towards an opponent's net while a pass can go in any direction. Passing is a desired mechanic even without teammates as it allows the player to release the puck in any direction, rather than just towards the opponent's goal.

## Art Style

Given the nature of the Gameboy's graphics, the ice sheet will be a tilemap and the players and objects will be 2D sprites. Until I learn more about developing for the Gameboy Color specifically, the art will follow the original GB's 4-tone pallette. 

## Sound Design

I have never worked with sound on a console, but now is a great time to start. I would to try to compose some simple tracks with the GB's simple audio system. Sound FX for the game would be nice as well

## Toolchain

The two GBDev toolchains I plan on utilizing are [GBDK](https://github.com/gbdk-2020/gbdk-2020) and [RGBDS](https://github.com/gbdev/rgbds). GBDK utilizes C while RGBDS uses assembly... as much as I think assembly is cool, I'm not that great with it. GBDK will most likely be the framework of choice for this, although some assembly still may be used there as well. 

## Requirements

TODO flesh out requirements

- [ ] The background shall be a top-down view of an ice rink
    - [ ] The background shall be loaded as a tilemap
- [ ] The background shall scroll horizontally to follow the puck
- [ ] The game shall implement the THEME in some way ????
- [ ] The player shall be able to 'shoot' the puck towards the opponent's net by pressing the 'A' button
- [ ] The player shall be able to 'pass' the puck in any direction by pressing the 'B' button and a direction on the D-pad
- [ ] The player shall be able to move in all directions using the D-pad
- [ ] The player's goaltender shall be controlled with the 'up' and 'down' directions on the D-pad (mimicing BoS)
- [ ] The player, opponent, goaltenders, and goal nets shall be represented by 2D sprites stored in the ROM
- [ ] The game shall have a small piece of music composed through the Gameboy's internal sound system (idk how this works yet)
- [ ] The player shall be able to 'poke-check' the opponent and steal the puck from them (idk?)
- [ ] 

