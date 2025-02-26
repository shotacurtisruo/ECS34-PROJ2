// constructor for DSV reader, src specifies the date source and delimitmer 
// CDSVReader(std::shared_ptr<CDataSource> src, char delimiter);


//destructor for DSV reader
//~ CDSVReader();

//this returns true if all rows have been read from dsv
//bool End() const

#include "DSVReader.h"

struct CDSVReader::SImplementation{
    std::shared_ptr<CDataSource> DSource;
    char Delimiter;
   //continue this later
}