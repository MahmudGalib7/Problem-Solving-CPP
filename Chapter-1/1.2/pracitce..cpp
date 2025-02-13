#include <iostream>

int main()
{
    std::cout << "Hello world!";                   // Everything from here to the end of the line is ignored
    std::cout << "Hello world!\n";                 // std::cout lives in the iostream library
    std::cout << "It is very nice to meet you!\n"; // these comments make the code hard to read
    std::cout << "Yeah!\n";                        // especially when lines are different lengths

    // std::cout lives in the iostream library
    std::cout << "Hello world!\n";

    // this is much easier to read
    std::cout << "It is very nice to meet you!\n";

    // don't you think so?
    std::cout << "Yeah!\n";

    /* This is a multi-line comment.
   This line will be ignored.
   So will this one. */

    /* This is a multi-line comment.
     * the matching asterisks to the left
     * can make this easier to read
     */

    // To generate a random item, we're going to do the following:
    // 1) Put all of the items of the desired rarity on a list
    // 2) Calculate a probability for each item based on level and weight factor
    // 3) Choose a random number
    // 4) Figure out which item that random number corresponds to
    // 5) Return the appropriate item

    // Bad Comment:
    //  Set sight range to 0
    int sight = 0;

    //Good Comment:
    // The player just drank a potion of blindness and can not see anything
    sight = 0;
    
    return 0;
}