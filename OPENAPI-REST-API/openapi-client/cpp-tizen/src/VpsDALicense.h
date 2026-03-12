/*
 * VpsDALicense.h
 *
 * A DirectAdmin license tier option.
 */

#ifndef _VpsDALicense_H_
#define _VpsDALicense_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A DirectAdmin license tier option.
 *
 *  \ingroup Models
 *
 */

class VpsDALicense : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsDALicense();
	VpsDALicense(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsDALicense();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get License tier name.
	 */
	std::string getName();

	/*! \brief Set License tier name.
	 */
	void setName(std::string  name);
	/*! \brief Get License tier sub-name.
	 */
	std::string getSubName();

	/*! \brief Set License tier sub-name.
	 */
	void setSubName(std::string  sub_name);
	/*! \brief Get Monthly cost in cents.
	 */
	int getCost();

	/*! \brief Set Monthly cost in cents.
	 */
	void setCost(int  cost);
	/*! \brief Get Image path for the disabled state icon.
	 */
	std::string getImgDisabled();

	/*! \brief Set Image path for the disabled state icon.
	 */
	void setImgDisabled(std::string  img_disabled);
	/*! \brief Get Image path for the active state icon.
	 */
	std::string getImgActive();

	/*! \brief Set Image path for the active state icon.
	 */
	void setImgActive(std::string  img_active);

private:
	std::string name;
	std::string sub_name;
	int cost;
	std::string img_disabled;
	std::string img_active;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsDALicense_H_ */
