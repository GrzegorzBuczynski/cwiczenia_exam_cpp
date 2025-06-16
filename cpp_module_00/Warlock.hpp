#include <iostream>
#pragma once
class Warlock {

    private:
        std::string _name;
        std::string _title;
        Warlock & operator=(Warlock const &);
        Warlock();
        Warlock(Warlock const &);
    
    public:
        Warlock(std::string name, std::string title);
        ~Warlock();
        std::string const & getName() const;
        std::string const & getTitle() const;
        void setTitle(std::string const & title);
        void introduce() const;
};