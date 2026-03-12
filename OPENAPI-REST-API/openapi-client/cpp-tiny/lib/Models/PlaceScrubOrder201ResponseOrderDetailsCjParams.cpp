

#include "PlaceScrubOrder_201_response_order_details_cj_params.h"

using namespace Tiny;

PlaceScrubOrder_201_response_order_details_cj_params::PlaceScrubOrder_201_response_order_details_cj_params()
{
	containerTagId = int(0);
	cID = int(0);
	oID = std::string();
	tYPE = int(0);
	iTEM1 = std::string();
	aMT1 = int(0);
	qTY1 = int(0);
	cURRENCY = std::string();
}

PlaceScrubOrder_201_response_order_details_cj_params::PlaceScrubOrder_201_response_order_details_cj_params(std::string jsonString)
{
	this->fromJson(jsonString);
}

PlaceScrubOrder_201_response_order_details_cj_params::~PlaceScrubOrder_201_response_order_details_cj_params()
{

}

void
PlaceScrubOrder_201_response_order_details_cj_params::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *containerTagIdKey = "containerTagId";

    if(object.has_key(containerTagIdKey))
    {
        bourne::json value = object[containerTagIdKey];



        jsonToValue(&containerTagId, value, "int");


    }

    const char *cIDKey = "CID";

    if(object.has_key(cIDKey))
    {
        bourne::json value = object[cIDKey];



        jsonToValue(&cID, value, "int");


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



        jsonToValue(&tYPE, value, "int");


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



        jsonToValue(&aMT1, value, "int");


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
PlaceScrubOrder_201_response_order_details_cj_params::toJson()
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

int
PlaceScrubOrder_201_response_order_details_cj_params::getContainerTagId()
{
	return containerTagId;
}

void
PlaceScrubOrder_201_response_order_details_cj_params::setContainerTagId(int containerTagId)
{
	this->containerTagId = containerTagId;
}

int
PlaceScrubOrder_201_response_order_details_cj_params::getCID()
{
	return cID;
}

void
PlaceScrubOrder_201_response_order_details_cj_params::setCID(int cID)
{
	this->cID = cID;
}

std::string
PlaceScrubOrder_201_response_order_details_cj_params::getOID()
{
	return oID;
}

void
PlaceScrubOrder_201_response_order_details_cj_params::setOID(std::string oID)
{
	this->oID = oID;
}

int
PlaceScrubOrder_201_response_order_details_cj_params::getTYPE()
{
	return tYPE;
}

void
PlaceScrubOrder_201_response_order_details_cj_params::setTYPE(int tYPE)
{
	this->tYPE = tYPE;
}

std::string
PlaceScrubOrder_201_response_order_details_cj_params::getITEM1()
{
	return iTEM1;
}

void
PlaceScrubOrder_201_response_order_details_cj_params::setITEM1(std::string iTEM1)
{
	this->iTEM1 = iTEM1;
}

int
PlaceScrubOrder_201_response_order_details_cj_params::getAMT1()
{
	return aMT1;
}

void
PlaceScrubOrder_201_response_order_details_cj_params::setAMT1(int aMT1)
{
	this->aMT1 = aMT1;
}

int
PlaceScrubOrder_201_response_order_details_cj_params::getQTY1()
{
	return qTY1;
}

void
PlaceScrubOrder_201_response_order_details_cj_params::setQTY1(int qTY1)
{
	this->qTY1 = qTY1;
}

std::string
PlaceScrubOrder_201_response_order_details_cj_params::getCURRENCY()
{
	return cURRENCY;
}

void
PlaceScrubOrder_201_response_order_details_cj_params::setCURRENCY(std::string cURRENCY)
{
	this->cURRENCY = cURRENCY;
}



