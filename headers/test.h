#ifndef TEST_H
#define TEST_H

#include<vector>
#include <cstdlib>
#include <functional>


class VertexSubset;
class Graph;
class Test
{
   public:
   //bool FxnOddEven(long vertexId);
   //bool FxnOddEven_(long v1Id, long v2Id);
    std::vector<long> GenerateRandomIntegers(long minInteger, long maxInteger, long totalNumbers);

    void TestVertexSubset(Graph &g,
                          VertexSubset &vs,
                          long nodesCountInSubset,
                          std::string &logFile);

    void DoTestingOnThisGraph(Graph &currGraph, std::string &logFile);

    // void TestVertexMap(VertexSubset &vs, std::function<bool(long id)>);
    // void TestEdgeMapSparse(Graph &g, 
    //                        VertexSubset &s,
    //                        std::function<bool(long id1, long id2)>,
    //                        std::function<bool(long id1, long id2)>);
    // void TestEdgeMapSparse(Graph &g,
    //                        VertexSubset &s,
    //                        std::function<bool(long id1, long id2)>,
    //                        std::function<bool(long id1, long id2)>);

};

#endif