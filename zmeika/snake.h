
#pragma once
/**
 * @author Hotinschi Daniil
 * @e-mail - danik03krut@gmail.com
 */
#include <iostream>

 /**
  * @brief Class representing a snake object in the game.
  */
    class snake
{
    float speed; /**< Speed of the snake. */
    int size;    /**< Size of the snake. */
    bool dead;   /**< Flag indicating whether the snake is dead. */

public:
    /**
     * @brief Default constructor for the snake object.
     */
    snake();

    /**
     * @brief Parameterized constructor for the snake object.
     * @param initialSpeed Initial speed of the snake.
     * @param initialSize Initial size of the snake.
     * @param isDead Flag indicating whether the snake is dead.
     */
    snake(float initialSpeed, int initialSize, bool isDead);

    /**
     * @brief Copy constructor for the snake object.
     * @param other Another snake object being copied.
     */
    snake(const snake& other);

    /**
     * @brief Assignment operator for the snake object.
     * @param other Another snake object being assigned.
     * @return Returns a reference to the current snake object.
     */
    snake& operator=(const snake& other);

    /**
     * @brief Comparison operator for the snake object.
     * @param other Another snake object being compared to the current object.
     * @return Returns true if the objects are equal, and false otherwise.
     */
    bool operator==(const snake& other) const;

    /**
     * @brief Input operator for the snake object.
     * @param is Input stream.
     * @param s Reference to the snake object where values are read.
     */
    friend std::istream& operator>>(std::istream& is, snake& s);

    /**
     * @brief Output operator for the snake object.
     * @param os Output stream.
     * @param s Reference to the snake object being output.
     */
    friend std::ostream& operator<<(std::ostream& os, const snake& s);
};
