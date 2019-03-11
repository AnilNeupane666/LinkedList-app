#include "Bull.h"

Bull::Bull(int weight, int liftingCapacity, std::string name) {
    this->weight = weight;
    this->liftingCapacity = liftingCapacity;
    this->name = name;
}

std::string Bull::to_string(){
    return "Bull " + name + " | weight: " + std::to_string(weight) + " | liftingCapacity: " + std::to_string(liftingCapacity);
}