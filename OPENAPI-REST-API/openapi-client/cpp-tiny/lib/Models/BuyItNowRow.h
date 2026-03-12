
/*
 * BuyItNowRow.h
 *
 * A buy-it-now dedicated server listing from the marketplace, with hardware specs and pricing.
 */

#ifndef TINY_CPP_CLIENT_BuyItNowRow_H_
#define TINY_CPP_CLIENT_BuyItNowRow_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "BuyItNowRow_cpu_inner.h"
#include <list>
#include <map>

namespace Tiny {


/*! \brief A buy-it-now dedicated server listing from the marketplace, with hardware specs and pricing.
 *
 *  \ingroup Models
 *
 */

class BuyItNowRow{
public:

    /*! \brief Constructor.
	 */
    BuyItNowRow();
    BuyItNowRow(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BuyItNowRow();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Unique server ID. Use this as `server_id` in `POST /servers/order/buy_now_server`.
	 */
	std::string getServerId();

	/*! \brief Set Unique server ID. Use this as `server_id` in `POST /servers/order/buy_now_server`.
	 */
	void setServerId(std::string server_id);
	/*! \brief Get 
	 */
	std::list<BuyItNowRow_cpu_inner> getCpu();

	/*! \brief Set 
	 */
	void setCpu(std::list<BuyItNowRow_cpu_inner> cpu);
	/*! \brief Get 
	 */
	std::string getMemory();

	/*! \brief Set 
	 */
	void setMemory(std::string memory);
	/*! \brief Get 
	 */
	std::map<std::string, std::string> getDisk();

	/*! \brief Set 
	 */
	void setDisk(std::map<std::string, std::string> disk);
	/*! \brief Get 
	 */
	std::string getBandwidth();

	/*! \brief Set 
	 */
	void setBandwidth(std::string bandwidth);
	/*! \brief Get 
	 */
	std::string getIps();

	/*! \brief Set 
	 */
	void setIps(std::string ips);
	/*! \brief Get 
	 */
	std::string getLocation();

	/*! \brief Set 
	 */
	void setLocation(std::string location);
	/*! \brief Get 
	 */
	int getPrice();

	/*! \brief Set 
	 */
	void setPrice(int price);


    private:
    std::string server_id{};
    std::list<BuyItNowRow_cpu_inner> cpu;
    std::string memory{};
    std::map<std::string, std::string> disk;
    std::string bandwidth{};
    std::string ips{};
    std::string location{};
    int price{};
};
}

#endif /* TINY_CPP_CLIENT_BuyItNowRow_H_ */
