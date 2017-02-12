//
// Created by Pamela Tabak on 08/02/17.
//

#ifndef CREATEATTACKERS_NODE_HPP
#define CREATEATTACKERS_NODE_HPP

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Node
{
public:
    // if node is an attacker, it`s external degree is the sum of all it`s connections to nodes that are not attackers
    // else, it`s 0
    int externalDegree;

//    // Node`s degree
//    int degree;

    // Node`s neighbors
    unordered_set<string> neighbors;

    void setExternalDegree (int externalDegree)
    {
        this->externalDegree = externalDegree;
    }

    int getExternalDegree ()
    {
       return this->externalDegree;
    }

    void addNeighbor (string neighbor)
    {
        this->neighbors.insert(neighbor);
    }

    unordered_set<string> getNeighbors ()
    {
        return this->neighbors;
    }

    Node ()
    {
        this->externalDegree = 0;
    }

    ~Node()
    {

    }
};

#endif //CREATEATTACKERS_NODE_HPP