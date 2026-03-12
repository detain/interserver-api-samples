/*
 * VpsCPData.h
 *
 * Control panel license options available for a VPS.
 */

#ifndef _VpsCPData_H_
#define _VpsCPData_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Control panel license options available for a VPS.
 *
 *  \ingroup Models
 *
 */

class VpsCPData : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsCPData();
	VpsCPData(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsCPData();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Control panel name (e.g., cPanel).
	 */
	std::string getName();

	/*! \brief Set Control panel name (e.g., cPanel).
	 */
	void setName(std::string  name);
	/*! \brief Get Monthly cost in cents for the control panel license.
	 */
	int getCost();

	/*! \brief Set Monthly cost in cents for the control panel license.
	 */
	void setCost(int  cost);

private:
	std::string name;
	int cost;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsCPData_H_ */
