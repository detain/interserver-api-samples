

#include "MailAttachment.h"

using namespace Tiny;

MailAttachment::MailAttachment()
{
	filename = std::string();
	data = std::string();
}

MailAttachment::MailAttachment(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailAttachment::~MailAttachment()
{

}

void
MailAttachment::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *filenameKey = "filename";

    if(object.has_key(filenameKey))
    {
        bourne::json value = object[filenameKey];



        jsonToValue(&filename, value, "std::string");


    }

    const char *dataKey = "data";

    if(object.has_key(dataKey))
    {
        bourne::json value = object[dataKey];



        jsonToValue(&data, value, "std::string");


    }


}

bourne::json
MailAttachment::toJson()
{
    bourne::json object = bourne::json::object();





    object["filename"] = getFilename();






    object["data"] = getData();



    return object;

}

std::string
MailAttachment::getFilename()
{
	return filename;
}

void
MailAttachment::setFilename(std::string filename)
{
	this->filename = filename;
}

std::string
MailAttachment::getData()
{
	return data;
}

void
MailAttachment::setData(std::string data)
{
	this->data = data;
}



