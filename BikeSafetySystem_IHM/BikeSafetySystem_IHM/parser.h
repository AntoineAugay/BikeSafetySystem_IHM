#ifndef PARSER_H
#define PARSER_H

#include <QtGui>
#include <string>
#include <iostream>
#include "datarecord.h"



class Parser
{
public:
    Parser();

    static void extractData(DataRecord& data, std::string frame);
};

#endif // PARSER_H
