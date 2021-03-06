//
// Created by Pamela Tabak on 08/02/17.
//

#ifndef CREATEATTACKERS_NODE_HPP
#define CREATEATTACKERS_NODE_HPP

#include <iostream>
#include <vector>
#include <unordered_set>
#include <list>

using namespace std;

class Node
{
public:
    // if node is an attacker: its external degree is the number of connections to nodes that are not attackers
    // else, it`s 0
    int externalDegree;
    int maximumExternalDegree;
    int degree;

    // Node`s neighbors
    list<string> neighbors;

    void setExternalDegree (int externalDegree)
    {
        this->externalDegree = externalDegree;
    }

    int getExternalDegree ()
    {
        return this->externalDegree;
    }

    void setDegree (int degree)
    {
        this->degree = degree;
    }

    int getDegree()
    {
        return this->degree;
    }

    void setMaximumExternalDegree (int maximumExternalDegree)
    {
        this->maximumExternalDegree = maximumExternalDegree;
    }

    int getMaximumExternalDegree ()
    {
        return this->maximumExternalDegree;
    }

    void addNeighbor (string neighbor)
    {
        this->neighbors.push_back(neighbor);
    }

    list<string> getNeighbors ()
    {
        return this->neighbors;
    }

    Node ()
    {
        this->externalDegree        = 0;
        this->degree                = 0;
        this->maximumExternalDegree = 0;
    }

    ~Node()
    {

    }
};

#endif //CREATEATTACKERS_NODE_HPP