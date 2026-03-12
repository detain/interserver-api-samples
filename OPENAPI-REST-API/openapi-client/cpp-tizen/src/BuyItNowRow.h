/*
 * BuyItNowRow.h
 *
 * A buy-it-now dedicated server listing from the marketplace, with hardware specs and pricing.
 */

#ifndef _BuyItNowRow_H_
#define _BuyItNowRow_H_


#include <string>
#include "BuyItNowRow_cpu_inner.h"
#include <list>
#include <map>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A buy-it-now dedicated server listing from the marketplace, with hardware specs and pricing.
 *
 *  \ingroup Models
 *
 */

class BuyItNowRow : public Object {
public:
	/*! \brief Constructor.
	 */
	BuyItNowRow();
	BuyItNowRow(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BuyItNowRow();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Unique server ID. Use this as `server_id` in `POST /servers/order/buy_now_server`.
	 */
	std::string getServerId();

	/*! \brief Set Unique server ID. Use this as `server_id` in `POST /servers/order/buy_now_server`.
	 */
	void setServerId(std::string  server_id);
	/*! \brief Get 
	 */
	std::list<BuyItNowRow_cpu_inner> getCpu();

	/*! \brief Set 
	 */
	void setCpu(std::list <BuyItNowRow_cpu_inner> cpu);
	/*! \brief Get 
	 */
	std::string getMemory();

	/*! \brief Set 
	 */
	void setMemory(std::string  memory);
	/*! \brief Get 
	 */
	std::map<std::string, std::string> getDisk();

	/*! \brief Set 
	 */
	void setDisk(std::map <std::string, std::string> disk);
	/*! \brief Get 
	 */
	std::string getBandwidth();

	/*! \brief Set 
	 */
	void setBandwidth(std::string  bandwidth);
	/*! \brief Get 
	 */
	std::string getIps();

	/*! \brief Set 
	 */
	void setIps(std::string  ips);
	/*! \brief Get 
	 */
	std::string getLocation();

	/*! \brief Set 
	 */
	void setLocation(std::string  location);
	/*! \brief Get 
	 */
	int getPrice();

	/*! \brief Set 
	 */
	void setPrice(int  price);

private:
	std::string server_id;
	std::list <BuyItNowRow_cpu_inner>cpu;
	std::string memory;
	std::map <std::string, std::string>disk;
	std::string bandwidth;
	std::string ips;
	std::string location;
	int price;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BuyItNowRow_H_ */
