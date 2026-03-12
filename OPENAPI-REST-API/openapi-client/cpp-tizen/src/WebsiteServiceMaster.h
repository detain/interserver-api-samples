/*
 * WebsiteServiceMaster.h
 *
 * 
 */

#ifndef _WebsiteServiceMaster_H_
#define _WebsiteServiceMaster_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class WebsiteServiceMaster : public Object {
public:
	/*! \brief Constructor.
	 */
	WebsiteServiceMaster();
	WebsiteServiceMaster(char* str);

	/*! \brief Destructor.
	 */
	virtual ~WebsiteServiceMaster();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Website ID for the service master
	 */
	std::string getWebsiteId();

	/*! \brief Set Website ID for the service master
	 */
	void setWebsiteId(std::string  website_id);
	/*! \brief Get Website name for the service master
	 */
	std::string getWebsiteName();

	/*! \brief Set Website name for the service master
	 */
	void setWebsiteName(std::string  website_name);
	/*! \brief Get IP address for the service master
	 */
	std::string getWebsiteIp();

	/*! \brief Set IP address for the service master
	 */
	void setWebsiteIp(std::string  website_ip);
	/*! \brief Get Website type for the service master
	 */
	std::string getWebsiteType();

	/*! \brief Set Website type for the service master
	 */
	void setWebsiteType(std::string  website_type);
	/*! \brief Get Availability status for the service master
	 */
	std::string getWebsiteAvailable();

	/*! \brief Set Availability status for the service master
	 */
	void setWebsiteAvailable(std::string  website_available);
	/*! \brief Get Hard drive size for the service master
	 */
	std::string getWebsiteHdsize();

	/*! \brief Set Hard drive size for the service master
	 */
	void setWebsiteHdsize(std::string  website_hdsize);
	/*! \brief Get Free hard drive space for the service master
	 */
	std::string getWebsiteHdfree();

	/*! \brief Set Free hard drive space for the service master
	 */
	void setWebsiteHdfree(std::string  website_hdfree);
	/*! \brief Get Load for the service master
	 */
	std::string getWebsiteLoad();

	/*! \brief Set Load for the service master
	 */
	void setWebsiteLoad(std::string  website_load);
	/*! \brief Get Last update date for the service master
	 */
	std::string getWebsiteLastUpdate();

	/*! \brief Set Last update date for the service master
	 */
	void setWebsiteLastUpdate(std::string  website_last_update);
	/*! \brief Get Maximum number of sites for the service master
	 */
	std::string getWebsiteMaxSites();

	/*! \brief Set Maximum number of sites for the service master
	 */
	void setWebsiteMaxSites(std::string  website_max_sites);
	/*! \brief Get Order number for the service master
	 */
	std::string getWebsiteOrder();

	/*! \brief Set Order number for the service master
	 */
	void setWebsiteOrder(std::string  website_order);
	/*! \brief Get Partitions for the service master
	 */
	std::string getWebsitePartitions();

	/*! \brief Set Partitions for the service master
	 */
	void setWebsitePartitions(std::string  website_partitions);
	/*! \brief Get DNS server 1 for the service master
	 */
	std::string getWebsiteDns1();

	/*! \brief Set DNS server 1 for the service master
	 */
	void setWebsiteDns1(std::string  website_dns1);
	/*! \brief Get DNS server 2 for the service master
	 */
	std::string getWebsiteDns2();

	/*! \brief Set DNS server 2 for the service master
	 */
	void setWebsiteDns2(std::string  website_dns2);

private:
	std::string website_id;
	std::string website_name;
	std::string website_ip;
	std::string website_type;
	std::string website_available;
	std::string website_hdsize;
	std::string website_hdfree;
	std::string website_load;
	std::string website_last_update;
	std::string website_max_sites;
	std::string website_order;
	std::string website_partitions;
	std::string website_dns1;
	std::string website_dns2;
	void __init();
	void __cleanup();

};
}
}

#endif /* _WebsiteServiceMaster_H_ */
