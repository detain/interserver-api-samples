

#include "CaptchaResponse.h"

using namespace Tiny;

CaptchaResponse::CaptchaResponse()
{
	captcha = std::string();
}

CaptchaResponse::CaptchaResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

CaptchaResponse::~CaptchaResponse()
{

}

void
CaptchaResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *captchaKey = "captcha";

    if(object.has_key(captchaKey))
    {
        bourne::json value = object[captchaKey];



        jsonToValue(&captcha, value, "std::string");


    }


}

bourne::json
CaptchaResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["captcha"] = getCaptcha();



    return object;

}

std::string
CaptchaResponse::getCaptcha()
{
	return captcha;
}

void
CaptchaResponse::setCaptcha(std::string captcha)
{
	this->captcha = captcha;
}



