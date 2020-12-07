#pragma once

#include <iostream>

class Road {
public:
  Road();
  Road(int len);
  ~Road();
  int getLastBlock() const;
  void mark(int pos, char a);
  char* toString() const;
  void clean();
private:
  int length;
  char* theroad;
};