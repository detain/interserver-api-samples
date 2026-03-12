
/*
 * ReplyTicketResponseSchema.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_ReplyTicketResponseSchema_H_
#define TINY_CPP_CLIENT_ReplyTicketResponseSchema_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class ReplyTicketResponseSchema{
public:

    /*! \brief Constructor.
	 */
    ReplyTicketResponseSchema();
    ReplyTicketResponseSchema(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ReplyTicketResponseSchema();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	bool isSuccess();

	/*! \brief Set 
	 */
	void setSuccess(bool success);
	/*! \brief Get 
	 */
	int getPostId();

	/*! \brief Set 
	 */
	void setPostId(int post_id);


    private:
    bool success{};
    int post_id{};
};
}

#endif /* TINY_CPP_CLIENT_ReplyTicketResponseSchema_H_ */
