/*
 * PostWebsiteMigration_200_response.h
 *
 * 
 */

#ifndef _PostWebsiteMigration_200_response_H_
#define _PostWebsiteMigration_200_response_H_


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

class PostWebsiteMigration_200_response : public Object {
public:
	/*! \brief Constructor.
	 */
	PostWebsiteMigration_200_response();
	PostWebsiteMigration_200_response(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PostWebsiteMigration_200_response();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Confirmation message.
	 */
	std::string getText();

	/*! \brief Set Confirmation message.
	 */
	void setText(std::string  text);
	/*! \brief Get The support ticket ID created for tracking the migration. Use this with `/tickets/{id}` to check migration progress.
	 */
	int getTicket();

	/*! \brief Set The support ticket ID created for tracking the migration. Use this with `/tickets/{id}` to check migration progress.
	 */
	void setTicket(int  ticket);

private:
	std::string text;
	int ticket;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PostWebsiteMigration_200_response_H_ */
