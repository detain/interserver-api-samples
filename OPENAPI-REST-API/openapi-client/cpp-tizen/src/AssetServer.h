/*
 * AssetServer.h
 *
 * A pre-configured asset server available for immediate provisioning.
 */

#ifndef _AssetServer_H_
#define _AssetServer_H_


#include <string>
#include "AssetServer_CPU_inner.h"
#include <list>
#include <map>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A pre-configured asset server available for immediate provisioning.
 *
 *  \ingroup Models
 *
 */

class AssetServer : public Object {
public:
	/*! \brief Constructor.
	 */
	AssetServer();
	AssetServer(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AssetServer();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getId();

	/*! \brief Set 
	 */
	void setId(int  id);
	/*! \brief Get 
	 */
	std::string getRegion();

	/*! \brief Set 
	 */
	void setRegion(std::string  region);
	/*! \brief Get 
	 */
	std::string getPrice();

	/*! \brief Set 
	 */
	void setPrice(std::string  price);
	/*! \brief Get 
	 */
	std::list<AssetServer_CPU_inner> getCPU();

	/*! \brief Set 
	 */
	void setCPU(std::list <AssetServer_CPU_inner> cPU);
	/*! \brief Get 
	 */
	std::list<AssetServer_CPU_inner> getMemory();

	/*! \brief Set 
	 */
	void setMemory(std::list <AssetServer_CPU_inner> memory);
	/*! \brief Get 
	 */
	std::list<AssetServer_CPU_inner> getBandwidth();

	/*! \brief Set 
	 */
	void setBandwidth(std::list <AssetServer_CPU_inner> bandwidth);
	/*! \brief Get 
	 */
	std::list<AssetServer_CPU_inner> getIPs();

	/*! \brief Set 
	 */
	void setIPs(std::list <AssetServer_CPU_inner> iPs);
	/*! \brief Get 
	 */
	std::map<std::string, std::string> getHD();

	/*! \brief Set 
	 */
	void setHD(std::map <std::string, std::string> hD);

private:
	int id;
	std::string region;
	std::string price;
	std::list <AssetServer_CPU_inner>cPU;
	std::list <AssetServer_CPU_inner>memory;
	std::list <AssetServer_CPU_inner>bandwidth;
	std::list <AssetServer_CPU_inner>iPs;
	std::map <std::string, std::string>hD;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AssetServer_H_ */
