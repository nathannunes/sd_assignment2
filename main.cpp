#include <iostream>
#include <fstream>
#include <memory>
#include <vector>
#include "AbstractFactory.cpp"

using namespace std;

int main(int argc, char** argv) {
    // Abstract Factory, Clone , Singleton
    // Inheritance , Abstract Classes
    vector<string> tigerNames;
    tigerNames.push_back("A");
    tigerNames.push_back("B");
    tigerNames.push_back("C");
    string input;
    int pop,i=0;
    while(std::getline(std::cin, input)){
        cout << input << endl;
        string animalName = input.substr(0,input.find(' '));
        int numberOfAnimals = stoi(input.substr(input.find(' ')+1,input.length()));
        
        if(animalName == "tiger"){
            shared_ptr<AbstractFactory> factory = make_shared<TigerFactory>();
            for(int k=0;k<numberOfAnimals;k++){
                shared_ptr<Animal> animal = factory->create();
                animal->setName(tigerNames[rand()%tigerNames.size()]);
                animal->setType("tiger");
                animal->setAction("roar");
                animal->setFood("meat");
                animal->printMessage();
            }
        }
        else if(animalName == "wolf"){
            shared_ptr<AbstractFactory> factory = make_shared<WolfFactory>(); 
            for(int k=0;k<numberOfAnimals;k++){           
                shared_ptr<Animal> animal = factory->create();
                animal->setName("WolfName");
                animal->setType("wolf");
                animal->setAction("growl");
                animal->setFood("chicken");
                animal->printMessage();
            }
        }
        else if(animalName == "lemur"){
            shared_ptr<AbstractFactory> factory = make_shared<LemurFactory>();    
            for(int k=0;k<numberOfAnimals;k++){        
                shared_ptr<Animal> animal = factory->create();
                animal->setName("lemurName");
                animal->setType("lemur");
                animal->setAction("squeak");
                animal->setFood("fruit");
                animal->printMessage();
            }
        }
        else if(animalName == "kangaroo"){
            shared_ptr<AbstractFactory> factory = make_shared<KangarooFactory>(); 
            for(int k=0;k<numberOfAnimals;k++){           
                shared_ptr<Animal> animal = factory->create();
                animal->setName("kangarooName");
                animal->setType("kangaroo");
                animal->setAction("click");
                animal->setFood("carrots");
                animal->printMessage();
            }
        }
        else if(animalName == "serpent"){
            shared_ptr<AbstractFactory> factory = make_shared<SerpentFactory>(); 
            for(int k=0;k<numberOfAnimals;k++){           
                shared_ptr<Animal> animal = factory->create();
                animal->setName("serpentName");
                animal->setType("serpent");
                animal->setAction("hiss");
                animal->setFood("mice");
                animal->printMessage();
            }
        }
        else{
            cout<<"Invalid animal type"<<endl;
        }
        i++;
    }
    return 0;
}