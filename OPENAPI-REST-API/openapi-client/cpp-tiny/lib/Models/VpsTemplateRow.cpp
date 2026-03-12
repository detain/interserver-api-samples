

#include "VpsTemplateRow.h"

using namespace Tiny;

VpsTemplateRow::VpsTemplateRow()
{
	template_id = std::string();
	template_type = std::string();
	template_os = std::string();
	template_version = std::string();
	template_bits = std::string();
	template_file = std::string();
	template_available = std::string();
	template_name = std::string();
	template_dir = std::string();
}

VpsTemplateRow::VpsTemplateRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsTemplateRow::~VpsTemplateRow()
{

}

void
VpsTemplateRow::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *template_idKey = "template_id";

    if(object.has_key(template_idKey))
    {
        bourne::json value = object[template_idKey];



        jsonToValue(&template_id, value, "std::string");


    }

    const char *template_typeKey = "template_type";

    if(object.has_key(template_typeKey))
    {
        bourne::json value = object[template_typeKey];



        jsonToValue(&template_type, value, "std::string");


    }

    const char *template_osKey = "template_os";

    if(object.has_key(template_osKey))
    {
        bourne::json value = object[template_osKey];



        jsonToValue(&template_os, value, "std::string");


    }

    const char *template_versionKey = "template_version";

    if(object.has_key(template_versionKey))
    {
        bourne::json value = object[template_versionKey];



        jsonToValue(&template_version, value, "std::string");


    }

    const char *template_bitsKey = "template_bits";

    if(object.has_key(template_bitsKey))
    {
        bourne::json value = object[template_bitsKey];



        jsonToValue(&template_bits, value, "std::string");


    }

    const char *template_fileKey = "template_file";

    if(object.has_key(template_fileKey))
    {
        bourne::json value = object[template_fileKey];



        jsonToValue(&template_file, value, "std::string");


    }

    const char *template_availableKey = "template_available";

    if(object.has_key(template_availableKey))
    {
        bourne::json value = object[template_availableKey];



        jsonToValue(&template_available, value, "std::string");


    }

    const char *template_nameKey = "template_name";

    if(object.has_key(template_nameKey))
    {
        bourne::json value = object[template_nameKey];



        jsonToValue(&template_name, value, "std::string");


    }

    const char *template_dirKey = "template_dir";

    if(object.has_key(template_dirKey))
    {
        bourne::json value = object[template_dirKey];



        jsonToValue(&template_dir, value, "std::string");


    }


}

bourne::json
VpsTemplateRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["template_id"] = getTemplateId();






    object["template_type"] = getTemplateType();






    object["template_os"] = getTemplateOs();






    object["template_version"] = getTemplateVersion();






    object["template_bits"] = getTemplateBits();






    object["template_file"] = getTemplateFile();






    object["template_available"] = getTemplateAvailable();






    object["template_name"] = getTemplateName();






    object["template_dir"] = getTemplateDir();



    return object;

}

std::string
VpsTemplateRow::getTemplateId()
{
	return template_id;
}

void
VpsTemplateRow::setTemplateId(std::string template_id)
{
	this->template_id = template_id;
}

std::string
VpsTemplateRow::getTemplateType()
{
	return template_type;
}

void
VpsTemplateRow::setTemplateType(std::string template_type)
{
	this->template_type = template_type;
}

std::string
VpsTemplateRow::getTemplateOs()
{
	return template_os;
}

void
VpsTemplateRow::setTemplateOs(std::string template_os)
{
	this->template_os = template_os;
}

std::string
VpsTemplateRow::getTemplateVersion()
{
	return template_version;
}

void
VpsTemplateRow::setTemplateVersion(std::string template_version)
{
	this->template_version = template_version;
}

std::string
VpsTemplateRow::getTemplateBits()
{
	return template_bits;
}

void
VpsTemplateRow::setTemplateBits(std::string template_bits)
{
	this->template_bits = template_bits;
}

std::string
VpsTemplateRow::getTemplateFile()
{
	return template_file;
}

void
VpsTemplateRow::setTemplateFile(std::string template_file)
{
	this->template_file = template_file;
}

std::string
VpsTemplateRow::getTemplateAvailable()
{
	return template_available;
}

void
VpsTemplateRow::setTemplateAvailable(std::string template_available)
{
	this->template_available = template_available;
}

std::string
VpsTemplateRow::getTemplateName()
{
	return template_name;
}

void
VpsTemplateRow::setTemplateName(std::string template_name)
{
	this->template_name = template_name;
}

std::string
VpsTemplateRow::getTemplateDir()
{
	return template_dir;
}

void
VpsTemplateRow::setTemplateDir(std::string template_dir)
{
	this->template_dir = template_dir;
}



