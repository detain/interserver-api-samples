/*
 * BackupLoginResponse.h
 *
 * Login session response for backup storage.
 */

#ifndef _BackupLoginResponse_H_
#define _BackupLoginResponse_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Login session response for backup storage.
 *
 *  \ingroup Models
 *
 */

class BackupLoginResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	BackupLoginResponse();
	BackupLoginResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BackupLoginResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Indicates whether a login session was created.
	 */
	bool getSuccess();

	/*! \brief Set Indicates whether a login session was created.
	 */
	void setSuccess(bool  success);
	/*! \brief Get Login URL or error text returned by the storage provider.
	 */
	std::string getText();

	/*! \brief Set Login URL or error text returned by the storage provider.
	 */
	void setText(std::string  text);

private:
	bool success;
	std::string text;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BackupLoginResponse_H_ */
