/*
 * AccountSshKey.h
 *
 * SSH Keys
 */

#ifndef _AccountSshKey_H_
#define _AccountSshKey_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief SSH Keys
 *
 *  \ingroup Models
 *
 */

class AccountSshKey : public Object {
public:
	/*! \brief Constructor.
	 */
	AccountSshKey();
	AccountSshKey(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AccountSshKey();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getSshKey();

	/*! \brief Set 
	 */
	void setSshKey(std::string  ssh_key);

private:
	std::string ssh_key;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AccountSshKey_H_ */
