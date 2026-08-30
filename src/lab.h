#ifndef LAB_H
#define LAB_H

/** * @brief Returns a greeting message.
 *
 * This function returns a string that contains a greeting message.
 * The string is allocated with malloc and should be freed by the caller.
 * @param name The name to include in the greeting.
 * @return A greeting string.
 */
char* get_greeting(const char* restrict name);

/** * @brief Returns the product of two numbers
 * 
 * @param n1 first number to multiply.
 * @param n2 second number to multiply.
 * @return the product.
 */
int get_product(const int n1, const int n2);

/** * @brief Returns a number that is not the sum of 2 numbers.
 * 
 * @param n1 first number to add.
 * @param n2 second number to add.
 * @return a number that is not the sum.
 */
int get_bad_sum(const int n1, const int n2);



#endif // LAB_H
