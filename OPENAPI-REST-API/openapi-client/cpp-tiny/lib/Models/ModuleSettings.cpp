

#include "ModuleSettings.h"

using namespace Tiny;

ModuleSettings::ModuleSettings()
{
	sERVICE_ID_OFFSET = int(0);
	uSE_REPEAT_INVOICE = bool(false);
	uSE_PACKAGES = bool(false);
	bILLING_DAYS_OFFSET = int(0);
	iMGNAME = std::string();
	rEPEAT_BILLING_METHOD = int(0);
	dELETE_PENDING_DAYS = int(0);
	sUSPEND_DAYS = int(0);
	sUSPEND_WARNING_DAYS = int(0);
	tITLE = std::string();
	mENUNAME = std::string();
	eMAIL_FROM = std::string();
	tBLNAME = std::string();
	tABLE = std::string();
	tITLE_FIELD = std::string();
	pREFIX = std::string();
	tITLE_FIELD2 = std::string();
	tITLE_FIELD3 = std::string();
}

ModuleSettings::ModuleSettings(std::string jsonString)
{
	this->fromJson(jsonString);
}

ModuleSettings::~ModuleSettings()
{

}

void
ModuleSettings::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *sERVICE_ID_OFFSETKey = "SERVICE_ID_OFFSET";

    if(object.has_key(sERVICE_ID_OFFSETKey))
    {
        bourne::json value = object[sERVICE_ID_OFFSETKey];



        jsonToValue(&sERVICE_ID_OFFSET, value, "int");


    }

    const char *uSE_REPEAT_INVOICEKey = "USE_REPEAT_INVOICE";

    if(object.has_key(uSE_REPEAT_INVOICEKey))
    {
        bourne::json value = object[uSE_REPEAT_INVOICEKey];



        jsonToValue(&uSE_REPEAT_INVOICE, value, "bool");


    }

    const char *uSE_PACKAGESKey = "USE_PACKAGES";

    if(object.has_key(uSE_PACKAGESKey))
    {
        bourne::json value = object[uSE_PACKAGESKey];



        jsonToValue(&uSE_PACKAGES, value, "bool");


    }

    const char *bILLING_DAYS_OFFSETKey = "BILLING_DAYS_OFFSET";

    if(object.has_key(bILLING_DAYS_OFFSETKey))
    {
        bourne::json value = object[bILLING_DAYS_OFFSETKey];



        jsonToValue(&bILLING_DAYS_OFFSET, value, "int");


    }

    const char *iMGNAMEKey = "IMGNAME";

    if(object.has_key(iMGNAMEKey))
    {
        bourne::json value = object[iMGNAMEKey];



        jsonToValue(&iMGNAME, value, "std::string");


    }

    const char *rEPEAT_BILLING_METHODKey = "REPEAT_BILLING_METHOD";

    if(object.has_key(rEPEAT_BILLING_METHODKey))
    {
        bourne::json value = object[rEPEAT_BILLING_METHODKey];



        jsonToValue(&rEPEAT_BILLING_METHOD, value, "int");


    }

    const char *dELETE_PENDING_DAYSKey = "DELETE_PENDING_DAYS";

    if(object.has_key(dELETE_PENDING_DAYSKey))
    {
        bourne::json value = object[dELETE_PENDING_DAYSKey];



        jsonToValue(&dELETE_PENDING_DAYS, value, "int");


    }

    const char *sUSPEND_DAYSKey = "SUSPEND_DAYS";

    if(object.has_key(sUSPEND_DAYSKey))
    {
        bourne::json value = object[sUSPEND_DAYSKey];



        jsonToValue(&sUSPEND_DAYS, value, "int");


    }

    const char *sUSPEND_WARNING_DAYSKey = "SUSPEND_WARNING_DAYS";

    if(object.has_key(sUSPEND_WARNING_DAYSKey))
    {
        bourne::json value = object[sUSPEND_WARNING_DAYSKey];



        jsonToValue(&sUSPEND_WARNING_DAYS, value, "int");


    }

    const char *tITLEKey = "TITLE";

    if(object.has_key(tITLEKey))
    {
        bourne::json value = object[tITLEKey];



        jsonToValue(&tITLE, value, "std::string");


    }

    const char *mENUNAMEKey = "MENUNAME";

    if(object.has_key(mENUNAMEKey))
    {
        bourne::json value = object[mENUNAMEKey];



        jsonToValue(&mENUNAME, value, "std::string");


    }

    const char *eMAIL_FROMKey = "EMAIL_FROM";

    if(object.has_key(eMAIL_FROMKey))
    {
        bourne::json value = object[eMAIL_FROMKey];



        jsonToValue(&eMAIL_FROM, value, "std::string");


    }

    const char *tBLNAMEKey = "TBLNAME";

    if(object.has_key(tBLNAMEKey))
    {
        bourne::json value = object[tBLNAMEKey];



        jsonToValue(&tBLNAME, value, "std::string");


    }

    const char *tABLEKey = "TABLE";

    if(object.has_key(tABLEKey))
    {
        bourne::json value = object[tABLEKey];



        jsonToValue(&tABLE, value, "std::string");


    }

    const char *tITLE_FIELDKey = "TITLE_FIELD";

    if(object.has_key(tITLE_FIELDKey))
    {
        bourne::json value = object[tITLE_FIELDKey];



        jsonToValue(&tITLE_FIELD, value, "std::string");


    }

    const char *pREFIXKey = "PREFIX";

    if(object.has_key(pREFIXKey))
    {
        bourne::json value = object[pREFIXKey];



        jsonToValue(&pREFIX, value, "std::string");


    }

    const char *tITLE_FIELD2Key = "TITLE_FIELD2";

    if(object.has_key(tITLE_FIELD2Key))
    {
        bourne::json value = object[tITLE_FIELD2Key];



        jsonToValue(&tITLE_FIELD2, value, "std::string");


    }

    const char *tITLE_FIELD3Key = "TITLE_FIELD3";

    if(object.has_key(tITLE_FIELD3Key))
    {
        bourne::json value = object[tITLE_FIELD3Key];



        jsonToValue(&tITLE_FIELD3, value, "std::string");


    }


}

