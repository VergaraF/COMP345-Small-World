
# COMP354: Advanced Program Design with C++ project

# General Information #

## COMP 345-Winter 2018 Project Description

The project is about writing a C++ computer game that allows the user to play a reasonable version of the SMALL WORLD role playing game. The SMALL WORLD is a “strategy” computer game, the gaming rules are given in [1]. All assignments (4) will be about the development of different parts of a project. Thus, every assignment will build upon code developed in the previous assignments. You are expected to work in teams of 2 for every assignment. Individual work will be accepted, but will be graded in the same terms as team work.

## Problem Statement
SMALL WORLD is a multiplayer board game (2 to 5 players). Space is getting tight in Small World. There are just too many races living off your land - land your ancestors bequeathed to you in hopes you would build an empire with which you could dominate the world.

Picking a fantasy Race and Special Power combination, you must use their unique racial traits and skills to conquer surrounding Regions and amass Victory coins - often at the expense of weaker neighbors. Placing troops (Race tokens) in various Regions, and conquering adjacent lands, you earn Victory coins for each Region you occupy at the end of your turn. Eventually, your race will become increasingly over-extended (like those you have already crushed!) and you will need to abandon your civilization and look for another. The key to your victory is knowing when to push your empire into decline and ride a new one to supremacy in the land of Small World!

The SMALL WORLD game consists of a connected graph map representing a world map, where each node is a region and each edge represents adjacency between regions. Two or more players can play the game by earning the most victory points through the control of territories over the course of the game.

## Parts/features of the game
The Components:

* The Game Boards: Small World comes with two separate double-sided game boards (for a total of four). There's one for each player count, from 2 to 5.The game boards are showing off a variety of regions, all hand-drawn but colored to show their type: mountain, hill, swamp, field, or water.

* Cardboard Bits: The game is filled with cardboard bits. This includes 109 victory-point coins (in four different denominations and colors), a variety of bits which go on the board, 34 cultural identifiers, and 186 race tokens.
   * Board Bits. The pieces that go on the board include troll lairs, fortresses, encampments, and halfling holes. They are              placed in regions and they make it easy to determine the defense of regions because you just count the cardboard bits. The  fifth board bit: mountains. You put mountain cardboard bits on the board in the mountain regions, so that you always remember that mountains increase the defense of the space by one. It's a great usability option--except for the fact that the mountains are big enough that if they get knocked around, they obscure other facts on the board. Other than that one problem, all of these bits look good and are good quality.
   * Board Bits. The pieces that go on the board include troll lairs, fortresses, encampments, and halfling holes. They are placed in regions and they make it easy to determine the defense of regions because you just count the cardboard bits. The fifth board bit: mountains. You put mountain cardboard bits on the board in the mountain regions, so that you always remember that mountains increase the defense of the space by one. It's a great usability option--except for the fact that the mountains are big enough that if they get knocked around, they obscure other facts on the board. Other than that one problem, all of these bits look good and are good quality.
   * Race Tokens. These are the pieces that the players move around the board. Each one depicts
one unit of the race in question on a little square chit. You know what race you (or anyone else) is controlling by looking at the race banner sitting in front of them.

* Die: there is one simple wooden die.

## The Game Design

The object of Small World is to earn the most victory points through the control of territories over the course of the game. The catch is that you won't be able to do so with just one race. Instead, you'll need to play 2-5 different races over the course of the game to optimize your points.

### Setup: ###
Lay out the game board and place a mountain on each mountain space. Place "Lost Tribe" markers on the board as indicated. (These are starting pieces that make it harder to initially take over some territories.)

Near the board the six possible races are revealed by putting 6 special power badges together with 6 racial banners. These combinations are placed in order, so that there's a "first" race and a "last" race.
Each player takes 5 coins.

### A Normal Turn: ### 
On a normal turn a player might take the following steps:
* Select a New Race
* Conquer!
* Redeploy
* Score Victory coins

      * Select a New Race: This only happens on the first turn of the game and on later turns after the player has placed his previous race in decline.

The active player can select the first race from the racial queue for free, or he can take a further one by placing a victory coin on each race he skips. If someone later takes a previously skipped race, he takes all the coins that were placed on it.
When a player selects a race, he takes a certain number of race tokens for the race. The exact number is determined by values shown on the special power badge and the race banner. (Generally, the better the abilities, the fewer tokens you get.)

     * Conquer!: You'll start each turn with a number of race tokens in your hand. For your first turn, that's all of the tokens you just got for the race. For later turns, you pick up pieces from the board, leaving just one in each space.

You can now use those tokens to attack a new region. On the first turn you're using any race, your first attack can be to any region adjacent to the edge of the board (or to an exterior sea), but later on you must attack adjacent to existing units.

There's very little randomness in Small World. You can take a region by paying 2 race tokens + 1 race token per mountain, opposing race token, or other defensive piece on the space. You place those tokens you spent in the space you're conquering, and your opponent is forced to take his pieces off the board. He loses one and gets to replace the rest at the end of your turn.

The Last Conquest. At the end of a series of conquests, you might not have enough pieces to attack another province. You can then declare one final attack, and roll the "reinforcement" die. If the number of chits shown on the die plus the number still in your hand is enough to take the region, you do!

    * Redeploy: At the end of your turn you can rearrange your race tokens as you see fit, as long as you leave at least one on each space.
  
    * Score Victory Coins: Now you score your victory points. You get 1 coin per space you control (plus, possibly, others due to special powers, which we'll return to momentarily). After that, it's the next player's turn.


### A Decline Turn: ###
Instead of taking a normal turn and doing all the above, you can instead take a "decline" turn. This means that you flip over your race banner and special power badge, losing some or all of the powers for that race. You also decrease the number of your declining race's tokens in each region to 1, and flip over those remaining tokens to mark that you're in decline.
If you had any previous races still in decline, you discard those entirely.

Now you score your declined race as usual. You're going to get to keep scoring all of your declined markers for every turn they survive.

On the next turn, you get to select a new race at the start of your turn (and having two races around, your current race and your decline race, both of them scoring points, is why you want to go into decline in the first place).


### The Special Powers: ### 
Each race typically has two special powers, one for their special power badge and one for their race banner. These do a variety of things, and are what really make the game work. Some give extra victory points for certain terrains, while others make certain terrains easier to conquer. Some give you various defensive markers to put on your terrains. Finally, some modify individual rules for that race. For example, the elves never lose their race tokens when they lose terrain, the ghouls don't discard extra race tokens when they go into decline, and the stout special power lets you go into decline at the end of a normal turn.

### Ending the Game: ### 
The game ends after a set number of turns determined by the number of players. The player with the most victory coins wins.


Reference

[1] SMALL WORLD , Philippe Keyaerts, available on the Moodle Course homepage, or under https://ncdn1.daysofwonder.com/smallworld/en/img/sw_rules_2015_en.pdf
