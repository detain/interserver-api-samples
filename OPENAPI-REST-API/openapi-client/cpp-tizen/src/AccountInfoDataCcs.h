/*
 * AccountInfoDataCcs.h
 *
 * Collection of credit cards on the account, keyed by card ID.
 */

#ifndef _AccountInfoDataCcs_H_
#define _AccountInfoDataCcs_H_


#include <string>
#include "AccountInfoDataCc.h"
#include <map>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Collection of credit cards on the account, keyed by card ID.
 *
 *  \ingroup Models
 *
 */

class AccountInfoDataCcs : public Object {
public:
	/*! \brief Constructor.
	 */
	AccountInfoDataCcs();
	AccountInfoDataCcs(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AccountInfoDataCcs();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);


private:
	void __init();
	void __cleanup();

};
}
}

#endif /* _AccountInfoDataCcs_H_ */
