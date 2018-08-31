#ifndef WITNESS_H
#define WITNESS_H
#include<QString>
class Witness
{
public:
    Witness() {};
    static bool enable_Witness;
    static QString strLocation;
    static QString strEvent;
    static QString strEvt_FunctionFailed;
    static QString strVariable;
    static QString strVar_Input;
    static QString strVar_Output;
};

#endif // WITNESS_H
