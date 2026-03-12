
/*
 * LoginSuccessResponse.h
 *
 * The response from a successful login.
 */

#ifndef TINY_CPP_CLIENT_LoginSuccessResponse_H_
#define TINY_CPP_CLIENT_LoginSuccessResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief The response from a successful login.
 *
 *  \ingroup Models
 *
 */

class LoginSuccessResponse{
public:

    /*! \brief Constructor.
	 */
    LoginSuccessResponse();
    LoginSuccessResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~LoginSuccessResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getSessionId();

	/*! \brief Set 
	 */
	void setSessionId(std::string sessionId);
	/*! \brief Get 
	 */
	int getAccountId();

	/*! \brief Set 
	 */
	void setAccountId(int account_id);
	/*! \brief Get 
	 */
	std::string getAccountLid();

	/*! \brief Set 
	 */
	void setAccountLid(std::string account_lid);
	/*! \brief Get 
	 */
	std::string getIma();

	/*! \brief Set 
	 */
	void setIma(std::string ima);
	/*! \brief Get 
	 */
	std::string getGravatar();

	/*! \brief Set 
	 */
	void setGravatar(std::string gravatar);


    private:
    std::string sessionId{};
    int account_id{};
    std::string account_lid{};
    std::string ima{};
    std::string gravatar{};
};
}

#endif /* TINY_CPP_CLIENT_LoginSuccessResponse_H_ */
