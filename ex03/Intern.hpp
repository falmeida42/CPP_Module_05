#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"

typedef struct s_pair {
    std::string formRequest;
    AForm *(*func)(const std::string);
} t_pair;

class Intern
{
    private:
        t_pair  formRequests[2];
    public:
        AForm    *makeForm(std::string formName, std::string target);
        AForm    *makeShrubbery(std::string target);
        Intern();
        ~Intern();
};

#endif