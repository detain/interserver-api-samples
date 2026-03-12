

#include "QueueResponse.h"

using namespace Tiny;

QueueResponse::QueueResponse()
{
	text = std::string();
	queueId = int(0);
}

QueueResponse::QueueResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

QueueResponse::~QueueResponse()
{

}

void
QueueResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *textKey = "text";

    if(object.has_key(textKey))
    {
        bourne::json value = object[textKey];



        jsonToValue(&text, value, "std::string");


    }

    const char *queueIdKey = "queueId";

    if(object.has_key(queueIdKey))
    {
        bourne::json value = object[queueIdKey];



        jsonToValue(&queueId, value, "int");


    }


}

bourne::json
QueueResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["text"] = getText();






    object["queueId"] = getQueueId();



    return object;

}

std::string
QueueResponse::getText()
{
	return text;
}

void
QueueResponse::setText(std::string text)
{
	this->text = text;
}

int
QueueResponse::getQueueId()
{
	return queueId;
}

void
QueueResponse::setQueueId(int queueId)
{
	this->queueId = queueId;
}



