/*
 * UrlRequest.h
 *
 * URL
 */

#ifndef _UrlRequest_H_
#define _UrlRequest_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief URL
 *
 *  \ingroup Models
 *
 */

class UrlRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	UrlRequest();
	UrlRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~UrlRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getUrl();

	/*! \brief Set 
	 */
	void setUrl(std::string  url);

private:
	std::string url;
	void __init();
	void __cleanup();

};
}
}

#endif /* _UrlRequest_H_ */
