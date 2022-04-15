#ifndef VERTEX_SUBSET_H
#define VERTEX_SUBSET_H

#include<vector>

class VertexSubset
{
    public:
    std::vector<long> getVertexSubset() const; // Done: Not Required!
    std::vector<long>::const_iterator getVertexSubsetBegin() const; //Done: Tested
    std::vector<long>::const_iterator getVertexSubsetEnd() const; //Done: Tested
    void setVertexSubset(std::vector<long> v); //Done: Tested
    void printVertexSubset(); //Done: Tested
    long getVertexSubsetLength() const; //Done
    long getVertexSubsetOutDegree(const Graph &graph) const; // TO DO: is it containing duplicates or the lenght of the set
    void addVertex(long vertex);// Done
    private:
    std::vector<long> p_vertices;
};

#endif
