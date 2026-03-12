

#include "DownloadQsBackup_200_response.h"

using namespace Tiny;

DownloadQsBackup_200_response::DownloadQsBackup_200_response()
{
	text = std::string();
	url = std::string();
}

DownloadQsBackup_200_response::DownloadQsBackup_200_response(std::string jsonString)
{
	this->fromJson(jsonString);
}

DownloadQsBackup_200_response::~DownloadQsBackup_200_response()
{

}

void
DownloadQsBackup_200_response::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *textKey = "text";

    if(object.has_key(textKey))
    {
        bourne::json value = object[textKey];



        jsonToValue(&text, value, "std::string");


    }

    const char *urlKey = "url";

    if(object.has_key(urlKey))
    {
        bourne::json value = object[urlKey];



        jsonToValue(&url, value, "std::string");


    }


}

bourne::json
DownloadQsBackup_200_response::toJson()
{
    bourne::json object = bourne::json::object();





    object["text"] = getText();






    object["url"] = getUrl();



    return object;

}

std::string
DownloadQsBackup_200_response::getText()
{
	return text;
}

void
DownloadQsBackup_200_response::setText(std::string text)
{
	this->text = text;
}

std::string
DownloadQsBackup_200_response::getUrl()
{
	return url;
}

void
DownloadQsBackup_200_response::setUrl(std::string url)
{
	this->url = url;
}



