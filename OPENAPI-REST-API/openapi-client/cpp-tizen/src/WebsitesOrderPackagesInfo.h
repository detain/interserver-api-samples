/*
 * WebsitesOrderPackagesInfo.h
 *
 * 
 */

#ifndef _WebsitesOrderPackagesInfo_H_
#define _WebsitesOrderPackagesInfo_H_


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

class WebsitesOrderPackagesInfo : public Object {
public:
	/*! \brief Constructor.
	 */
	WebsitesOrderPackagesInfo();
	WebsitesOrderPackagesInfo(char* str);

	/*! \brief Destructor.
	 */
	virtual ~WebsitesOrderPackagesInfo();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The ID of the package.
	 */
	std::string getServicesId();

	/*! \brief Set The ID of the package.
	 */
	void setServicesId(std::string  services_id);
	/*! \brief Get The name of the package.
	 */
	std::string getServicesName();

	/*! \brief Set The name of the package.
	 */
	void setServicesName(std::string  services_name);
	/*! \brief Get The cost of the package.
	 */
	std::string getServicesCost();

	/*! \brief Set The cost of the package.
	 */
	void setServicesCost(std::string  services_cost);
	/*! \brief Get The category of the package.
	 */
	std::string getServicesCategory();

	/*! \brief Set The category of the package.
	 */
	void setServicesCategory(std::string  services_category);
	/*! \brief Get Indicates if the package is buyable (1 for yes, 0 for no).
	 */
	std::string getServicesBuyable();

	/*! \brief Set Indicates if the package is buyable (1 for yes, 0 for no).
	 */
	void setServicesBuyable(std::string  services_buyable);
	/*! \brief Get The type of the package.
	 */
	std::string getServicesType();

	/*! \brief Set The type of the package.
	 */
	void setServicesType(std::string  services_type);
	/*! \brief Get The module of the package.
	 */
	std::string getServicesModule();

	/*! \brief Set The module of the package.
	 */
	void setServicesModule(std::string  services_module);
	/*! \brief Get Description of the package.
	 */
	std::string getServicesDescription();

	/*! \brief Set Description of the package.
	 */
	void setServicesDescription(std::string  services_description);
	/*! \brief Get Additional field 1 for the package.
	 */
	std::string getServicesField1();

	/*! \brief Set Additional field 1 for the package.
	 */
	void setServicesField1(std::string  services_field1);
	/*! \brief Get Additional field 2 for the package.
	 */
	std::string getServicesField2();

	/*! \brief Set Additional field 2 for the package.
	 */
	void setServicesField2(std::string  services_field2);
	/*! \brief Get HTML content for the package.
	 */
	std::string getServicesHtml();

	/*! \brief Set HTML content for the package.
	 */
	void setServicesHtml(std::string  services_html);
	/*! \brief Get URL for more information about the package.
	 */
	std::string getServicesMoreinfoUrl();

	/*! \brief Set URL for more information about the package.
	 */
	void setServicesMoreinfoUrl(std::string  services_moreinfo_url);
	/*! \brief Get Indicates if the package is hidden (1 for yes, 0 for no).
	 */
	std::string getServicesHidden();

	/*! \brief Set Indicates if the package is hidden (1 for yes, 0 for no).
	 */
	void setServicesHidden(std::string  services_hidden);

private:
	std::string services_id;
	std::string services_name;
	std::string services_cost;
	std::string services_category;
	std::string services_buyable;
	std::string services_type;
	std::string services_module;
	std::string services_description;
	std::string services_field1;
	std::string services_field2;
	std::string services_html;
	std::string services_moreinfo_url;
	std::string services_hidden;
	void __init();
	void __cleanup();

};
}
}

#endif /* _WebsitesOrderPackagesInfo_H_ */
