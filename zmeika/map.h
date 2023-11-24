#pragma once 
#include <iostream>
#include <vector>

/**
 * @brief Class representing the game map.
 */
class map
{
    int length; /**< Length of the map. */
    int height; /**< Height of the map. */

    std::vector<std::vector<int>> fields; /**< 2D vector representing the map fields. */

public:
    /**
     * @brief Default constructor for the map.
     */
    map();

    /**
     * @brief Parameterized constructor for the map.
     * @param initialLength Initial length of the map.
     * @param initialHeight Initial height of the map.
     * @param initialFields Initial values for the map fields.
     */
    map(int initialLength, int initialHeight, const std::vector<std::vector<int>>& initialFields);

    /**
     * @brief Copy constructor for the map.
     * @param other Another map object being copied.
     */
    map(const map& other);

    /**
     * @brief Assignment operator for the map.
     * @param other Another map object being assigned.
     * @return Returns a reference to the current map object.
     */
    map& operator=(const map& other);

    /**
     * @brief Comparison operator for the map.
     * @param other Another map object being compared to the current object.
     * @return Returns true if the objects are equal, and false otherwise.
     */
    bool operator==(const map& other) const;

    /**
     * @brief Input operator for the map.
     * @param is Input stream.
     * @param m Reference to the map object where values are read.
     * @return Returns a reference to the input stream.
     */
    friend std::istream& operator>>(std::istream& is, map& m);

    /**
     * @brief Output operator for the map.
     * @param os Output stream.
     * @param m Reference to the map object being output.
     * @return Returns a reference to the output stream.
     */
    friend std::ostream& operator<<(std::ostream& os, const map& m);
};
