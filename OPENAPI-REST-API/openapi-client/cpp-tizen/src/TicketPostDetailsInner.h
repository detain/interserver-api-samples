/*
 * TicketPostDetails_inner.h
 *
 * 
 */

#ifndef _TicketPostDetails_inner_H_
#define _TicketPostDetails_inner_H_


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

class TicketPostDetails_inner : public Object {
public:
	/*! \brief Constructor.
	 */
	TicketPostDetails_inner();
	TicketPostDetails_inner(char* str);

	/*! \brief Destructor.
	 */
	virtual ~TicketPostDetails_inner();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getPostId();

	/*! \brief Set 
	 */
	void setPostId(int  post_id);
	/*! \brief Get 
	 */
	std::string getDate();

	/*! \brief Set 
	 */
	void setDate(std::string  date);
	/*! \brief Get 
	 */
	std::string getContents();

	/*! \brief Set 
	 */
	void setContents(std::string  contents);
	/*! \brief Get 
	 */
	std::string getCreator();

	/*! \brief Set 
	 */
	void setCreator(std::string  creator);
	/*! \brief Get 
	 */
	std::string getCreatorEmail();

	/*! \brief Set 
	 */
	void setCreatorEmail(std::string  creator_email);
	/*! \brief Get 
	 */
	std::string getCreatorName();

	/*! \brief Set 
	 */
	void setCreatorName(std::string  creator_name);
	/*! \brief Get 
	 */
	int getHasattachments();

	/*! \brief Set 
	 */
	void setHasattachments(int  hasattachments);
	/*! \brief Get 
	 */
	std::string getAttachmentDownload();

	/*! \brief Set 
	 */
	void setAttachmentDownload(std::string  attachment_download);

private:
	int post_id;
	std::string date;
	std::string contents;
	std::string creator;
	std::string creator_email;
	std::string creator_name;
	int hasattachments;
	std::string attachment_download;
	void __init();
	void __cleanup();

};
}
}

#endif /* _TicketPostDetails_inner_H_ */