bourne::json
ModuleSettings::toJson()
{
    bourne::json object = bourne::json::object();





    object["sERVICE_ID_OFFSET"] = getSERVICEIDOFFSET();






    object["uSE_REPEAT_INVOICE"] = isUSEREPEATINVOICE();






    object["uSE_PACKAGES"] = isUSEPACKAGES();






    object["bILLING_DAYS_OFFSET"] = getBILLINGDAYSOFFSET();






    object["iMGNAME"] = getIMGNAME();






    object["rEPEAT_BILLING_METHOD"] = getREPEATBILLINGMETHOD();






    object["dELETE_PENDING_DAYS"] = getDELETEPENDINGDAYS();






    object["sUSPEND_DAYS"] = getSUSPENDDAYS();






    object["sUSPEND_WARNING_DAYS"] = getSUSPENDWARNINGDAYS();






    object["tITLE"] = getTITLE();






    object["mENUNAME"] = getMENUNAME();






    object["eMAIL_FROM"] = getEMAILFROM();






    object["tBLNAME"] = getTBLNAME();






    object["tABLE"] = getTABLE();






    object["tITLE_FIELD"] = getTITLEFIELD();






    object["pREFIX"] = getPREFIX();






    object["tITLE_FIELD2"] = getTITLEFIELD2();






    object["tITLE_FIELD3"] = getTITLEFIELD3();



    return object;

}

int
ModuleSettings::getSERVICEIDOFFSET()
{
	return sERVICE_ID_OFFSET;
}

void
ModuleSettings::setSERVICEIDOFFSET(int sERVICE_ID_OFFSET)
{
	this->sERVICE_ID_OFFSET = sERVICE_ID_OFFSET;
}

bool
ModuleSettings::isUSEREPEATINVOICE()
{
	return uSE_REPEAT_INVOICE;
}

void
ModuleSettings::setUSEREPEATINVOICE(bool uSE_REPEAT_INVOICE)
{
	this->uSE_REPEAT_INVOICE = uSE_REPEAT_INVOICE;
}

