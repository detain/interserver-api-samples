/*
 * EnableScrub_200_response.h
 *
 * 
 */

#ifndef _EnableScrub_200_response_H_
#define _EnableScrub_200_response_H_


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

class EnableScrub_200_response : public Object {
public:
	/*! \brief Constructor.
	 */
	EnableScrub_200_response();
	EnableScrub_200_response(char* str);

	/*! \brief Destructor.
	 */
	virtual ~EnableScrub_200_response();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	bool getSuccess();

	/*! \brief Set 
	 */
	void setSuccess(bool  success);
	/*! \brief Get 
	 */
	std::string getText();

	/*! \brief Set 
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

#endif /* _EnableScrub_200_response_H_ */
