#pragma once

class Human // try renaming this to Person
{
protected:
  int age; // try renaming this to legal_age (start typing 'legal' and choose helper)
public:
  Human(int age) : age(age) {}
};

class Voter : public Human
{
  explicit Voter(int age) : Human(age) {}

  const static int votingAge = 16;
public:
  bool CanVote() { return age >= votingAge; }
};