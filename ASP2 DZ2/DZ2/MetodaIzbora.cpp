#include "MetodaIzbora.h"

void MetodaIzbora::sortiraj(Niz *niz)
{
      for(unsigned int i = 0; i < niz->brElemenata()-1; i++)
            for(unsigned int j = i+1; j < niz->brElemenata(); j++)
            {
                  brojKoraka++;

                  if( (*niz)[i] > (*niz)[j] )
                        zameni(niz, i, j);
            }
}

