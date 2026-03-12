

#include "UrlRequest.h"

using namespace Tiny;

UrlRequest::UrlRequest()
{
	url = std::string();
}

UrlRequest::UrlRequest(std::string jsonString)
{
	this->fromJson(jsonString);
}

UrlRequest::~UrlRequest()
{

}

void
UrlRequest::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *urlKey = "url";

    if(object.has_key(urlKey))
    {
        bourne::json value = object[urlKey];



        jsonToValue(&url, value, "std::string");


    }


}

bourne::json
UrlRequest::toJson()
{
    bourne::json object = bourne::json::object();





    object["url"] = getUrl();



    return object;

}

std::string
UrlRequest::getUrl()
{
	return url;
}

void
UrlRequest::setUrl(std::string url)
{
	this->url = url;
}



