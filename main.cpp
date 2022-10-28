#include <iostream>
#include <memory>
#include <vector>
#include "AbstractFactory.cpp"

using namespace std;

// Create Dictionary of Game Of Thrones Character names
string getRandomNames(){
    string arr[] = {"Jacky","Tom","Andrew","Mozzie", "Tywin", "Tyrion", "Jamie", "Cersei", "Arya", "Sansa",
                    "John", "Khal Drogo", "Margaery", "Robb", "Ygritte", "Oberyn", "Ros", "Talisa" };

    return arr[ rand() % 16];
}


int main(int argc, char** argv) {
    // Abstract Factory, Clone , Singleton
    // Inheritance , Abstract Classes

    string input;
    int i=0;
    while(std::getline(std::cin, input)){
        cout << input << endl;
        string animalName = input.substr(0,input.find(' '));
        // transform to lower case
        transform(animalName.begin(), animalName.end(), animalName.begin() , ::tolower);
        // strip space and get number of animals
        int numberOfAnimals = stoi(input.substr(input.find(' ')+1,input.length()));
        
        if(animalName == "tiger"){
            shared_ptr<AbstractFactory> factory = make_shared<TigerFactory>();
            for(int k=0;k<numberOfAnimals;k++){
                shared_ptr<Animal> animal = factory->create();
                animal->setName(getRandomNames());
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
                animal->setName(getRandomNames());
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
                animal->setName(getRandomNames());
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
                animal->setName(getRandomNames());
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
                animal->setName(getRandomNames());
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

