#pragma once
/**
 * @author Hotinschi Daniil
 * @e-mail - danik03krut@gmail.com
 */
#include <iostream>

 /**
  * @brief Class representing an apple object in the game.
  */
class apple
{
    int amount; /**< Number of apples in the game. */

public:
    /**
     * @brief Default constructor for the apple object.
     */
    apple();

    /**
     * @brief Parameterized constructor for the apple object.
     * @param initialAmount Initial number of apples.
     */
    apple(int initialAmount);

    /**
     * @brief Copy constructor for the apple object.
     * @param other Another apple object being copied.
     */
    apple(const apple& other);

    /**
     * @brief Assignment operator for the apple object.
     * @param other Another apple object being assigned.
     * @return Returns a reference to the current apple object.
     */
    apple& operator=(const apple& other);

    /**
     * @brief Comparison operator for the apple object.
     * @param other Another apple object being compared to the current object.
     * @return Returns true if the objects are equal, and false otherwise.
     */
    bool operator==(const apple& other) const;

    /**
     * @brief Input operator for the apple object.
     * @param is Input stream.
     * @param a Reference to the apple object where values are read.
     * @return Returns a reference to the input stream.
     */
    friend std::istream& operator>>(std::istream& is, apple& a);

    /**
     * @brief Output operator for the apple object.
     * @param os Output stream.
     * @param a Reference to the apple object being output.
     * @return Returns a reference to the output stream.
     */
    friend std::ostream& operator<<(std::ostream& os, const apple& a);
};
