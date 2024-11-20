#ifndef CARDINALITYESTIMATION_DATAEXECUTER
#define CARDINALITYESTIMATION_DATAEXECUTER
//
// Don't modify this file, the evaluation program is compiled
// based on this header file.
//

#include <common/Root.h>

class DataExecuter {
public:
    DataExecuter(){};
    /**
     * This API is used to obtain tuples in a specified range. The read tuples are appended to the vec. Players can use
     * this interface to obtain the real data distributed in the disk. It takes about 1s to read 10 million pieces of
     * data.
     * @param tupleId Start position.
     * @param offset Number of tuples to be read.
     * @param vec Stores read tuples.
     */
    virtual void readTuples(int tupleId, int offset, std::vector<std::vector<int>> &vec) = 0;
};
#endif