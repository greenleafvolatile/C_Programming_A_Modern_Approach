/**************************************************************************
 * @file Programming_Project_2.c                                          *
 * @brief                                                                 *
 *                                                                        *
 * Programming Project 2: Write a program that formats product information*
 * entered by a user. The item number and date should be left justified;  *
 * the unit price should be right justified. Allow dollar amounts up to   *
 * $9999.99.                                                              *
 *                                                                        *
 * @author greenleafvolatile                                              *
 * @version 1.0                                                           *
 * @since 15-06-2022                                                      *
 * ************************************************************************/
// Directives
#include<stdio.h>
#include<printf.h>
#include<stdlib.h>

#define TAB_STOP 8

// Typedefs
typedef enum {
  E_SUCCESS,
  E_END_OF_FILE 
} Error;

// Function declarations

/** @brief Prints formatted product information in the 
 *  manner described in the book.
 *
 * @param item_number an item_number inputted by a user.
 * @param dollars a dollar amount inputted by a user.
 * @param cents a cents amount inputted by a user. 
 * @param month a month value inputted by user.
 * @param day a day value inputted by a user. 
 * @param year a year value inputted by a user.
 *
 * @return void.
 */
void
print_formatted_product_information(int item_number, int dollars, int cents, int month, int day, int year);

/** @brief Gets item number from a user.
 *  Keeps prompting in case of invalid input.
 *
 *  @param pointer to int variable holding item number value.
 *  
 *  @return Error
 */
Error
get_item_number_from_user(int *);

/** @brief Gets unit price from a user.
 *  Keeps prompting in case of invalid input.
 *
 * @param pointer to int variable holding dollar value.
 * @param pointer to int variable holding cents value.
 *
 * @return Errror.
 */
Error
get_unit_price_from_user(int *, int *);

/** @brief Gets date from a user (mm/dd/yyyy).
 *  Keeps prompting in case of invalid input.
 *
 * @param pointer to int holding month value.
 * @param pointer to int holding day value.
 * @param pointer to int holding year value.
 *
 * @return Error.
 */
Error
get_date_from_user(int * , int *, int *);

/** @brief Removes all tokens from input buffer.
 *
 *  @return void.
 */
void
empty_input_buffer();

/** @brief Print an error message.
 *
 *  @return void.
 */
void
print_error_message();

int
main(void)
{
  Error error;

  int item_number, dollars, cents, month, day, year, args;
  item_number = dollars = cents = month = day = year = args = 0;
  
  // Ignoring printf(const char *format) return values.
  printf("Enter item number: ");
  if ((error = get_item_number_from_user(&item_number))) {
    print_error_message(error);
    return EXIT_FAILURE;
  }
  
  printf("Enter unit price: ");
  if ((error = get_unit_price_from_user(&dollars, &cents))) {
    print_error_message(error); 
    return EXIT_FAILURE;
  }
  
  printf("Enter purchase date (mm/dd/yyyy): ");
  if ((error = get_date_from_user(&month, &day, &year))) {
    print_error_message(error);
    return EXIT_FAILURE;
  }

  print_formatted_product_information(item_number, dollars, cents, month, day, year);

  return EXIT_SUCCESS;

}

Error
get_date_from_user(int *month, int *day, int *year)
{
  int args, expected_number_of_arguments = 3;
  
  do {
    
    args = scanf("%d/%d/%d", month, day, year);

    if (args == EOF) {
      return E_END_OF_FILE;
    } else if (args != expected_number_of_arguments) {
      printf("Invalid input\n");
      empty_input_buffer();
    } 

  } while (args != expected_number_of_arguments);

  return E_SUCCESS;
}

Error
get_unit_price_from_user(int *dollars, int *cents)
{
  int args, expected_number_of_arguments = 2;

  do {

    args = scanf("%d.%d", dollars, cents);
    
    if (args == EOF) {
      return E_END_OF_FILE;
    } else if (args != expected_number_of_arguments) {
      printf("Invalid input\n");
      empty_input_buffer();
    } 

  } while (args != expected_number_of_arguments);

  return E_SUCCESS;
}

Error
get_item_number_from_user(int *item_number)
{
  int args, expected_number_of_arguments = 1;

  do {
    
    args = scanf("%d", item_number);

    if (args == EOF) {
      return E_END_OF_FILE;
    } else if (args != expected_number_of_arguments) {
      printf("Invalid input\n");
      empty_input_buffer();
    } 

  } while (args != expected_number_of_arguments);

  return E_SUCCESS;
}

void
empty_input_buffer()
{
  char ch;

  do {
    ch = getchar();
  } while(ch != '\n' && ch != EOF);

  return;
}

void
print_error_message(Error error)
{
  if (error == E_END_OF_FILE)
    printf("\nUser cancelled input.\n");

  return;
}



void
print_formatted_product_information(int item_number, int dollars, int cents, int month, int day, int year)
{
  printf("Item\t\tUnit\t\tPurchase\n");
  printf("\t\tPrice\t\tDate\n");
  printf("%-*d\t$%4d.%2.2d\t%-2.2d/%-2.2d/%-4.4d", TAB_STOP * 2 - 1, item_number, dollars, cents, month, day, year);

  return;
}








