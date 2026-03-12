

#include "LoginSubmissionExample_g_recaptcha_response_dep.h"

using namespace Tiny;

LoginSubmissionExample_g_recaptcha_response_dep::LoginSubmissionExample_g_recaptcha_response_dep()
{
	w = int(0);
	n = int(0);
}

LoginSubmissionExample_g_recaptcha_response_dep::LoginSubmissionExample_g_recaptcha_response_dep(std::string jsonString)
{
	this->fromJson(jsonString);
}

LoginSubmissionExample_g_recaptcha_response_dep::~LoginSubmissionExample_g_recaptcha_response_dep()
{

}

void
LoginSubmissionExample_g_recaptcha_response_dep::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *wKey = "w";

    if(object.has_key(wKey))
    {
        bourne::json value = object[wKey];



        jsonToValue(&w, value, "int");


    }

    const char *nKey = "n";

    if(object.has_key(nKey))
    {
        bourne::json value = object[nKey];



        jsonToValue(&n, value, "int");


    }


}

bourne::json
LoginSubmissionExample_g_recaptcha_response_dep::toJson()
{
    bourne::json object = bourne::json::object();





    object["w"] = getW();






    object["n"] = getN();



    return object;

}

int
LoginSubmissionExample_g_recaptcha_response_dep::getW()
{
	return w;
}

void
LoginSubmissionExample_g_recaptcha_response_dep::setW(int w)
{
	this->w = w;
}

int
LoginSubmissionExample_g_recaptcha_response_dep::getN()
{
	return n;
}

void
LoginSubmissionExample_g_recaptcha_response_dep::setN(int n)
{
	this->n = n;
}



