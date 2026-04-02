
/*
 * ServerOrderCPU.h
 *
 * A CPU option available when ordering a dedicated server.
 */

#ifndef TINY_CPP_CLIENT_ServerOrderCPU_H_
#define TINY_CPP_CLIENT_ServerOrderCPU_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A CPU option available when ordering a dedicated server.
 *
 *  \ingroup Models
 *
 */

class ServerOrderCPU{
public:

    /*! \brief Constructor.
	 */
    ServerOrderCPU();
    ServerOrderCPU(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerOrderCPU();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get CPU ID.
	 */
	std::string getId();

	/*! \brief Set CPU ID.
	 */
	void setId(std::string id);
	/*! \brief Get CPU price.
	 */
	int getPrice();

	/*! \brief Set CPU price.
	 */
	void setPrice(int price);
	/*! \brief Get CPU image.
	 */
	std::string getImg();

	/*! \brief Set CPU image.
	 */
	void setImg(std::string img);
	/*! \brief Get Short description of the CPU.
	 */
	std::string getShortDesc();

	/*! \brief Set Short description of the CPU.
	 */
	void setShortDesc(std::string short_desc);
	/*! \brief Get Long description of the CPU.
	 */
	std::string getLongDesc();

	/*! \brief Set Long description of the CPU.
	 */
	void setLongDesc(std::string long_desc);
	/*! \brief Get Location of the CPU.
	 */
	std::string getLocation();

	/*! \brief Set Location of the CPU.
	 */
	void setLocation(std::string location);
	/*! \brief Get Front Side Bus information.
	 */
	std::string getFsb();

	/*! \brief Set Front Side Bus information.
	 */
	void setFsb(std::string fsb);
	/*! \brief Get Manufacturer information.
	 */
	std::string getManu();

	/*! \brief Set Manufacturer information.
	 */
	void setManu(std::string manu);
	/*! \brief Get CPU type.
	 */
	std::string getType();

	/*! \brief Set CPU type.
	 */
	void setType(std::string type);
	/*! \brief Get CPU speed.
	 */
	std::string getSpeed();

	/*! \brief Set CPU speed.
	 */
	void setSpeed(std::string speed);
	/*! \brief Get Cache information.
	 */
	std::string getCache();

	/*! \brief Set Cache information.
	 */
	void setCache(std::string cache);
	/*! \brief Get Active status.
	 */
	std::string getActive();

	/*! \brief Set Active status.
	 */
	void setActive(std::string active);
	/*! \brief Get Number of cores.
	 */
	std::string getNumCores();

	/*! \brief Set Number of cores.
	 */
	void setNumCores(std::string num_cores);
	/*! \brief Get Number of CPUs.
	 */
	std::string getNumCpus();

	/*! \brief Set Number of CPUs.
	 */
	void setNumCpus(std::string num_cpus);
	/*! \brief Get CPU benchmark.
	 */
	std::string getBenchmark();

	/*! \brief Set CPU benchmark.
	 */
	void setBenchmark(std::string benchmark);
	/*! \brief Get Monthly price.
	 */
	int getMonthlyPrice();

	/*! \brief Set Monthly price.
	 */
	void setMonthlyPrice(int monthly_price);
	/*! \brief Get Maximum RAM supported.
	 */
	std::string getMaxRam();

	/*! \brief Set Maximum RAM supported.
	 */
	void setMaxRam(std::string max_ram);
	/*! \brief Get Minimum RAM required.
	 */
	std::string getMinRam();

	/*! \brief Set Minimum RAM required.
	 */
	void setMinRam(std::string min_ram);
	/*! \brief Get Maximum LFF (Large Form Factor) supported.
	 */
	std::string getMaxLff();

	/*! \brief Set Maximum LFF (Large Form Factor) supported.
	 */
	void setMaxLff(std::string max_lff);
	/*! \brief Get Maximum SFF (Small Form Factor) supported.
	 */
	std::string getMaxSff();

	/*! \brief Set Maximum SFF (Small Form Factor) supported.
	 */
	void setMaxSff(std::string max_sff);
	/*! \brief Get Maximum NVMe drives supported.
	 */
	std::string getMaxNve();

	/*! \brief Set Maximum NVMe drives supported.
	 */
	void setMaxNve(std::string max_nve);
	/*! \brief Get Visibility status.
	 */
	std::string getVisible();

	/*! \brief Set Visibility status.
	 */
	void setVisible(std::string visible);
	/*! \brief Get Hard drive IDs.
	 */
	std::string getHdIds();

	/*! \brief Set Hard drive IDs.
	 */
	void setHdIds(std::string hd_ids);
	/*! \brief Get Display of CPU price.
	 */
	std::string getPriceDisplay();

	/*! \brief Set Display of CPU price.
	 */
	void setPriceDisplay(std::string price_display);
	/*! \brief Get Display of monthly CPU price.
	 */
	std::string getMonthlyPriceDisplay();

	/*! \brief Set Display of monthly CPU price.
	 */
	void setMonthlyPriceDisplay(std::string monthly_price_display);


    private:
    std::string id{};
    int price{};
    std::string img{};
    std::string short_desc{};
    std::string long_desc{};
    std::string location{};
    std::string fsb{};
    std::string manu{};
    std::string type{};
    std::string speed{};
    std::string cache{};
    std::string active{};
    std::string num_cores{};
    std::string num_cpus{};
    std::string benchmark{};
    int monthly_price{};
    std::string max_ram{};
    std::string min_ram{};
    std::string max_lff{};
    std::string max_sff{};
    std::string max_nve{};
    std::string visible{};
    std::string hd_ids{};
    std::string price_display{};
    std::string monthly_price_display{};
};
}

#endif /* TINY_CPP_CLIENT_ServerOrderCPU_H_ */
