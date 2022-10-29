#include <iostream>
#include <memory>
#include <vector>
#include "AbstractFactory.cpp"

using namespace std;

// Create Dictionary of Game Of Thrones Character names
string getRandomNames(){
    vector<string> arr = {"Jacky","Tom","Andrew","Mozzie", "Tywin", "Tyrion", "Jamie", "Cersei", "Arya", "Sansa",
                    "John", "Khal Drogo", "Margaery", "Robb", "Ygritte", "Oberyn", "Ros", "Talisa" };

    return arr[ rand() % arr.size()];
}


int main(int argc, char** argv) {
    // Abstract Factory, Clone , Singleton
    // Inheritance , Abstract Classes

    string input;
    while(std::getline(std::cin, input)){
        cout << input << endl;
        string animalName = input.substr(0,input.find(' '));
        // strip space and get number of animals
        int numberOfAnimals = stoi(input.substr(input.find(' ')+1,input.length()));
        shared_ptr<AbstractFactory> factory;
        shared_ptr<Animal> animal;
        if(animalName == "tiger"){
            factory = make_shared<TigerFactory>();
            animal = factory->create();
            animal->setName(getRandomNames());
            animal->setType("tiger");
            animal->setAction("roar");
            animal->setFood("meat");
            animal->printMessage();
        }
        else if(animalName == "wolf"){
            factory = make_shared<WolfFactory>(); 
            animal = factory->create();            
            animal->setName(getRandomNames());
            animal->setType("wolf");
            animal->setAction("growl");
            animal->setFood("chicken");
            animal->printMessage();
        }
        else if(animalName == "lemur"){
            factory = make_shared<LemurFactory>();   
            animal = factory->create();
            animal->setName(getRandomNames());
            animal->setType("lemur");
            animal->setAction("squeak");
            animal->setFood("fruit");
            animal->printMessage(); 
        }
        else if(animalName == "kangaroo"){
            factory = make_shared<KangarooFactory>(); 
            animal = factory->create();
            animal->setName(getRandomNames());
            animal->setType("kangaroo");
            animal->setAction("click");
            animal->setFood("carrots");
            animal->printMessage();
            
        }
        else if(animalName == "serpent"){
            factory = make_shared<SerpentFactory>();                     
            animal = factory->create();
            animal->setName(getRandomNames());
            animal->setType("serpent");
            animal->setAction("hiss");
            animal->setFood("mice");
            animal->printMessage();
        }
        else{
            cout<<"Invalid animal type"<<endl;
            break;
        }
        for(int k=0;k<numberOfAnimals-1;k++){        
            Animal* clonedAnimal = animal->clone();
            clonedAnimal->setName(getRandomNames());
            clonedAnimal->printMessage();
        }
    }
    return 0;
}

