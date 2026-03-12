

#include "BuyItNowRow_cpu_inner.h"

using namespace Tiny;

BuyItNowRow_cpu_inner::BuyItNowRow_cpu_inner()
{
	img = std::string();
	type = std::string();
	speed = std::string();
	num_cpus = std::string();
	num_cores = std::string();
}

BuyItNowRow_cpu_inner::BuyItNowRow_cpu_inner(std::string jsonString)
{
	this->fromJson(jsonString);
}

BuyItNowRow_cpu_inner::~BuyItNowRow_cpu_inner()
{

}

void
BuyItNowRow_cpu_inner::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *imgKey = "img";

    if(object.has_key(imgKey))
    {
        bourne::json value = object[imgKey];



        jsonToValue(&img, value, "std::string");


    }

    const char *typeKey = "type";

    if(object.has_key(typeKey))
    {
        bourne::json value = object[typeKey];



        jsonToValue(&type, value, "std::string");


    }

    const char *speedKey = "speed";

    if(object.has_key(speedKey))
    {
        bourne::json value = object[speedKey];



        jsonToValue(&speed, value, "std::string");


    }

    const char *num_cpusKey = "num_cpus";

    if(object.has_key(num_cpusKey))
    {
        bourne::json value = object[num_cpusKey];



        jsonToValue(&num_cpus, value, "std::string");


    }

    const char *num_coresKey = "num_cores";

    if(object.has_key(num_coresKey))
    {
        bourne::json value = object[num_coresKey];



        jsonToValue(&num_cores, value, "std::string");


    }


}

bourne::json
BuyItNowRow_cpu_inner::toJson()
{
    bourne::json object = bourne::json::object();





    object["img"] = getImg();






    object["type"] = getType();






    object["speed"] = getSpeed();






    object["num_cpus"] = getNumCpus();






    object["num_cores"] = getNumCores();



    return object;

}

std::string
BuyItNowRow_cpu_inner::getImg()
{
	return img;
}

void
BuyItNowRow_cpu_inner::setImg(std::string img)
{
	this->img = img;
}

std::string
BuyItNowRow_cpu_inner::getType()
{
	return type;
}

void
BuyItNowRow_cpu_inner::setType(std::string type)
{
	this->type = type;
}

std::string
BuyItNowRow_cpu_inner::getSpeed()
{
	return speed;
}

void
BuyItNowRow_cpu_inner::setSpeed(std::string speed)
{
	this->speed = speed;
}

std::string
BuyItNowRow_cpu_inner::getNumCpus()
{
	return num_cpus;
}

void
BuyItNowRow_cpu_inner::setNumCpus(std::string num_cpus)
{
	this->num_cpus = num_cpus;
}

std::string
BuyItNowRow_cpu_inner::getNumCores()
{
	return num_cores;
}

void
BuyItNowRow_cpu_inner::setNumCores(std::string num_cores)
{
	this->num_cores = num_cores;
}



