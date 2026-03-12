
/*
 * GetAccountInfo_401_response.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_GetAccountInfo_401_response_H_
#define TINY_CPP_CLIENT_GetAccountInfo_401_response_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class GetAccountInfo_401_response{
public:

    /*! \brief Constructor.
	 */
    GetAccountInfo_401_response();
    GetAccountInfo_401_response(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~GetAccountInfo_401_response();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getCode();

	/*! \brief Set 
	 */
	void setCode(int code);
	/*! \brief Get 
	 */
	std::string getMessage();

	/*! \brief Set 
	 */
	void setMessage(std::string message);


    private:
    int code{};
    std::string message{};
};
}

#endif /* TINY_CPP_CLIENT_GetAccountInfo_401_response_H_ */
