//
// You should modify this file.
//
#include <common/Root.h>
#include <CardinalityEstimation.h>

void CEEngine::insertTuple(const std::vector<int>& tuple)
{
    // Implement your insert tuple logic here.
}

void CEEngine::deleteTuple(const std::vector<int>& tuple, int tupleId)
{
    // Implement your delete tuple logic here.
}

int CEEngine::query(const std::vector<CompareExpression>& quals)
{
    // Implement your query logic here.
    return 0;
}

void CEEngine::prepare()
{
    // Implement your prepare logic here.
}

CEEngine::CEEngine(int num, DataExecuter *dataExecuter)
{
    // Implement your constructor here.
    this->dataExecuter = dataExecuter;
}
