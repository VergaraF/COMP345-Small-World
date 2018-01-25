
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
Setup: Lay out the game board and place a mountain on each mountain space. Place "Lost Tribe" markers on the board as indicated. (These are starting pieces that make it harder to initially take over some territories.)
Near the board the six possible races are revealed by putting 6 special power badges together with 6 racial banners. These combinations are placed in order, so that there's a "first" race and a "last" race.
Each player takes 5 coins.
