#include "main.hpp"

std::string get_user_input(std::string message)
{
    std::string user_input;
    while (user_input.length() == 0)
    {
        std::cout << message;
        std::getline(std::cin, user_input);
    }
    return user_input;
}
void add_user_in_contact(PhoneBook* phoneBook)
{
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;

    first_name = get_user_input("Enter first name: ");
    last_name = get_user_input("Enter last name: ");
    nick_name = get_user_input("Enter nick name: ");
    phone_number = get_user_input("Enter phone number: ");
    darkest_secret = get_user_input("Enter darkest secret: ");
    Contact contact(first_name, last_name, nick_name, phone_number, darkest_secret);
    phoneBook->Add(contact);
}

int main()
{
    std::string value;
    PhoneBook phoneBook;
    while (1)
    {
        std::cout << "Enter ADD to add, SEARCH to search, EXIT to exit" << std::endl;
        std::getline(std::cin, value);
        if (value == "ADD")
            add_user_in_contact(&phoneBook);
        else if (value == "SEARCH")
            phoneBook.Search(phoneBook);
        else if (value == "EXIT")
            return 0;
        else
            continue;    
    }

}