#pragma once

#ifndef TORTOISE_H
#define TORTOISE_H

class Tortoise{
public:
  Tortoise();
  Tortoise(int* pat, int s, int pos);
  ~Tortoise();
  int getPosition() const;
  int* getPattern() const;
  int getPatternLength() const;
  void setPosition(int pos);
  void move();
private:
  const int length;
  int* pattern;
  int position;
};
#endif