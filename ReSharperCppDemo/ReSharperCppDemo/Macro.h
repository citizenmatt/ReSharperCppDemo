#pragma once

#define MULTIPLY(a,b) a*b
#define MAD(a,b,c) MULTIPLY(a,b)+c

class MacroSample
{
public:
  float Calculate(int x, int y, float z)
  {
    // try inlining MAD below (two different options)
    return MAD(x,y,z);
  }
};