bool
ModuleSettings::isUSEPACKAGES()
{
	return uSE_PACKAGES;
}

void
ModuleSettings::setUSEPACKAGES(bool uSE_PACKAGES)
{
	this->uSE_PACKAGES = uSE_PACKAGES;
}

int
ModuleSettings::getBILLINGDAYSOFFSET()
{
	return bILLING_DAYS_OFFSET;
}

void
ModuleSettings::setBILLINGDAYSOFFSET(int bILLING_DAYS_OFFSET)
{
	this->bILLING_DAYS_OFFSET = bILLING_DAYS_OFFSET;
}

std::string
ModuleSettings::getIMGNAME()
{
	return iMGNAME;
}

void
ModuleSettings::setIMGNAME(std::string iMGNAME)
{
	this->iMGNAME = iMGNAME;
}

int
ModuleSettings::getREPEATBILLINGMETHOD()
{
	return rEPEAT_BILLING_METHOD;
}

void
ModuleSettings::setREPEATBILLINGMETHOD(int rEPEAT_BILLING_METHOD)
{
	this->rEPEAT_BILLING_METHOD = rEPEAT_BILLING_METHOD;
}

int
ModuleSettings::getDELETEPENDINGDAYS()
{
	return dELETE_PENDING_DAYS;
}

void
ModuleSettings::setDELETEPENDINGDAYS(int dELETE_PENDING_DAYS)
{
	this->dELETE_PENDING_DAYS = dELETE_PENDING_DAYS;
}

int
ModuleSettings::getSUSPENDDAYS()
{
	return sUSPEND_DAYS;
}

void
ModuleSettings::setSUSPENDDAYS(int sUSPEND_DAYS)
{
	this->sUSPEND_DAYS = sUSPEND_DAYS;
}

int
ModuleSettings::getSUSPENDWARNINGDAYS()
{
	return sUSPEND_WARNING_DAYS;
}

void
ModuleSettings::setSUSPENDWARNINGDAYS(int sUSPEND_WARNING_DAYS)
{
	this->sUSPEND_WARNING_DAYS = sUSPEND_WARNING_DAYS;
}

std::string
ModuleSettings::getTITLE()
{
	return tITLE;
}

void
ModuleSettings::setTITLE(std::string tITLE)
{
	this->tITLE = tITLE;
}

std::string
ModuleSettings::getMENUNAME()
{
	return mENUNAME;
}

void
ModuleSettings::setMENUNAME(std::string mENUNAME)
{
	this->mENUNAME = mENUNAME;
}

std::string
ModuleSettings::getEMAILFROM()
{
	return eMAIL_FROM;
}

void
ModuleSettings::setEMAILFROM(std::string eMAIL_FROM)
{
	this->eMAIL_FROM = eMAIL_FROM;
}

std::string
ModuleSettings::getTBLNAME()
{
	return tBLNAME;
}

void
ModuleSettings::setTBLNAME(std::string tBLNAME)
{
	this->tBLNAME = tBLNAME;
}

std::string
ModuleSettings::getTABLE()
{
	return tABLE;
}

void
ModuleSettings::setTABLE(std::string tABLE)
{
	this->tABLE = tABLE;
}

std::string
ModuleSettings::getTITLEFIELD()
{
	return tITLE_FIELD;
}

void
ModuleSettings::setTITLEFIELD(std::string tITLE_FIELD)
{
	this->tITLE_FIELD = tITLE_FIELD;
}

std::string
ModuleSettings::getPREFIX()
{
	return pREFIX;
}

void
ModuleSettings::setPREFIX(std::string pREFIX)
{
	this->pREFIX = pREFIX;
}

std::string
ModuleSettings::getTITLEFIELD2()
{
	return tITLE_FIELD2;
}

void
ModuleSettings::setTITLEFIELD2(std::string tITLE_FIELD2)
{
	this->tITLE_FIELD2 = tITLE_FIELD2;
}

std::string
ModuleSettings::getTITLEFIELD3()
{
	return tITLE_FIELD3;
}

void
ModuleSettings::setTITLEFIELD3(std::string tITLE_FIELD3)
{
	this->tITLE_FIELD3 = tITLE_FIELD3;
}



