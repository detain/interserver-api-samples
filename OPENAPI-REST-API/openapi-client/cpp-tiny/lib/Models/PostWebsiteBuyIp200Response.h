
/*
 * PostWebsiteBuyIp_200_response.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_PostWebsiteBuyIp_200_response_H_
#define TINY_CPP_CLIENT_PostWebsiteBuyIp_200_response_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class PostWebsiteBuyIp_200_response{
public:

    /*! \brief Constructor.
	 */
    PostWebsiteBuyIp_200_response();
    PostWebsiteBuyIp_200_response(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PostWebsiteBuyIp_200_response();


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
	bool isSuccess();

	/*! \brief Set 
	 */
	void setSuccess(bool success);


    private:
    std::string message{};
    bool success{};
};
}

#endif /* TINY_CPP_CLIENT_PostWebsiteBuyIp_200_response_H_ */
