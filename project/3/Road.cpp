#include "Road.h"
#include <iostream>
#include <string>

Road::Road(){
  length = 70;
  theroad = new char[length];
  for (int i=0; i<length; i++){
    mark(i, ' ');
  }
}

Road::Road(int len){
  if (len > 0){
    length = len;
  }
  else {
    length = 70;
  }
  theroad = new char[length];
  for(int i = 0; i < length; i++){
    mark(i, ' ');
  }
}

Road::~Road(){ 
  delete[] theroad;
  theroad = nullptr;
}

int Road::getLastBlock() const{
  return length-1;
}

void Road::mark(int pos, char a){
  theroad[pos] = a;
}

char* Road::toString() const{
  return theroad;
}

void Road::clean(){
  for (int i=0; i<length; i++){
    mark(i,' ');
  }
}