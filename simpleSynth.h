#ifndef _SIMPLE_SYNTH_H_
#define _SIMPLE_SYNTH_H_

#include <iostream>
//#include "sine.h"
#include "synthesizer.h"

class SimpleSynth : public Synthesizer
{
public:
  //constructor
  SimpleSynth();
  //destructor
  ~SimpleSynth();

  //audio process method
  void process(void* outputBuffer, int numFrames, int samplerate);


  //TODO add sine object


};


#endif
