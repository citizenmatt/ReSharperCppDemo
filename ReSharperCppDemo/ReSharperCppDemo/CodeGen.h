#pragma once

// alt-enter on Account and add a virtual destructor
class Account
{
public:
  virtual void Deposit(float amount) = 0;
  virtual void Withdraw(float amount) = 0;
};

class BankAccount : public Account
{
public:
  float balance;
  bool open;
  // alt-insert here and generate a constructor

  // alt-enter and Move implementation out of class scope. this goes to .cpp if one exists
  // then, alt-enter and add the 'virtual' specifier
  void Deposit(float amount) override { balance += amount; }

  // alt-insert and generate missing Withdraw method below

  // then, alt-enter on it and choose to generate function body in our out of function  
};