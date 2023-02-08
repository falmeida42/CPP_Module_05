#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"

typedef struct s_pair {
    std::string formName;
    AForm *(*func)(std::string);
} t_pair;

class Intern : public Bureaucrat
{
    private:
        t_pair  formRequests[3];
    public:
        AForm    *makeForm(std::string formName, std::string target);
        static AForm    *makeShrubbery(const std::string target);
        static AForm    *makePresidentialPardon(const std::string target);
        static AForm    *makeRobotomy(const std::string target);
        Intern();
        Intern(const Intern& other);
        Intern &operator=(const Intern& other);
        ~Intern();
};

#endif