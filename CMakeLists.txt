cmake_minimum_required(VERSION 3.21)
project(PokerAnalysis)

set(CMAKE_CXX_STANDARD 14)

add_executable(PokerAnalysis main.cpp Rank.h Suit.h Deck.cpp Deck.h Card.h Application.cpp Application.h)
