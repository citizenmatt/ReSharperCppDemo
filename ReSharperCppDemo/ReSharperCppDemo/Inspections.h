#pragma once

#include "stdafx.h"
#include "CodeGen.h"
#include "Color.h"

class InspectionsDemo
{
  int count; 
public:
  // alt+enter and add 'explicit' specifier
  // alt+enter on parameter and choose to initialize the 'count' field
  InspectionsDemo(int count)
  {
    // alt+enter on 'auto' and specify type explicitly
    auto x = std::function<void(void)>([=]() { std::cout << count << std::endl; });
  }

  // alt+enter and show options to generate inline or external definition
  int Sum(int a, int);

  void DangerousOperatorPrecedence()
  {
    // this issue helps deal with ? operator precedence -
    std::cout << "The platform is " << (sizeof(char*) == 8) ? "64-bit" : "32-bit";
  }

  int MeaningOfLife(int z)
  {
    // note the semicolon inspection below: tricky bug to catch (there's no QF)
    // also, alt+enter on > and flip relation operator
    if (z > 0);
      return 42;
  }

  int DeltaFunction(int value)
  {
    // alt+enter below to use 'if' instead and back
    // also alt+enter and invert if statement
    return value == 0 ? std::numeric_limits<int>::max() : 0;
  }

  void UseAccount(const std::shared_ptr<BankAccount> acc)
  {
    // alt+enter on the first 'if' and choose to merge if statements
    if (acc->open)
    {
      if (acc->balance == 0)
      {
        std::cout << "Account is ready to be used" << std::endl;
      }
    }
  }

  void PrintColorName(Color color)
  {
    switch (color)
    {
      // alt+enter to generate cases
      // now delete one of the Color cases and alt+enter again to generate missing case
    }
  }

  void HelloDevelopers()
  {
    // add << endl at the end: explain popup and do alt+enter to add std:: prefix
    std::cout << "Hello, developers!";
  }
};

template <int N>
struct Factorial 
{
    enum { value = N * Factorial<N - 1>::value };
};

template <>
struct Factorial<0> 
{
    enum { value = 1 };
};

void foo()
{
  // hover the mouse over ::value to show evaluated values
  int x = Factorial<4>::value;
  int y = Factorial<0>::value;
}