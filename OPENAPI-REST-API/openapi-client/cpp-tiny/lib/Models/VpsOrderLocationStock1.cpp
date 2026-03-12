

#include "VpsOrder_locationStock_1.h"

using namespace Tiny;

VpsOrder_locationStock_1::VpsOrder_locationStock_1()
{
	kvm = bool(false);
	kvmstorage = bool(false);
	hyperv = bool(false);
}

VpsOrder_locationStock_1::VpsOrder_locationStock_1(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsOrder_locationStock_1::~VpsOrder_locationStock_1()
{

}

void
VpsOrder_locationStock_1::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *kvmKey = "kvm";

    if(object.has_key(kvmKey))
    {
        bourne::json value = object[kvmKey];



        jsonToValue(&kvm, value, "bool");


    }

    const char *kvmstorageKey = "kvmstorage";

    if(object.has_key(kvmstorageKey))
    {
        bourne::json value = object[kvmstorageKey];



        jsonToValue(&kvmstorage, value, "bool");


    }

    const char *hypervKey = "hyperv";

    if(object.has_key(hypervKey))
    {
        bourne::json value = object[hypervKey];



        jsonToValue(&hyperv, value, "bool");


    }


}

bourne::json
VpsOrder_locationStock_1::toJson()
{
    bourne::json object = bourne::json::object();





    object["kvm"] = isKvm();






    object["kvmstorage"] = isKvmstorage();






    object["hyperv"] = isHyperv();



    return object;

}

bool
VpsOrder_locationStock_1::isKvm()
{
	return kvm;
}

void
VpsOrder_locationStock_1::setKvm(bool kvm)
{
	this->kvm = kvm;
}

bool
VpsOrder_locationStock_1::isKvmstorage()
{
	return kvmstorage;
}

void
VpsOrder_locationStock_1::setKvmstorage(bool kvmstorage)
{
	this->kvmstorage = kvmstorage;
}

bool
VpsOrder_locationStock_1::isHyperv()
{
	return hyperv;
}

void
VpsOrder_locationStock_1::setHyperv(bool hyperv)
{
	this->hyperv = hyperv;
}



