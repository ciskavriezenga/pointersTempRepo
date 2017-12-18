#include "simpleSynth.h"


SimpleSynth::SimpleSynth() : Synthesizer()
{
  std::cout << "Inside the SimpleSynth constructor.\n";
}

SimpleSynth::~SimpleSynth()
{
  std::cout << "Inside the SimpleSynth destructor.\n";
}

void SimpleSynth::process(void* outputBuffer, int numFrames, int samplerate)
{
  std::cout << "Inside the SimpleSynth process method.\n";
}
