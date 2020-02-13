/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** MyUnitTests
*/

#include "Object.hpp"
#include "Toy.hpp"
#include "Teddy.hpp"
#include "LittlePony.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"
#include "Wrap.hpp"
#include "XMLParser.hpp"
#include "PapaXmasElf.hpp"
#include "ConveyorToy.hpp"
#include "PapaXmasConveyorBelt.hpp"
#include "PapaXmasTable.hpp"

/**
 * MyUnitTests
 * 
 * Vérifie si les objets sont créés avec le nom donné en paramètre.
 * @return Un pointeur sur un tableau d'objets
 */

Object **MyUnitTests()
{
    Object **objects = new Object*[2];

    objects[0] = new LittlePony("happy pony");
    objects[1] = new Teddy("cuddles");

    if (((Toy *)objects[0])->getTitle().compare("happy pony") == 0)
    {
        std::cout << "\033[0;32m[Test passed] LittlePony name equal: "
                  << ((Toy *)objects[0])->getTitle() << "\033[0m"
                  << std::endl;
    }
    else
    {
        std::cout << "\033[0;31m[Test failed] LittlePony name equal: "
                  << ((Toy *)objects[0])->getTitle() << "\033[0m"
                  << std::endl;
    }

    if (((Toy *)objects[1])->getTitle().compare("cuddles") == 0)
    {
        std::cout << "\033[0;32m[Test passed] TeddyBear name equal: "
                  << ((Toy *)objects[1])->getTitle() << "\033[0m"
                  << std::endl;
    }
    else
    {
        std::cout << "\033[0;31m[Test failed] TeddyBear name equal: "
                  << ((Toy *)objects[1])->getTitle() << "\033[0m"
                  << std::endl;
    }
    return objects;
}

/**
 * @return Un pointeur  sur une table initialisée avec des objets
 */
ITable *TestTableSize()
{
    PapaXmasElf *elf = new PapaXmasElf();
    ITable *table = new PapaXmasTable();

    table = table->createTable();

    if (table->getNumberObject() == 10)
    {
        std::cout << "\033[0;32m[Test passed] Table contains: "
                  << table->getNumberObject() << " items" << "\033[0m"
                  << std::endl;
    }
    else
    {
        std::cout << "\033[0;31m[Test failed] Table contains: "
                  << table->getNumberObject() << " items" << " | Expected: 10" << "\033[0m"
                  << std::endl;
    }
}

/**
 * MyUnitTests
 * 
 * @param objects Un pointeur sur un tableau d'objets, contenant un jouet,
 * une boîte et un papier cadeau.
 * @return Un pointeur sur le jouet emballé dans un papier cadeau
 */
Object *MyUnitTests(Object **objects)
{
    Toy *toy;
    Box *box;
    GiftPaper *paper;

    for (int i = 0; objects[i] != NULL; i += 1)
    {
        if (objects[i]->getType().compare("Teddy") == 0 ||
            objects[i]->getType().compare("LittlePony") == 0)
        {
            toy = (Toy *)objects[i];
        }
        else if (objects[i]->getType().compare("Box") == 0)
        {
            box = (Box *)objects[i];
        }
        else if (objects[i]->getType().compare("GiftPaper") == 0)
        {
            paper = (GiftPaper *)objects[i];
        }
    }

    box->wrapMeThat(toy);
    if (box->getContent() == Wrap::FULL)
    {
        std::cout << "\033[0;32m[Test passed] Box is full.\033[0m" << std::endl;
    }
    else
    {
        std::cout << "\033[0;31m[Test failed] Box is empty. | Expected: FULL\033[0m" << std::endl;
    }

    box->closeMe();
    if (box->getState() == Box::CLOSE)
    {
        std::cout << "\033[0;32m[Test passed] Box is closed.\033[0m" << std::endl;
    }
    else
    {
        std::cout << "\033[0;31m[Test failed] Box is open. | Expected: CLOSE\033[0m" << std::endl;
    }

    paper->wrapMeThat(box);
    if (paper->getContent() == Wrap::FULL && paper->getObject() != nullptr)
    {
        std::cout << "\033[0;32m[Test passed] GiftPaper is full.\033[0m" << std::endl;
    }
    else
    {
        std::cout << "\033[0;31m[Test failed] GiftPaper is empty. | Expected: FULL\033[0m" << std::endl;
    }

    return (paper);
}

PapaXmasElf *TestXmasElf()
{
    PapaXmasElf *elf = new PapaXmasElf();
    ITable *table = new PapaXmasTable();
    LittlePony *pony = new LittlePony("Karim");

    size_t tableSize = elf->getTable()->getNumberObject();
    elf->take(*pony);
    if (elf->getTable()->getNumberObject() == (tableSize - 1))
    {
        std::cout << "\033[0;32m[Test passed] There is "
                  << elf->getTable()->getObjects().size() << " objects on the table after take.\033[0m"
                  << std::endl;
    }
    else
    {
        std::cout << "\033[0;31m[Test failed] There is "
            <<  elf->getTable()->getObjects().size() << " objects on the table after take. | Expected : 9\033[0m"
            << std::endl;
    }

    std::vector<std::string> types = elf->look(table);
    if (types.size() == 10)
    {
        std::cout << "\033[0;32m[Test passed] There is "
                  << types.size() << " objects on the table on init.\033[0m"
                  << std::endl;
    }
    else
    {
        std::cout << "\033[0;31m[Test failed] There is "
            << types.size() << " objects on the table on init. | Expected : 10\033[0m"
            << std::endl;
    }

    elf->putObject(*pony);
    if (elf->getTable()->getObjects().size() == 10)
    {
        std::cout << "\033[0;32m[Test passed] There is "
                  << types.size() << " objects on the table after put.\033[0m"
                  << std::endl;
    }
    else
    {
        std::cout << "\033[0;31m[Test failed] There is "
            << types.size() << " objects on the table after put. | Expected : 10\033[0m"
            << std::endl;
    }

    return (elf);
}

int main()
{
    Object **objects = MyUnitTests();
    ITable *table = TestTableSize();

    Object **objects2 = new Object*[4];
    objects2[0] = new Teddy("Teddy");
    objects2[1] = new Box();
    objects2[2] = new GiftPaper();
    objects2[3] = NULL;
    Object *gift = MyUnitTests(objects2);

    PapaXmasElf *elf = TestXmasElf();

    XMLParser parser;
    parser.WriteFile(gift);

    return 0;
}