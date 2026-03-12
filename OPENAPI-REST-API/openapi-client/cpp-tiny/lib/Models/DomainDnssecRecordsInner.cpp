

#include "DomainDnssecRecords_inner.h"

using namespace Tiny;

DomainDnssecRecords_inner::DomainDnssecRecords_inner()
{
	algorithm = std::string();
	digest_type = std::string();
	digest = std::string();
	key_tag = std::string();
}

DomainDnssecRecords_inner::DomainDnssecRecords_inner(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainDnssecRecords_inner::~DomainDnssecRecords_inner()
{

}

void
DomainDnssecRecords_inner::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *algorithmKey = "algorithm";

    if(object.has_key(algorithmKey))
    {
        bourne::json value = object[algorithmKey];



        jsonToValue(&algorithm, value, "std::string");


    }

    const char *digest_typeKey = "digest_type";

    if(object.has_key(digest_typeKey))
    {
        bourne::json value = object[digest_typeKey];



        jsonToValue(&digest_type, value, "std::string");


    }

    const char *digestKey = "digest";

    if(object.has_key(digestKey))
    {
        bourne::json value = object[digestKey];



        jsonToValue(&digest, value, "std::string");


    }

    const char *key_tagKey = "key_tag";

    if(object.has_key(key_tagKey))
    {
        bourne::json value = object[key_tagKey];



        jsonToValue(&key_tag, value, "std::string");


    }


}

bourne::json
DomainDnssecRecords_inner::toJson()
{
    bourne::json object = bourne::json::object();





    object["algorithm"] = getAlgorithm();






    object["digest_type"] = getDigestType();






    object["digest"] = getDigest();






    object["key_tag"] = getKeyTag();



    return object;

}

std::string
DomainDnssecRecords_inner::getAlgorithm()
{
	return algorithm;
}

void
DomainDnssecRecords_inner::setAlgorithm(std::string algorithm)
{
	this->algorithm = algorithm;
}

std::string
DomainDnssecRecords_inner::getDigestType()
{
	return digest_type;
}

void
DomainDnssecRecords_inner::setDigestType(std::string digest_type)
{
	this->digest_type = digest_type;
}

std::string
DomainDnssecRecords_inner::getDigest()
{
	return digest;
}

void
DomainDnssecRecords_inner::setDigest(std::string digest)
{
	this->digest = digest;
}

std::string
DomainDnssecRecords_inner::getKeyTag()
{
	return key_tag;
}

void
DomainDnssecRecords_inner::setKeyTag(std::string key_tag)
{
	this->key_tag = key_tag;
}



