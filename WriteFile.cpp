#include "WriteFile.h"
#include <sstream>
#include <fstream>
//babe, im gonna leave you
//I said baby, you know, im gonna leave you
//leave you in the summer time
//I can hear it calling me the way it used to do
//I can hear it calling me back HOME!!!

WriteFile::createWriteFile(const char* file_name)
{
   output_file.open(file_name);
   closed = false;
}

WriteFile::~WriteFile()
{
   delete *output_file;
}

void WriteFile::close()
{
   if (!closed)
   {
      output_file.close();
      closed = true;
   }
}

void WriteFile::writeLine(String* line)
{
   if (!closed && line->length() > 0)
   {
      output_file << line->getText() << endl;
   }
}
