#include <memory>
#include <map>
#include <string>

class Gadget { /* implementacja */ };

std::map<std::string, std::shared_ptr<Gadget>> gadgets;

void use()
{
    std::shared_ptr<Gadget> p1 = std::make_shared<Gadget>(1);  // reference counter = 1
    {
        std::shared_ptr<Gadget> p2 = p1; // copying of shared_ptr
        // reference counter == 2

        gadgets.insert(make_pair("mp3 player", p2)); // copying shared_ptr to a std container
        // reference counter == 3

        p2->use();
    }  // destruction of p2 decrements reference counter = 2
}  // destruction of p1 decrements reference counter = 1

// ...

gadgets.clear(); // reference counter = 0 - gadget is removed
