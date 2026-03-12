

#include "BackupOrderPostResponse_cj_params.h"

using namespace Tiny;

BackupOrderPostResponse_cj_params::BackupOrderPostResponse_cj_params()
{
	containerTagId = std::string();
	cID = std::string();
	oID = std::string();
	tYPE = std::string();
	iTEM1 = std::string();
	aMT1 = std::string();
	qTY1 = int(0);
	cURRENCY = std::string();
}

BackupOrderPostResponse_cj_params::BackupOrderPostResponse_cj_params(std::string jsonString)
{
	this->fromJson(jsonString);
}

BackupOrderPostResponse_cj_params::~BackupOrderPostResponse_cj_params()
{

}

void
BackupOrderPostResponse_cj_params::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *containerTagIdKey = "containerTagId";

    if(object.has_key(containerTagIdKey))
    {
        bourne::json value = object[containerTagIdKey];



        jsonToValue(&containerTagId, value, "std::string");


    }

    const char *cIDKey = "CID";

    if(object.has_key(cIDKey))
    {
        bourne::json value = object[cIDKey];



        jsonToValue(&cID, value, "std::string");


    }

    const char *oIDKey = "OID";

    if(object.has_key(oIDKey))
    {
        bourne::json value = object[oIDKey];



        jsonToValue(&oID, value, "std::string");


    }

    const char *tYPEKey = "TYPE";

    if(object.has_key(tYPEKey))
    {
        bourne::json value = object[tYPEKey];



        jsonToValue(&tYPE, value, "std::string");


    }

    const char *iTEM1Key = "ITEM1";

    if(object.has_key(iTEM1Key))
    {
        bourne::json value = object[iTEM1Key];



        jsonToValue(&iTEM1, value, "std::string");


    }

    const char *aMT1Key = "AMT1";

    if(object.has_key(aMT1Key))
    {
        bourne::json value = object[aMT1Key];



        jsonToValue(&aMT1, value, "std::string");


    }

    const char *qTY1Key = "QTY1";

    if(object.has_key(qTY1Key))
    {
        bourne::json value = object[qTY1Key];



        jsonToValue(&qTY1, value, "int");


    }

    const char *cURRENCYKey = "CURRENCY";

    if(object.has_key(cURRENCYKey))
    {
        bourne::json value = object[cURRENCYKey];



        jsonToValue(&cURRENCY, value, "std::string");


    }


}

bourne::json
BackupOrderPostResponse_cj_params::toJson()
{
    bourne::json object = bourne::json::object();





    object["containerTagId"] = getContainerTagId();






    object["cID"] = getCID();






    object["oID"] = getOID();






    object["tYPE"] = getTYPE();






    object["iTEM1"] = getITEM1();






    object["aMT1"] = getAMT1();






    object["qTY1"] = getQTY1();






    object["cURRENCY"] = getCURRENCY();



    return object;

}

std::string
BackupOrderPostResponse_cj_params::getContainerTagId()
{
	return containerTagId;
}

void
BackupOrderPostResponse_cj_params::setContainerTagId(std::string containerTagId)
{
	this->containerTagId = containerTagId;
}

std::string
BackupOrderPostResponse_cj_params::getCID()
{
	return cID;
}

void
BackupOrderPostResponse_cj_params::setCID(std::string cID)
{
	this->cID = cID;
}

std::string
BackupOrderPostResponse_cj_params::getOID()
{
	return oID;
}

void
BackupOrderPostResponse_cj_params::setOID(std::string oID)
{
	this->oID = oID;
}

std::string
BackupOrderPostResponse_cj_params::getTYPE()
{
	return tYPE;
}

void
BackupOrderPostResponse_cj_params::setTYPE(std::string tYPE)
{
	this->tYPE = tYPE;
}

std::string
BackupOrderPostResponse_cj_params::getITEM1()
{
	return iTEM1;
}

void
BackupOrderPostResponse_cj_params::setITEM1(std::string iTEM1)
{
	this->iTEM1 = iTEM1;
}

std::string
BackupOrderPostResponse_cj_params::getAMT1()
{
	return aMT1;
}

void
BackupOrderPostResponse_cj_params::setAMT1(std::string aMT1)
{
	this->aMT1 = aMT1;
}

int
BackupOrderPostResponse_cj_params::getQTY1()
{
	return qTY1;
}

void
BackupOrderPostResponse_cj_params::setQTY1(int qTY1)
{
	this->qTY1 = qTY1;
}

std::string
BackupOrderPostResponse_cj_params::getCURRENCY()
{
	return cURRENCY;
}

void
BackupOrderPostResponse_cj_params::setCURRENCY(std::string cURRENCY)
{
	this->cURRENCY = cURRENCY;
}



