
/*
 * UpdateTicketResponseSchema.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_UpdateTicketResponseSchema_H_
#define TINY_CPP_CLIENT_UpdateTicketResponseSchema_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class UpdateTicketResponseSchema{
public:

    /*! \brief Constructor.
	 */
    UpdateTicketResponseSchema();
    UpdateTicketResponseSchema(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~UpdateTicketResponseSchema();


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
	std::string getMessage();

	/*! \brief Set 
	 */
	void setMessage(std::string message);


    private:
    bool success{};
    std::string message{};
};
}

#endif /* TINY_CPP_CLIENT_UpdateTicketResponseSchema_H_ */
