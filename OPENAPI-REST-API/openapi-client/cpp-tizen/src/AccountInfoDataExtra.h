/*
 * AccountInfoData_extra.h
 *
 * 
 */

#ifndef _AccountInfoData_extra_H_
#define _AccountInfoData_extra_H_


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

class AccountInfoData_extra : public Object {
public:
	/*! \brief Constructor.
	 */
	AccountInfoData_extra();
	AccountInfoData_extra(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AccountInfoData_extra();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getPrivateWhois();

	/*! \brief Set 
	 */
	void setPrivateWhois(std::string  private_whois);

private:
	std::string private_whois;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AccountInfoData_extra_H_ */
