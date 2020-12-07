#include "Tortoise.h"
#include <iostream>

Tortoise::Tortoise() : length(10){
  pattern = new int[length];
  int def[] = {3, 3, 3, 3, 3, -6, -6, 1, 1, 1};
  for (int i=0; i<length; i++){
    pattern[i] = def[i];
  }
  position = 0;
}

Tortoise::Tortoise(int* pat, int s, int pos) : length(s > 0 ? s : 10){
  pattern = new int[length];
  if (s > 0){
    for (int i = 0; i  <length; i++){
      pattern[i] = pat[i];
    }
  }
  else {
    int def[] = {3, 3, 3, 3, 3, -6, -6, 1, 1, 1};
    for (int i = 0; i < length; i++){
      pattern[i] = def[i];
    }
  }
  position = pos;
}

Tortoise::~Tortoise(){
  delete[] pattern;
  pattern = 0;
}

void Tortoise::move(){
  position += pattern[rand()%length];
}

void Tortoise::setPosition(int pos){
  position = pos;
}

int Tortoise::getPosition() const{
  return position;
}

int* Tortoise::getPattern() const{
  return pattern;
}

int Tortoise::getPatternLength() const{
  return length;
}