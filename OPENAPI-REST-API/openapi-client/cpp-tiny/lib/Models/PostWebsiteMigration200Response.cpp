

#include "PostWebsiteMigration_200_response.h"

using namespace Tiny;

PostWebsiteMigration_200_response::PostWebsiteMigration_200_response()
{
	text = std::string();
	ticket = int(0);
}

PostWebsiteMigration_200_response::PostWebsiteMigration_200_response(std::string jsonString)
{
	this->fromJson(jsonString);
}

PostWebsiteMigration_200_response::~PostWebsiteMigration_200_response()
{

}

void
PostWebsiteMigration_200_response::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *textKey = "text";

    if(object.has_key(textKey))
    {
        bourne::json value = object[textKey];



        jsonToValue(&text, value, "std::string");


    }

    const char *ticketKey = "ticket";

    if(object.has_key(ticketKey))
    {
        bourne::json value = object[ticketKey];



        jsonToValue(&ticket, value, "int");


    }


}

bourne::json
PostWebsiteMigration_200_response::toJson()
{
    bourne::json object = bourne::json::object();





    object["text"] = getText();






    object["ticket"] = getTicket();



    return object;

}

std::string
PostWebsiteMigration_200_response::getText()
{
	return text;
}

void
PostWebsiteMigration_200_response::setText(std::string text)
{
	this->text = text;
}

int
PostWebsiteMigration_200_response::getTicket()
{
	return ticket;
}

void
PostWebsiteMigration_200_response::setTicket(int ticket)
{
	this->ticket = ticket;
}



