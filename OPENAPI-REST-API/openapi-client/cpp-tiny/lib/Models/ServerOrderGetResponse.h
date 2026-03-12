
/*
 * ServerOrderGetResponse.h
 *
 * Configuration options and pricing data returned when starting a dedicated server order.
 */

#ifndef TINY_CPP_CLIENT_ServerOrderGetResponse_H_
#define TINY_CPP_CLIENT_ServerOrderGetResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "AssetServer.h"
#include "ConfigIds.h"
#include "ConfigLists.h"
#include "Cpu.h"
#include "CpuWithDefaults.h"
#include "FieldLabel.h"
#include "FormValues.h"
#include "Object.h"
#include "Region.h"
#include <list>
#include <map>

namespace Tiny {


/*! \brief Configuration options and pricing data returned when starting a dedicated server order.
 *
 *  \ingroup Models
 *
 */

class ServerOrderGetResponse{
public:

    /*! \brief Constructor.
	 */
    ServerOrderGetResponse();
    ServerOrderGetResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerOrderGetResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	FormValues getFormValues();

	/*! \brief Set 
	 */
	void setFormValues(FormValues form_values);
	/*! \brief Get 
	 */
	ConfigIds getConfigIds();

	/*! \brief Set 
	 */
	void setConfigIds(ConfigIds config_ids);
	/*! \brief Get 
	 */
	int getCpu();

	/*! \brief Set 
	 */
	void setCpu(int cpu);
	/*! \brief Get 
	 */
	std::map<std::string, Cpu> getCpuLi();

	/*! \brief Set 
	 */
	void setCpuLi(std::map<std::string, Cpu> cpu_li);
	/*! \brief Get 
	 */
	ConfigLists getConfigLi();

	/*! \brief Set 
	 */
	void setConfigLi(ConfigLists config_li);
	/*! \brief Get 
	 */
	int getFrequency();

	/*! \brief Set 
	 */
	void setFrequency(int frequency);
	/*! \brief Get 
	 */
	std::string getCurrency();

	/*! \brief Set 
	 */
	void setCurrency(std::string currency);
	/*! \brief Get 
	 */
	std::string getCountry();

	/*! \brief Set 
	 */
	void setCountry(std::string country);
	/*! \brief Get 
	 */
	std::string getStep();

	/*! \brief Set 
	 */
	void setStep(std::string step);
	/*! \brief Get 
	 */
	std::map<std::string, FieldLabel> getFieldLabel();

	/*! \brief Set 
	 */
	void setFieldLabel(std::map<std::string, FieldLabel> field_label);
	/*! \brief Get 
	 */
	std::map<std::string, std::map<std::string, CpuWithDefaults>> getCpuCores();

	/*! \brief Set 
	 */
	void setCpuCores(std::map<std::string, std::map<std::string, CpuWithDefaults>> cpu_cores);
	/*! \brief Get 
	 */
	std::string getCurrencySymbol();

	/*! \brief Set 
	 */
	void setCurrencySymbol(std::string currencySymbol);
	/*! \brief Get 
	 */
	int getCustid();

	/*! \brief Set 
	 */
	void setCustid(int custid);
	/*! \brief Get 
	 */
	std::string getIma();

	/*! \brief Set 
	 */
	void setIma(std::string ima);
	/*! \brief Get 
	 */
	std::list<Region> getRegions();

	/*! \brief Set 
	 */
	void setRegions(std::list<Region> regions);
	/*! \brief Get 
	 */
	std::list<AssetServer> getAssetServers();

	/*! \brief Set 
	 */
	void setAssetServers(std::list<AssetServer> asset_servers);
	/*! \brief Get 
	 */
	std::list<Object> getBuyItServers();

	/*! \brief Set 
	 */
	void setBuyItServers(std::list<Object> buy_it_servers);
	/*! \brief Get 
	 */
	std::string getDisplayShowmore();

	/*! \brief Set 
	 */
	void setDisplayShowmore(std::string display_showmore);
	/*! \brief Get 
	 */
	long getCustDiscount();

	/*! \brief Set 
	 */
	void setCustDiscount(long cust_discount);


    private:
    FormValues form_values;
    ConfigIds config_ids;
    int cpu{};
    std::map<std::string, Cpu> cpu_li;
    ConfigLists config_li;
    int frequency{};
    std::string currency{};
    std::string country{};
    std::string step{};
    std::map<std::string, FieldLabel> field_label;
    std::map<std::string, std::map<std::string, CpuWithDefaults>> cpu_cores;
    std::string currencySymbol{};
    int custid{};
    std::string ima{};
    std::list<Region> regions;
    std::list<AssetServer> asset_servers;
    std::list<Object> buy_it_servers;
    std::string display_showmore{};
    long cust_discount{};
};
}

#endif /* TINY_CPP_CLIENT_ServerOrderGetResponse_H_ */
