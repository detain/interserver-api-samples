/*
 * OperatingSystem.h
 *
 * An operating system option available for server provisioning.
 */

#ifndef _OperatingSystem_H_
#define _OperatingSystem_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief An operating system option available for server provisioning.
 *
 *  \ingroup Models
 *
 */

class OperatingSystem : public Object {
public:
	/*! \brief Constructor.
	 */
	OperatingSystem();
	OperatingSystem(char* str);

	/*! \brief Destructor.
	 */
	virtual ~OperatingSystem();

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
	std::string getShortDesc();

	/*! \brief Set 
	 */
	void setShortDesc(std::string  short_desc);
	/*! \brief Get 
	 */
	long long getMonthlyPrice();

	/*! \brief Set 
	 */
	void setMonthlyPrice(long long  monthly_price);

private:
	int id;
	std::string short_desc;
	long long monthly_price;
	void __init();
	void __cleanup();

};
}
}

#endif /* _OperatingSystem_H_ */
