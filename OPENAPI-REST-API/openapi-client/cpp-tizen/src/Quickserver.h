/*
 * Quickserver.h
 *
 * 
 */

#ifndef _Quickserver_H_
#define _Quickserver_H_


#include <string>
#include "QuickserverBillingDetails.h"
#include "QuickserverClientLink.h"
#include "QuickserverServiceInfo.h"
#include "QuickserverServiceMaster.h"
#include "Quickserver_extraInfoTables.h"
#include "Quickserver_serviceExtra.h"
#include <list>
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

class Quickserver : public Object {
public:
	/*! \brief Constructor.
	 */
	Quickserver();
	Quickserver(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Quickserver();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	QuickserverServiceInfo getServiceInfo();

	/*! \brief Set 
	 */
	void setServiceInfo(QuickserverServiceInfo  serviceInfo);
	/*! \brief Get 
	 */
	std::list<QuickserverClientLink> getClientLinks();

	/*! \brief Set 
	 */
	void setClientLinks(std::list <QuickserverClientLink> client_links);
	/*! \brief Get 
	 */
	QuickserverBillingDetails getBillingDetails();

	/*! \brief Set 
	 */
	void setBillingDetails(QuickserverBillingDetails  billingDetails);
	/*! \brief Get Currency of the customer
	 */
	std::string getCustCurrency();

	/*! \brief Set Currency of the customer
	 */
	void setCustCurrency(std::string  custCurrency);
	/*! \brief Get Currency symbol of the customer
	 */
	std::string getCustCurrencySymbol();

	/*! \brief Set Currency symbol of the customer
	 */
	void setCustCurrencySymbol(std::string  custCurrencySymbol);
	/*! \brief Get 
	 */
	QuickserverServiceMaster getServiceMaster();

	/*! \brief Set 
	 */
	void setServiceMaster(QuickserverServiceMaster  serviceMaster);
	/*! \brief Get Package name
	 */
	std::string getPackage();

	/*! \brief Set Package name
	 */
	void setPackage(std::string  package);
	/*! \brief Get Operating system template
	 */
	std::string getOsTemplate();

	/*! \brief Set Operating system template
	 */
	void setOsTemplate(std::string  os_template);
	/*! \brief Get 
	 */
	Quickserver_serviceExtra getServiceExtra();

	/*! \brief Set 
	 */
	void setServiceExtra(Quickserver_serviceExtra  serviceExtra);
	/*! \brief Get 
	 */
	Quickserver_extraInfoTables getExtraInfoTables();

	/*! \brief Set 
	 */
	void setExtraInfoTables(Quickserver_extraInfoTables  extraInfoTables);
	/*! \brief Get CPU graph data
	 */
	std::string getCpuGraphData();

	/*! \brief Set CPU graph data
	 */
	void setCpuGraphData(std::string  cpu_graph_data);
	/*! \brief Get Bandwidth x-axis data
	 */
	std::string getBandwidthXaxis();

	/*! \brief Set Bandwidth x-axis data
	 */
	void setBandwidthXaxis(std::string  bandwidth_xaxis);
	/*! \brief Get Bandwidth y-axis data
	 */
	std::string getBandwidthYaxis();

	/*! \brief Set Bandwidth y-axis data
	 */
	void setBandwidthYaxis(std::string  bandwidth_yaxis);
	/*! \brief Get Module information
	 */
	std::string getRModule();

	/*! \brief Set Module information
	 */
	void setRModule(std::string  r_module);
	/*! \brief Get Authentication token
	 */
	std::string getToken();

	/*! \brief Set Authentication token
	 */
	void setToken(std::string  token);
	/*! \brief Get Used disk space
	 */
	std::string getServiceDiskUsed();

	/*! \brief Set Used disk space
	 */
	void setServiceDiskUsed(std::string  service_disk_used);
	/*! \brief Get Total disk space
	 */
	std::string getServiceDiskTotal();

	/*! \brief Set Total disk space
	 */
	void setServiceDiskTotal(std::string  service_disk_total);
	/*! \brief Get Disk usage percentage
	 */
	long long getDiskPercentage();

	/*! \brief Set Disk usage percentage
	 */
	void setDiskPercentage(long long  disk_percentage);
	/*! \brief Get Memory information
	 */
	std::string getMemory();

	/*! \brief Set Memory information
	 */
	void setMemory(std::string  memory);
	/*! \brief Get HDD information
	 */
	std::string getHdd();

	/*! \brief Set HDD information
	 */
	void setHdd(std::string  hdd);
	/*! \brief Get 
	 */
	std::list<std::string> getServiceOverviewExtra();

	/*! \brief Set 
	 */
	void setServiceOverviewExtra(std::list <std::string> service_overview_extra);

private:
	QuickserverServiceInfo serviceInfo;
	std::list <QuickserverClientLink>client_links;
	QuickserverBillingDetails billingDetails;
	std::string custCurrency;
	std::string custCurrencySymbol;
	QuickserverServiceMaster serviceMaster;
	std::string package;
	std::string os_template;
	Quickserver_serviceExtra serviceExtra;
	Quickserver_extraInfoTables extraInfoTables;
	std::string cpu_graph_data;
	std::string bandwidth_xaxis;
	std::string bandwidth_yaxis;
	std::string r_module;
	std::string token;
	std::string service_disk_used;
	std::string service_disk_total;
	long long disk_percentage;
	std::string memory;
	std::string hdd;
	std::list <std::string>service_overview_extra;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Quickserver_H_ */
