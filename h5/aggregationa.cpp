#include "aggregationa.h"

using namespace std;

AggregationA::AggregationA(ClassB &value):refB(value)
{
}

string AggregationA::getBinfo()
{
    return refB.getInfo();
}

void AggregationA::setBinfo(std::string value)
{
    refB.setInfo(value);
}
