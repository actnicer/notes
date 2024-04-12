#include <iostream>
#include <string>

// unit testing
bool TestResult(int result, int expected, const std::string error_message) {
  if (result != expected) {
    std::cerr << error_message << std::endl
              << "Result: " << result << std::endl
              << "Expected: " << expected << std::endl;
    return false;
  }
  return true;
}


int main() {
  // Place your testcode here!
  int IsSecurePassword(const std::string & password);

  bool testFail = false;
  std::string test_pass = "hello"; //1
  std::string test_pass2 = "HELLO"; //1
  std::string test_pass3 = "1";  //1
  std::string test_pass4 = "helloooooo";  //2
  std::string test_pass5 = "!"; //1
  std::string test_pass6 = "HELLooto12!@"; //6

  std::string test_pass7 = "tencharacters1"; //3
  std::string test_pass8 = "~`-+<>";  //0
  std::string test_pass9 = "~`-+<>>>>>>>>>>>"; //1
  std::string test_pass10 = "UPyu87@#";  //5

  std::string error_mess = "This is wrong";

  if(!TestResult(IsSecurePassword(test_pass6), 6, error_mess))
    testFail = true;
  if(!TestResult(IsSecurePassword(test_pass5), 1, error_mess))
    testFail = true;
  if(!TestResult(IsSecurePassword(test_pass4), 2, error_mess))
    testFail = true;
  if(!TestResult(IsSecurePassword(test_pass3), 1, error_mess))
    testFail = true;
  if(!TestResult(IsSecurePassword(test_pass2), 1, error_mess))
    testFail = true;
  if(!TestResult(IsSecurePassword(test_pass), 1, error_mess))
    testFail = true;
  if(!TestResult(IsSecurePassword(test_pass7), 3, error_mess))
    testFail = true;
  if(!TestResult(IsSecurePassword(test_pass8), 0, error_mess))
    testFail = true;
  if(!TestResult(IsSecurePassword(test_pass9), 1, error_mess))
    testFail = true;
  if(!TestResult(IsSecurePassword(test_pass10), 5, error_mess))
    testFail = true;

  if(testFail)
    std::cout << "Fail";
  else
    std::cout << "Pass";
}