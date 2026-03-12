
/*
 * Cpu.h
 *
 * A CPU option available for dedicated server ordering.
 */

#ifndef TINY_CPP_CLIENT_Cpu_H_
#define TINY_CPP_CLIENT_Cpu_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A CPU option available for dedicated server ordering.
 *
 *  \ingroup Models
 *
 */

class Cpu{
public:

    /*! \brief Constructor.
	 */
    Cpu();
    Cpu(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Cpu();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getId();

	/*! \brief Set 
	 */
	void setId(int id);
	/*! \brief Get 
	 */
	std::string getShortDesc();

	/*! \brief Set 
	 */
	void setShortDesc(std::string short_desc);
	/*! \brief Get 
	 */
	std::string getLongDesc();

	/*! \brief Set 
	 */
	void setLongDesc(std::string long_desc);
	/*! \brief Get 
	 */
	std::string getType();

	/*! \brief Set 
	 */
	void setType(std::string type);
	/*! \brief Get 
	 */
	std::string getSpeed();

	/*! \brief Set 
	 */
	void setSpeed(std::string speed);
	/*! \brief Get 
	 */
	std::string getNumCores();

	/*! \brief Set 
	 */
	void setNumCores(std::string num_cores);
	/*! \brief Get 
	 */
	std::string getNumCpus();

	/*! \brief Set 
	 */
	void setNumCpus(std::string num_cpus);
	/*! \brief Get 
	 */
	std::string getBenchmark();

	/*! \brief Set 
	 */
	void setBenchmark(std::string benchmark);
	/*! \brief Get 
	 */
	long getMonthlyPrice();

	/*! \brief Set 
	 */
	void setMonthlyPrice(long monthly_price);
	/*! \brief Get 
	 */
	std::string getMonthlyPriceDisplay();

	/*! \brief Set 
	 */
	void setMonthlyPriceDisplay(std::string monthly_price_display);
	/*! \brief Get 
	 */
	std::string getMaxRam();

	/*! \brief Set 
	 */
	void setMaxRam(std::string max_ram);
	/*! \brief Get 
	 */
	std::string getMinRam();

	/*! \brief Set 
	 */
	void setMinRam(std::string min_ram);
	/*! \brief Get 
	 */
	std::string getMaxLff();

	/*! \brief Set 
	 */
	void setMaxLff(std::string max_lff);
	/*! \brief Get 
	 */
	std::string getMaxSff();

	/*! \brief Set 
	 */
	void setMaxSff(std::string max_sff);
	/*! \brief Get 
	 */
	std::string getMaxNve();

	/*! \brief Set 
	 */
	void setMaxNve(std::string max_nve);
	/*! \brief Get 
	 */
	std::string getVisible();

	/*! \brief Set 
	 */
	void setVisible(std::string visible);
	/*! \brief Get 
	 */
	std::string getActive();

	/*! \brief Set 
	 */
	void setActive(std::string active);


    private:
    int id{};
    std::string short_desc{};
    std::string long_desc{};
    std::string type{};
    std::string speed{};
    std::string num_cores{};
    std::string num_cpus{};
    std::string benchmark{};
    long monthly_price{};
    std::string monthly_price_display{};
    std::string max_ram{};
    std::string min_ram{};
    std::string max_lff{};
    std::string max_sff{};
    std::string max_nve{};
    std::string visible{};
    std::string active{};
};
}

#endif /* TINY_CPP_CLIENT_Cpu_H_ */
