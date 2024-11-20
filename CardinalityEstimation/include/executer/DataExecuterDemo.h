#ifndef CARDINALITYESTIMATION_DATAEXECUTERDEMO
#define CARDINALITYESTIMATION_DATAEXECUTERDEMO
//
// Demo data generator for local debugging. You can implement your own data generator for debugging based on this class.
//

#include <common/Root.h>
#include <common/Expression.h>
#include <executer/DataExecuter.h>

/**
 * An enum stands for the action operator.
 */
enum ActionType { NONE = 0, INSERT = 1, DELETE = 2, QUERY = 3 };

/**
 * A class for the action.
 */
typedef struct Action {
    ActionType actionType;
    std::vector<int> actionTuple;
    int tupleId;
    std::vector<CompareExpression> quals;
} Action;

// Demo data generator for local debugging.
class DataExecuterDemo : public DataExecuter {
private:
    int end;
    int count;
    Action curAction;
    std::vector<std::vector<int>> set;
    std::vector<int> generateInsert();
    int generateDelete();

public:
    DataExecuterDemo(int end, int count);
    Action getNextAction();
    void readTuples(int tupleId, int offset, std::vector<std::vector<int>> &vec);
    double answer(int ans);
};

#endif