#pragma once

#include "stdafx.h"
#include "CodeGen.h"

class Bank
{
  void Process(float x)
  {
    // put a cursor in front of the statement and call the Introduce Variable refactoring (call it 'account')
    std::make_shared<BankAccount>();

    // also show create from usage here - alt+enter on 'discount' and Create local variable
    float value = x * discount;
  }
};