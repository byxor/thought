#include <exception>
#include <string>

class Answer {
public:
  Answer(const std::string content);
  void AssertCompliant() const;
private:
  const std::string content;
};

class Reasoning {
public:
  void AssertCompliant() const;
};

struct NotAnAnswer : public std::exception {
  const char *what() const throw();
};

struct NotReasoned : public std::exception {
  const char *what() const throw();
};
