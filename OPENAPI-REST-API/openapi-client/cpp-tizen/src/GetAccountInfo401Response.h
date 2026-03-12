/*
 * GetAccountInfo_401_response.h
 *
 * 
 */

#ifndef _GetAccountInfo_401_response_H_
#define _GetAccountInfo_401_response_H_


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

class GetAccountInfo_401_response : public Object {
public:
	/*! \brief Constructor.
	 */
	GetAccountInfo_401_response();
	GetAccountInfo_401_response(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GetAccountInfo_401_response();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getCode();

	/*! \brief Set 
	 */
	void setCode(int  code);
	/*! \brief Get 
	 */
	std::string getMessage();

	/*! \brief Set 
	 */
	void setMessage(std::string  message);

private:
	int code;
	std::string message;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GetAccountInfo_401_response_H_ */
