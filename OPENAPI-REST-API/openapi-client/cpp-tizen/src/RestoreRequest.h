/*
 * RestoreRequest.h
 *
 * Request data to trigger a restore from backup.
 */

#ifndef _RestoreRequest_H_
#define _RestoreRequest_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Request data to trigger a restore from backup.
 *
 *  \ingroup Models
 *
 */

class RestoreRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	RestoreRequest();
	RestoreRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~RestoreRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getBackup();

	/*! \brief Set 
	 */
	void setBackup(std::string  backup);
	/*! \brief Get 
	 */
	std::string getPassword();

	/*! \brief Set 
	 */
	void setPassword(std::string  password);

private:
	std::string backup;
	std::string password;
	void __init();
	void __cleanup();

};
}
}

#endif /* _RestoreRequest_H_ */
