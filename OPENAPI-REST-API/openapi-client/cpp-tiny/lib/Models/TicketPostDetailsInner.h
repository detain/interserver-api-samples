
/*
 * TicketPostDetails_inner.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_TicketPostDetails_inner_H_
#define TINY_CPP_CLIENT_TicketPostDetails_inner_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class TicketPostDetails_inner{
public:

    /*! \brief Constructor.
	 */
    TicketPostDetails_inner();
    TicketPostDetails_inner(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~TicketPostDetails_inner();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getPostId();

	/*! \brief Set 
	 */
	void setPostId(int post_id);
	/*! \brief Get 
	 */
	std::string getDate();

	/*! \brief Set 
	 */
	void setDate(std::string date);
	/*! \brief Get 
	 */
	std::string getContents();

	/*! \brief Set 
	 */
	void setContents(std::string contents);
	/*! \brief Get 
	 */
	std::string getCreator();

	/*! \brief Set 
	 */
	void setCreator(std::string creator);
	/*! \brief Get 
	 */
	std::string getCreatorEmail();

	/*! \brief Set 
	 */
	void setCreatorEmail(std::string creator_email);
	/*! \brief Get 
	 */
	std::string getCreatorName();

	/*! \brief Set 
	 */
	void setCreatorName(std::string creator_name);
	/*! \brief Get 
	 */
	int getHasattachments();

	/*! \brief Set 
	 */
	void setHasattachments(int hasattachments);
	/*! \brief Get 
	 */
	std::string getAttachmentDownload();

	/*! \brief Set 
	 */
	void setAttachmentDownload(std::string attachment_download);


    private:
    int post_id{};
    std::string date{};
    std::string contents{};
    std::string creator{};
    std::string creator_email{};
    std::string creator_name{};
    int hasattachments{};
    std::string attachment_download{};
};
}

#endif /* TINY_CPP_CLIENT_TicketPostDetails_inner_H_ */
