

#include "TicketPostDetails_inner.h"

using namespace Tiny;

TicketPostDetails_inner::TicketPostDetails_inner()
{
	post_id = int(0);
	date = std::string();
	contents = std::string();
	creator = std::string();
	creator_email = std::string();
	creator_name = std::string();
	hasattachments = int(0);
	attachment_download = std::string();
}

TicketPostDetails_inner::TicketPostDetails_inner(std::string jsonString)
{
	this->fromJson(jsonString);
}

TicketPostDetails_inner::~TicketPostDetails_inner()
{

}

void
TicketPostDetails_inner::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *post_idKey = "post_id";

    if(object.has_key(post_idKey))
    {
        bourne::json value = object[post_idKey];



        jsonToValue(&post_id, value, "int");


    }

    const char *dateKey = "date";

    if(object.has_key(dateKey))
    {
        bourne::json value = object[dateKey];



        jsonToValue(&date, value, "std::string");


    }

    const char *contentsKey = "contents";

    if(object.has_key(contentsKey))
    {
        bourne::json value = object[contentsKey];



        jsonToValue(&contents, value, "std::string");


    }

    const char *creatorKey = "creator";

    if(object.has_key(creatorKey))
    {
        bourne::json value = object[creatorKey];



        jsonToValue(&creator, value, "std::string");


    }

    const char *creator_emailKey = "creator_email";

    if(object.has_key(creator_emailKey))
    {
        bourne::json value = object[creator_emailKey];



        jsonToValue(&creator_email, value, "std::string");


    }

    const char *creator_nameKey = "creator_name";

    if(object.has_key(creator_nameKey))
    {
        bourne::json value = object[creator_nameKey];



        jsonToValue(&creator_name, value, "std::string");


    }

    const char *hasattachmentsKey = "hasattachments";

    if(object.has_key(hasattachmentsKey))
    {
        bourne::json value = object[hasattachmentsKey];



        jsonToValue(&hasattachments, value, "int");


    }

    const char *attachment_downloadKey = "attachment_download";

    if(object.has_key(attachment_downloadKey))
    {
        bourne::json value = object[attachment_downloadKey];



        jsonToValue(&attachment_download, value, "std::string");


    }


}

bourne::json
TicketPostDetails_inner::toJson()
{
    bourne::json object = bourne::json::object();





    object["post_id"] = getPostId();






    object["date"] = getDate();






    object["contents"] = getContents();






    object["creator"] = getCreator();






    object["creator_email"] = getCreatorEmail();






    object["creator_name"] = getCreatorName();






    object["hasattachments"] = getHasattachments();






    object["attachment_download"] = getAttachmentDownload();



    return object;

}

int
TicketPostDetails_inner::getPostId()
{
	return post_id;
}

void
TicketPostDetails_inner::setPostId(int post_id)
{
	this->post_id = post_id;
}

std::string
TicketPostDetails_inner::getDate()
{
	return date;
}

void
TicketPostDetails_inner::setDate(std::string date)
{
	this->date = date;
}

std::string
TicketPostDetails_inner::getContents()
{
	return contents;
}

void
TicketPostDetails_inner::setContents(std::string contents)
{
	this->contents = contents;
}

std::string
TicketPostDetails_inner::getCreator()
{
	return creator;
}

void
TicketPostDetails_inner::setCreator(std::string creator)
{
	this->creator = creator;
}

std::string
TicketPostDetails_inner::getCreatorEmail()
{
	return creator_email;
}

void
TicketPostDetails_inner::setCreatorEmail(std::string creator_email)
{
	this->creator_email = creator_email;
}

std::string
TicketPostDetails_inner::getCreatorName()
{
	return creator_name;
}

void
TicketPostDetails_inner::setCreatorName(std::string creator_name)
{
	this->creator_name = creator_name;
}

int
TicketPostDetails_inner::getHasattachments()
{
	return hasattachments;
}

void
TicketPostDetails_inner::setHasattachments(int hasattachments)
{
	this->hasattachments = hasattachments;
}

std::string
TicketPostDetails_inner::getAttachmentDownload()
{
	return attachment_download;
}

void
TicketPostDetails_inner::setAttachmentDownload(std::string attachment_download)
{
	this->attachment_download = attachment_download;
}



