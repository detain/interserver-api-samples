

#include "DomainDnssecRequest.h"

using namespace Tiny;

DomainDnssecRequest::DomainDnssecRequest()
{
	algorithm = std::list<int>();
	digest_type = std::list<int>();
	digest = std::list<std::string>();
	key_tag = std::list<int>();
}

DomainDnssecRequest::DomainDnssecRequest(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainDnssecRequest::~DomainDnssecRequest()
{

}

void
DomainDnssecRequest::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *algorithmKey = "algorithm";

    if(object.has_key(algorithmKey))
    {
        bourne::json value = object[algorithmKey];


        std::list<int> algorithm_list;
        int element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "int");


            algorithm_list.push_back(element);
        }
        algorithm = algorithm_list;


    }

    const char *digest_typeKey = "digest_type";

    if(object.has_key(digest_typeKey))
    {
        bourne::json value = object[digest_typeKey];


        std::list<int> digest_type_list;
        int element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "int");


            digest_type_list.push_back(element);
        }
        digest_type = digest_type_list;


    }

    const char *digestKey = "digest";

    if(object.has_key(digestKey))
    {
        bourne::json value = object[digestKey];


        std::list<std::string> digest_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            digest_list.push_back(element);
        }
        digest = digest_list;


    }

    const char *key_tagKey = "key_tag";

    if(object.has_key(key_tagKey))
    {
        bourne::json value = object[key_tagKey];


        std::list<int> key_tag_list;
        int element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "int");


            key_tag_list.push_back(element);
        }
        key_tag = key_tag_list;


    }


}

bourne::json
DomainDnssecRequest::toJson()
{
    bourne::json object = bourne::json::object();




    std::list<int> algorithm_list = getAlgorithm();
    bourne::json algorithm_arr = bourne::json::array();

    for(auto& var : algorithm_list)
    {
        algorithm_arr.append(var);
    }
    object["algorithm"] = algorithm_arr;








    std::list<int> digest_type_list = getDigestType();
    bourne::json digest_type_arr = bourne::json::array();

    for(auto& var : digest_type_list)
    {
        digest_type_arr.append(var);
    }
    object["digest_type"] = digest_type_arr;








    std::list<std::string> digest_list = getDigest();
    bourne::json digest_arr = bourne::json::array();

    for(auto& var : digest_list)
    {
        digest_arr.append(var);
    }
    object["digest"] = digest_arr;








    std::list<int> key_tag_list = getKeyTag();
    bourne::json key_tag_arr = bourne::json::array();

    for(auto& var : key_tag_list)
    {
        key_tag_arr.append(var);
    }
    object["key_tag"] = key_tag_arr;






    return object;

}

std::list<int>
DomainDnssecRequest::getAlgorithm()
{
	return algorithm;
}

void
DomainDnssecRequest::setAlgorithm(std::list<int> algorithm)
{
	this->algorithm = algorithm;
}

std::list<int>
DomainDnssecRequest::getDigestType()
{
	return digest_type;
}

void
DomainDnssecRequest::setDigestType(std::list<int> digest_type)
{
	this->digest_type = digest_type;
}

std::list<std::string>
DomainDnssecRequest::getDigest()
{
	return digest;
}

void
DomainDnssecRequest::setDigest(std::list<std::string> digest)
{
	this->digest = digest;
}

std::list<int>
DomainDnssecRequest::getKeyTag()
{
	return key_tag;
}

void
DomainDnssecRequest::setKeyTag(std::list<int> key_tag)
{
	this->key_tag = key_tag;
}



