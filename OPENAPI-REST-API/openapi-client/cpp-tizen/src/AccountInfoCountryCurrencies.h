/*
 * AccountInfoCountryCurrencies.h
 *
 * Maps country codes to their available currency options.
 */

#ifndef _AccountInfoCountryCurrencies_H_
#define _AccountInfoCountryCurrencies_H_


#include <string>
#include <list>
#include <map>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Maps country codes to their available currency options.
 *
 *  \ingroup Models
 *
 */

class AccountInfoCountryCurrencies : public Object {
public:
	/*! \brief Constructor.
	 */
	AccountInfoCountryCurrencies();
	AccountInfoCountryCurrencies(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AccountInfoCountryCurrencies();

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

#endif /* _AccountInfoCountryCurrencies_H_ */
