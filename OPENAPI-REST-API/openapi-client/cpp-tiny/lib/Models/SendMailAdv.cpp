

#include "SendMailAdv.h"

using namespace Tiny;

SendMailAdv::SendMailAdv()
{
	subject = std::string();
	body = std::string();
	from = EmailAddressName();
	to = std::list<EmailAddressName>();
	replyto = std::list<EmailAddressName>();
	cc = std::list<EmailAddressName>();
	bcc = std::list<EmailAddressName>();
	attachments = std::list<MailAttachment>();
	id = long(0);
}

SendMailAdv::SendMailAdv(std::string jsonString)
{
	this->fromJson(jsonString);
}

SendMailAdv::~SendMailAdv()
{

}

void
SendMailAdv::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *subjectKey = "subject";

    if(object.has_key(subjectKey))
    {
        bourne::json value = object[subjectKey];



        jsonToValue(&subject, value, "std::string");


    }

    const char *bodyKey = "body";

    if(object.has_key(bodyKey))
    {
        bourne::json value = object[bodyKey];



        jsonToValue(&body, value, "std::string");


    }

    const char *fromKey = "from";

    if(object.has_key(fromKey))
    {
        bourne::json value = object[fromKey];




        EmailAddressName* obj = &from;
		obj->fromJson(value.dump());

    }

    const char *toKey = "to";

    if(object.has_key(toKey))
    {
        bourne::json value = object[toKey];


        std::list<EmailAddressName> to_list;
        EmailAddressName element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            to_list.push_back(element);
        }
        to = to_list;


    }

    const char *replytoKey = "replyto";

    if(object.has_key(replytoKey))
    {
        bourne::json value = object[replytoKey];


        std::list<EmailAddressName> replyto_list;
        EmailAddressName element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            replyto_list.push_back(element);
        }
        replyto = replyto_list;


    }

    const char *ccKey = "cc";

    if(object.has_key(ccKey))
    {
        bourne::json value = object[ccKey];


        std::list<EmailAddressName> cc_list;
        EmailAddressName element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            cc_list.push_back(element);
        }
        cc = cc_list;


    }

    const char *bccKey = "bcc";

    if(object.has_key(bccKey))
    {
        bourne::json value = object[bccKey];


        std::list<EmailAddressName> bcc_list;
        EmailAddressName element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            bcc_list.push_back(element);
        }
        bcc = bcc_list;


    }

    const char *attachmentsKey = "attachments";

    if(object.has_key(attachmentsKey))
    {
        bourne::json value = object[attachmentsKey];


        std::list<MailAttachment> attachments_list;
        MailAttachment element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            attachments_list.push_back(element);
        }
        attachments = attachments_list;


    }

    const char *idKey = "id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "long");


    }


}

bourne::json
SendMailAdv::toJson()
{
    bourne::json object = bourne::json::object();





    object["subject"] = getSubject();






    object["body"] = getBody();







	object["from"] = getFrom().toJson();




    std::list<EmailAddressName> to_list = getTo();
    bourne::json to_arr = bourne::json::array();

    for(auto& var : to_list)
    {
        EmailAddressName obj = var;
        to_arr.append(obj.toJson());
    }
    object["to"] = to_arr;






    std::list<EmailAddressName> replyto_list = getReplyto();
    bourne::json replyto_arr = bourne::json::array();

    for(auto& var : replyto_list)
    {
        EmailAddressName obj = var;
        replyto_arr.append(obj.toJson());
    }
    object["replyto"] = replyto_arr;






    std::list<EmailAddressName> cc_list = getCc();
    bourne::json cc_arr = bourne::json::array();

    for(auto& var : cc_list)
    {
        EmailAddressName obj = var;
        cc_arr.append(obj.toJson());
    }
    object["cc"] = cc_arr;






    std::list<EmailAddressName> bcc_list = getBcc();
    bourne::json bcc_arr = bourne::json::array();

    for(auto& var : bcc_list)
    {
        EmailAddressName obj = var;
        bcc_arr.append(obj.toJson());
    }
    object["bcc"] = bcc_arr;






    std::list<MailAttachment> attachments_list = getAttachments();
    bourne::json attachments_arr = bourne::json::array();

    for(auto& var : attachments_list)
    {
        MailAttachment obj = var;
        attachments_arr.append(obj.toJson());
    }
    object["attachments"] = attachments_arr;







    object["id"] = getId();



    return object;

}

std::string
SendMailAdv::getSubject()
{
	return subject;
}

void
SendMailAdv::setSubject(std::string subject)
{
	this->subject = subject;
}

std::string
SendMailAdv::getBody()
{
	return body;
}

void
SendMailAdv::setBody(std::string body)
{
	this->body = body;
}

EmailAddressName
SendMailAdv::getFrom()
{
	return from;
}

void
SendMailAdv::setFrom(EmailAddressName from)
{
	this->from = from;
}

std::list<EmailAddressName>
SendMailAdv::getTo()
{
	return to;
}

void
SendMailAdv::setTo(std::list<EmailAddressName> to)
{
	this->to = to;
}

std::list<EmailAddressName>
SendMailAdv::getReplyto()
{
	return replyto;
}

void
SendMailAdv::setReplyto(std::list<EmailAddressName> replyto)
{
	this->replyto = replyto;
}

std::list<EmailAddressName>
SendMailAdv::getCc()
{
	return cc;
}

void
SendMailAdv::setCc(std::list<EmailAddressName> cc)
{
	this->cc = cc;
}

std::list<EmailAddressName>
SendMailAdv::getBcc()
{
	return bcc;
}

void
SendMailAdv::setBcc(std::list<EmailAddressName> bcc)
{
	this->bcc = bcc;
}

std::list<MailAttachment>
SendMailAdv::getAttachments()
{
	return attachments;
}

void
SendMailAdv::setAttachments(std::list<MailAttachment> attachments)
{
	this->attachments = attachments;
}

long
SendMailAdv::getId()
{
	return id;
}

void
SendMailAdv::setId(long id)
{
	this->id = id;
}



