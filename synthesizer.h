#ifndef _SYNTHESIZER_H_
#define _SYNTHESIZER_H_

#include <iostream>

class Synthesizer
{
public:
  //constructor
  Synthesizer();
  //destructor
  ~Synthesizer();

  //audio process method
  void process(void* outputBuffer, int numFrames, int samplerate);

  //__getters&setters__
  void setFrequency(float frequency);
  float getFrequency();

  void setAmplitude(float amplitude);
  float getAmplitude();

private:
  float frequency;
  float amplitude;
};


#endif //_SYNTHESIZER_H_
