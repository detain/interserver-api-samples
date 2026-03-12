
/*
 * WebsiteLoginResponse.h
 *
 * Response from a website login request.
 */

#ifndef TINY_CPP_CLIENT_WebsiteLoginResponse_H_
#define TINY_CPP_CLIENT_WebsiteLoginResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Response from a website login request.
 *
 *  \ingroup Models
 *
 */

class WebsiteLoginResponse{
public:

    /*! \brief Constructor.
	 */
    WebsiteLoginResponse();
    WebsiteLoginResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~WebsiteLoginResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getType();

	/*! \brief Set 
	 */
	void setType(std::string type);
	/*! \brief Get 
	 */
	std::string getLocation();

	/*! \brief Set 
	 */
	void setLocation(std::string location);


    private:
    std::string type{};
    std::string location{};
};
}

#endif /* TINY_CPP_CLIENT_WebsiteLoginResponse_H_ */
