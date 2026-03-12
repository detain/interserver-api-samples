
/*
 * LoginErrorResponse.h
 *
 * Error resposne during login indicating further action.
 */

#ifndef TINY_CPP_CLIENT_LoginErrorResponse_H_
#define TINY_CPP_CLIENT_LoginErrorResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Error resposne during login indicating further action.
 *
 *  \ingroup Models
 *
 */

class LoginErrorResponse{
public:

    /*! \brief Constructor.
	 */
    LoginErrorResponse();
    LoginErrorResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~LoginErrorResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getMessage();

	/*! \brief Set 
	 */
	void setMessage(std::string message);
	/*! \brief Get 
	 */
	std::string getField();

	/*! \brief Set 
	 */
	void setField(std::string field);


    private:
    std::string message{};
    std::string field{};
};
}

#endif /* TINY_CPP_CLIENT_LoginErrorResponse_H_ */
