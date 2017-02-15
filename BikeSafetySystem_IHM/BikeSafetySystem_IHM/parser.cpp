#include "parser.h"

Parser::Parser()
{

}

void Parser::extractData(DataRecord& data, std::string frame){
    unsigned int cursor = 0;
    std::string tmp;
    char header = 0;
    char lenght = 0;

    while(cursor < frame.size()){
        lenght = frame.at(cursor++);
        std::cout << "lenght : " << (int)lenght << std::endl;
        tmp = frame.substr(cursor, cursor+lenght-1);
        std::cout << "tmp : " << tmp << std::endl;
        cursor +=lenght;
        header = tmp.at(0);
        std::cout << "header : " << (int)header << std::endl;
        switch(header){
        case 0x01 : 
            data.hour = (tmp.substr(1, lenght-1)).c_str();
            data.hourUpdate = true;
            break;
        case 0x02 :
            data.minut = (tmp.substr(1, lenght-1)).c_str();
            data.minutUpdate = true;
            break;
        case 0x03 :
            data.speed = (tmp.substr(1, lenght-1)).c_str();
            data.speedUpdate = true;
            break;
        }
    }
}
