#pragma once
/**
 * @author Hotinschi Daniil
 * @e-mail - danik03krut@gmail.com
 */
#include "snake.h"
#include "map.h"
#include "apple.h"

 /**
  * @brief Class representing the game engine.
  */
class engine
{
    snake _snake; /**< Snake object. */
    map _map;     /**< Map object. */
    apple _apple; /**< Apple object. */

public:
    /**
     * @brief Default constructor for the game engine.
     */
    engine();

    /**
     * @brief Method to start the game.
     */
    void Play();
};
