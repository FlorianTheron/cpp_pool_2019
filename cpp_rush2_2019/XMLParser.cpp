/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** XMLParser
*/

#include "XMLParser.hpp"
#include <string>
#include <regex>

XMLParser::XMLParser()
{
}

XMLParser::~XMLParser()
{
}

int XMLParser::GetFileIndex()
{
    int index = 1;
    std::ifstream reader("gift" + std::to_string(index) + ".xml");

    while (reader.is_open())
    {
        index += 1;
        reader.close();
        reader.open("gift" + std::to_string(index) + ".xml");
    }
    return (index);
}

void XMLParser::WriteFile(Object *obj)
{
    std::ofstream writer;
    int fileIndex = GetFileIndex();
    Object *box = ((GiftPaper *)obj)->getObject();
    Object *toy = ((Box *)box)->getObject();

    writer.open("gift" + std::to_string(fileIndex) + ".xml", std::fstream::out);
    writer << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" << std::endl;
    writer << "<GiftPaper>" << std::endl;
    writer << "\t<Box>" << std::endl;
    writer << "\t\t<Toy name=\"" << ((Toy *)toy)->getTitle() << "\" type=\"" << ((Toy *)toy)->getType() << "\"></Toy>" << std::endl;
    writer << "\t</Box>" << std::endl;
    writer << "</GiftPaper>";
    writer.close();
}

XMLParser::GiftData XMLParser::ReadFile(std::string file)
{
    XMLParser::GiftData toy;
    std::ifstream reader(file);
    std::string line; 

    if (reader.is_open() == true)
    {
        while (std::getline(reader, line))
        {
            size_t pos_start = line.find("<Toy");
            size_t pos_end = line.find("</Toy>");

            if (pos_start != std::string::npos && pos_end != std::string::npos)
            {
                break;
            }
        }
        reader.close();
    }
    
    size_t n = 0;
    while ((n = line.find("\t")) != std::string::npos)
    {
        line.replace(n, 1, "");
    }
    
    std::regex find_name("name=\"(.*?)\"");
    std::smatch match_name;
    std::string name_value;

    if (std::regex_search(line, match_name, find_name) && match_name.size() > 1)
    {
        name_value = match_name.str(1);
    }
    else
    {
        std::cout << "Invalid XML format." << std::endl;
    }

    std::regex find_type("type=\"(.*?)\"");
    std::smatch match_type;
    std::string type_value;

    if (std::regex_search(line, match_type, find_type) && match_type.size() > 1)
    {
        type_value = match_type.str(1);
    }
    else
    {
        std::cout << "Invalid XML format." << std::endl;
    }

    toy._name = name_value;
    toy._type = type_value;

    return toy;
}