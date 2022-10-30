/**
 * Nathan Nunes & Rajat Pandey
 */

#include <iostream>
#include <memory>
#include "Animal.h"
#include "Tiger.h"
#include "Wolf.h"
#include "Lemur.h"
#include "Kangaroo.h"
#include "Serpent.h"
using namespace std;

// Create Factories
class AbstractFactory {
   public:
      virtual shared_ptr<Animal> create() const = 0;
};
class TigerFactory : public AbstractFactory {
   public:
      virtual shared_ptr<Animal> create() const {
        return make_shared<Tiger>();
      };
};
class WolfFactory : public AbstractFactory {
   public:
      virtual shared_ptr<Animal> create() const {
        return make_shared<Wolf>();
      };
};
class LemurFactory : public AbstractFactory {
   public:
      virtual shared_ptr<Animal> create() const {
        return make_shared<Lemur>();
      };
};
class KangarooFactory : public AbstractFactory {
   public:
      virtual shared_ptr<Animal> create() const {
        return make_shared<Kangaroo>();
      };
};
class SerpentFactory : public AbstractFactory {
   public:
      virtual shared_ptr<Animal> create() const {
        return make_shared<Serpent>();
      };
};