
/*
 * Vps.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Vps_H_
#define TINY_CPP_CLIENT_Vps_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "AnyType.h"
#include "VpsBillingDetails.h"
#include "VpsCPData.h"
#include "VpsClientLink.h"
#include "VpsDAData.h"
#include "VpsExtraInfoTables.h"
#include "VpsPlesk12Data.h"
#include "VpsServiceAddons.h"
#include "VpsServiceExtra.h"
#include "VpsServiceInfo.h"
#include "VpsServiceMaster.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Vps{
public:

    /*! \brief Constructor.
	 */
    Vps();
    Vps(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Vps();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	VpsServiceInfo getServiceInfo();

	/*! \brief Set 
	 */
	void setServiceInfo(VpsServiceInfo serviceInfo);
	/*! \brief Get 
	 */
	std::list<VpsClientLink> getClientLinks();

	/*! \brief Set 
	 */
	void setClientLinks(std::list<VpsClientLink> client_links);
	/*! \brief Get 
	 */
	VpsBillingDetails getBillingDetails();

	/*! \brief Set 
	 */
	void setBillingDetails(VpsBillingDetails billingDetails);
	/*! \brief Get 
	 */
	std::string getCustCurrency();

	/*! \brief Set 
	 */
	void setCustCurrency(std::string custCurrency);
	/*! \brief Get 
	 */
	std::string getCustCurrencySymbol();

	/*! \brief Set 
	 */
	void setCustCurrencySymbol(std::string custCurrencySymbol);
	/*! \brief Get 
	 */
	VpsServiceMaster getServiceMaster();

	/*! \brief Set 
	 */
	void setServiceMaster(VpsServiceMaster serviceMaster);
	/*! \brief Get 
	 */
	std::string getPackage();

	/*! \brief Set 
	 */
	void setPackage(std::string package);
	/*! \brief Get 
	 */
	VpsServiceExtra getServiceExtra();

	/*! \brief Set 
	 */
	void setServiceExtra(VpsServiceExtra serviceExtra);
	/*! \brief Get 
	 */
	VpsExtraInfoTables getExtraInfoTables();

	/*! \brief Set 
	 */
	void setExtraInfoTables(VpsExtraInfoTables extraInfoTables);
	/*! \brief Get 
	 */
	std::string getModule();

	/*! \brief Set 
	 */
	void setModule(std::string module);
	/*! \brief Get 
	 */
	std::string getToken();

	/*! \brief Set 
	 */
	void setToken(std::string token);
	/*! \brief Get 
	 */
	int getDaLink();

	/*! \brief Set 
	 */
	void setDaLink(int da_link);
	/*! \brief Get 
	 */
	int getSrLink();

	/*! \brief Set 
	 */
	void setSrLink(int sr_link);
	/*! \brief Get 
	 */
	VpsCPData getCpData();

	/*! \brief Set 
	 */
	void setCpData(VpsCPData cp_data);
	/*! \brief Get 
	 */
	VpsDAData getDaData();

	/*! \brief Set 
	 */
	void setDaData(VpsDAData da_data);
	/*! \brief Get 
	 */
	VpsPlesk12Data getPlesk12Data();

	/*! \brief Set 
	 */
	void setPlesk12Data(VpsPlesk12Data plesk12_data);
	/*! \brief Get 
	 */
	VpsServiceAddons getServiceAddons();

	/*! \brief Set 
	 */
	void setServiceAddons(VpsServiceAddons serviceAddons);
	/*! \brief Get 
	 */
	std::string getOsTemplate();

	/*! \brief Set 
	 */
	void setOsTemplate(std::string os_template);
	/*! \brief Get 
	 */
	AnyType getCpuGraphData();

	/*! \brief Set 
	 */
	void setCpuGraphData(AnyType cpu_graph_data);


    private:
    VpsServiceInfo serviceInfo;
    std::list<VpsClientLink> client_links;
    VpsBillingDetails billingDetails;
    std::string custCurrency{};
    std::string custCurrencySymbol{};
    VpsServiceMaster serviceMaster;
    std::string package{};
    VpsServiceExtra serviceExtra;
    VpsExtraInfoTables extraInfoTables;
    std::string module{};
    std::string token{};
    int da_link{};
    int sr_link{};
    VpsCPData cp_data;
    VpsDAData da_data;
    VpsPlesk12Data plesk12_data;
    VpsServiceAddons serviceAddons;
    std::string os_template{};
    AnyType cpu_graph_data;
};
}

#endif /* TINY_CPP_CLIENT_Vps_H_ */
