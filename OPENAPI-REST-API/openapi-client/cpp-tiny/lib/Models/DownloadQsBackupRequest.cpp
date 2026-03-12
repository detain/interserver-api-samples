

#include "DownloadQsBackup_request.h"

using namespace Tiny;

DownloadQsBackup_request::DownloadQsBackup_request()
{
	file = std::string();
}

DownloadQsBackup_request::DownloadQsBackup_request(std::string jsonString)
{
	this->fromJson(jsonString);
}

DownloadQsBackup_request::~DownloadQsBackup_request()
{

}

void
DownloadQsBackup_request::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *fileKey = "file";

    if(object.has_key(fileKey))
    {
        bourne::json value = object[fileKey];



        jsonToValue(&file, value, "std::string");


    }


}

bourne::json
DownloadQsBackup_request::toJson()
{
    bourne::json object = bourne::json::object();





    object["file"] = getFile();



    return object;

}

std::string
DownloadQsBackup_request::getFile()
{
	return file;
}

void
DownloadQsBackup_request::setFile(std::string file)
{
	this->file = file;
}



