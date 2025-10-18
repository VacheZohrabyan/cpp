#include "main.hpp"

void add_user_in_contact(PhoneBook phoneBook)
{
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;

    std::cout << "Enter first name :";
    std::cin >> first_name;
    std::cout << "Enter last name: ";
    std::cin >> last_name;
    std::cout << "Enter nick name";
    std::cin >> nick_name;
    std::cout << "Enter phone number";
    std::cin >> phone_number;
    std::cout << "Enter darkest_secret";
    std::cin >> darkest_secret;
    Contact contact(first_name, last_name, nick_name, phone_number, darkest_secret);
    phoneBook.Add(contact);
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
            add_user_in_contact(phoneBook);
        else if (value == "SEARCH")
            phoneBook.Search(phoneBook);
        else if (value == "EXIT")
            return 0;
        else
            continue;    
    }

}