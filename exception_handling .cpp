#include <iostream>
#include <stdexcept>

class MyException : public std::invalid_argument {
public:
    MyException(const std::string& what, int errorCode) : std::invalid_argument(what), errorCode_(errorCode) {}

    int getErrorCode() const { 
        return errorCode_; }

private:
    int errorCode_;
};

int main() {
    try {
        throw MyException("Something went wrong!", 42);
    } catch (const MyException& e) {
        std::cout << "Caught MyException: " << e.what() << " (Error code: " << e.getErrorCode() << ")" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Caught std::exception: " << e.what() << std::endl;
    }
    return 0;
}