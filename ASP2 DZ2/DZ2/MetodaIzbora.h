#ifndef METODA_IZBORA_H__
#define METODA_IZBORA_H__


#include "sortalgoritam.h"

class MetodaIzbora : public SortAlgoritam
{
protected:
      virtual void sortiraj(Niz *niz);

public:

      virtual const char *nazivAlgoritma() const
      {
            return "Metoda izbora";
      }

      virtual const char *akronimAlgoritma() const
      {
            return "SESO"; // akronim SElection SOrt
      }

      virtual Poredak dohvatiPoredak() const
      {
            return SortAlgoritam::NEOPADAJUCE;
      }
};


#endif