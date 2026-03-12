

#include "Cpu.h"

using namespace Tiny;

Cpu::Cpu()
{
	id = int(0);
	short_desc = std::string();
	long_desc = std::string();
	type = std::string();
	speed = std::string();
	num_cores = std::string();
	num_cpus = std::string();
	benchmark = std::string();
	monthly_price = float(0);
	monthly_price_display = std::string();
	max_ram = std::string();
	min_ram = std::string();
	max_lff = std::string();
	max_sff = std::string();
	max_nve = std::string();
	visible = std::string();
	active = std::string();
}

Cpu::Cpu(std::string jsonString)
{
	this->fromJson(jsonString);
}

Cpu::~Cpu()
{

}

void
Cpu::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "int");


    }

    const char *short_descKey = "short_desc";

    if(object.has_key(short_descKey))
    {
        bourne::json value = object[short_descKey];



        jsonToValue(&short_desc, value, "std::string");


    }

    const char *long_descKey = "long_desc";

    if(object.has_key(long_descKey))
    {
        bourne::json value = object[long_descKey];



        jsonToValue(&long_desc, value, "std::string");


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

    const char *num_coresKey = "num_cores";

    if(object.has_key(num_coresKey))
    {
        bourne::json value = object[num_coresKey];



        jsonToValue(&num_cores, value, "std::string");


    }

    const char *num_cpusKey = "num_cpus";

    if(object.has_key(num_cpusKey))
    {
        bourne::json value = object[num_cpusKey];



        jsonToValue(&num_cpus, value, "std::string");


    }

    const char *benchmarkKey = "benchmark";

    if(object.has_key(benchmarkKey))
    {
        bourne::json value = object[benchmarkKey];



        jsonToValue(&benchmark, value, "std::string");


    }

    const char *monthly_priceKey = "monthly_price";

    if(object.has_key(monthly_priceKey))
    {
        bourne::json value = object[monthly_priceKey];



        jsonToValue(&monthly_price, value, "long");


    }

    const char *monthly_price_displayKey = "monthly_price_display";

    if(object.has_key(monthly_price_displayKey))
    {
        bourne::json value = object[monthly_price_displayKey];



        jsonToValue(&monthly_price_display, value, "std::string");


    }

    const char *max_ramKey = "max_ram";

    if(object.has_key(max_ramKey))
    {
        bourne::json value = object[max_ramKey];



        jsonToValue(&max_ram, value, "std::string");


    }

    const char *min_ramKey = "min_ram";

    if(object.has_key(min_ramKey))
    {
        bourne::json value = object[min_ramKey];



        jsonToValue(&min_ram, value, "std::string");


    }

    const char *max_lffKey = "max_lff";

    if(object.has_key(max_lffKey))
    {
        bourne::json value = object[max_lffKey];



        jsonToValue(&max_lff, value, "std::string");


    }

    const char *max_sffKey = "max_sff";

    if(object.has_key(max_sffKey))
    {
        bourne::json value = object[max_sffKey];



        jsonToValue(&max_sff, value, "std::string");


    }

    const char *max_nveKey = "max_nve";

    if(object.has_key(max_nveKey))
    {
        bourne::json value = object[max_nveKey];



        jsonToValue(&max_nve, value, "std::string");


    }

    const char *visibleKey = "visible";

    if(object.has_key(visibleKey))
    {
        bourne::json value = object[visibleKey];



        jsonToValue(&visible, value, "std::string");


    }

    const char *activeKey = "active";

    if(object.has_key(activeKey))
    {
        bourne::json value = object[activeKey];



        jsonToValue(&active, value, "std::string");


    }


}

bourne::json
Cpu::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["short_desc"] = getShortDesc();






    object["long_desc"] = getLongDesc();






    object["type"] = getType();






    object["speed"] = getSpeed();






    object["num_cores"] = getNumCores();






    object["num_cpus"] = getNumCpus();






    object["benchmark"] = getBenchmark();






    object["monthly_price"] = getMonthlyPrice();






    object["monthly_price_display"] = getMonthlyPriceDisplay();






    object["max_ram"] = getMaxRam();






    object["min_ram"] = getMinRam();






    object["max_lff"] = getMaxLff();






    object["max_sff"] = getMaxSff();






    object["max_nve"] = getMaxNve();






    object["visible"] = getVisible();






    object["active"] = getActive();



    return object;

}

int
Cpu::getId()
{
	return id;
}

void
Cpu::setId(int id)
{
	this->id = id;
}

std::string
Cpu::getShortDesc()
{
	return short_desc;
}

void
Cpu::setShortDesc(std::string short_desc)
{
	this->short_desc = short_desc;
}

std::string
Cpu::getLongDesc()
{
	return long_desc;
}

void
Cpu::setLongDesc(std::string long_desc)
{
	this->long_desc = long_desc;
}

std::string
Cpu::getType()
{
	return type;
}

void
Cpu::setType(std::string type)
{
	this->type = type;
}

std::string
Cpu::getSpeed()
{
	return speed;
}

void
Cpu::setSpeed(std::string speed)
{
	this->speed = speed;
}

std::string
Cpu::getNumCores()
{
	return num_cores;
}

void
Cpu::setNumCores(std::string num_cores)
{
	this->num_cores = num_cores;
}

std::string
Cpu::getNumCpus()
{
	return num_cpus;
}

void
Cpu::setNumCpus(std::string num_cpus)
{
	this->num_cpus = num_cpus;
}

std::string
Cpu::getBenchmark()
{
	return benchmark;
}

void
Cpu::setBenchmark(std::string benchmark)
{
	this->benchmark = benchmark;
}

long
Cpu::getMonthlyPrice()
{
	return monthly_price;
}

void
Cpu::setMonthlyPrice(long monthly_price)
{
	this->monthly_price = monthly_price;
}

std::string
Cpu::getMonthlyPriceDisplay()
{
	return monthly_price_display;
}

void
Cpu::setMonthlyPriceDisplay(std::string monthly_price_display)
{
	this->monthly_price_display = monthly_price_display;
}

std::string
Cpu::getMaxRam()
{
	return max_ram;
}

void
Cpu::setMaxRam(std::string max_ram)
{
	this->max_ram = max_ram;
}

std::string
Cpu::getMinRam()
{
	return min_ram;
}

void
Cpu::setMinRam(std::string min_ram)
{
	this->min_ram = min_ram;
}

std::string
Cpu::getMaxLff()
{
	return max_lff;
}

void
Cpu::setMaxLff(std::string max_lff)
{
	this->max_lff = max_lff;
}

std::string
Cpu::getMaxSff()
{
	return max_sff;
}

void
Cpu::setMaxSff(std::string max_sff)
{
	this->max_sff = max_sff;
}

std::string
Cpu::getMaxNve()
{
	return max_nve;
}

void
Cpu::setMaxNve(std::string max_nve)
{
	this->max_nve = max_nve;
}

std::string
Cpu::getVisible()
{
	return visible;
}

void
Cpu::setVisible(std::string visible)
{
	this->visible = visible;
}

std::string
Cpu::getActive()
{
	return active;
}

void
Cpu::setActive(std::string active)
{
	this->active = active;
}



