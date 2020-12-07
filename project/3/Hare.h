#pragma once

#ifndef HARE_H
#define HARE_H

class Hare{
public:
  Hare();
  Hare(int* pat, int s, int pos);
  ~Hare();
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