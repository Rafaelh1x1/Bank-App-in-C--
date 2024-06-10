#include <iostream>
#include <string>

using namespace std;

class Account {
  private:
    string first_name;
    string last_name;
    double accountBalance;
  public:
    Account(string f_name, string l_name, double balance) :
    first_name(f_name), last_name(l_name), accountBalance(balance) {}
};

int main(){
  char account_active;
  cout << "Hello, welcome to the banking app" << endl;
  cout << "Do you have an account with us? (Y/N)" << endl;
  cin >> account_active;
}