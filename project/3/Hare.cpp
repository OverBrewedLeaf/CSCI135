#include "Hare.h"
#include <iostream>

Hare::Hare() : length(10){
  pattern = new int[length];
  int def[] = {0, 0, 9, 9, -12, 1, 1, 1, -2, -2};
  for(int i = 0; i < length; i++){
    pattern[i] = def[i];
  }
  position = 0;
}

Hare::Hare(int* pat, int s, int pos) : length(s > 0 ? s : 10){
  pattern = new int[length];
  if (s > 0){
    for (int i = 0; i < length; i++){
      pattern[i] = pat[i];
    }
  }
  else {
    int def[] = {0, 0, 9, 9, -12, 1, 1, 1, -2, -2};
    for (int i=0; i < length; i++){
      pattern[i] = def[i];
    }
  }
  position = pos;
}

Hare::~Hare(){
  delete[] pattern;
  pattern = 0;
}

void Hare::move(){
  position += pattern[rand()%length];
}

void Hare::setPosition(int pos){
  position = pos;
}

int Hare::getPosition() const{
  return position;
}

int* Hare::getPattern() const{
  return pattern;
}

int Hare::getPatternLength() const{
  return length;
}