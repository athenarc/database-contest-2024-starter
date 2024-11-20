//
// Don't modify this file, the evaluation program is compiled
// based on this header file.
//

#ifndef CARDINALITYESTIMATION_EXPR
#define CARDINALITYESTIMATION_EXPR

#include <common/Root.h>
/**
 * An enum stands for the column filter operator.
 */
enum CompareOp { EQUAL = 0, GREATER = 1 };

/**
 * A struct for the expression of a column compare operation.
 * For example, for the structure {columnIdx: 1, compareOp: 0, value: 12321}, the expression is that the first column is
 * equal to 12321.
 */
typedef struct CompareExpression {
    int columnIdx;
    CompareOp compareOp;
    int value;
} CompareExpression;
#endif