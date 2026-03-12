
/*
 * TemplateRequest.h
 *
 * VPS OS Template Request
 */

#ifndef TINY_CPP_CLIENT_TemplateRequest_H_
#define TINY_CPP_CLIENT_TemplateRequest_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief VPS OS Template Request
 *
 *  \ingroup Models
 *
 */

class TemplateRequest{
public:

    /*! \brief Constructor.
	 */
    TemplateRequest();
    TemplateRequest(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~TemplateRequest();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get OS Template Filename
	 */
	std::string getRTemplate();

	/*! \brief Set OS Template Filename
	 */
	void setRTemplate(std::string r_template);
	/*! \brief Get Password for this account.
	 */
	std::string getLocalPassword();

	/*! \brief Set Password for this account.
	 */
	void setLocalPassword(std::string localPassword);
	/*! \brief Get Password for Root / Administrator Account.
	 */
	std::string getPassword();

	/*! \brief Set Password for Root / Administrator Account.
	 */
	void setPassword(std::string password);


    private:
    std::string r_template{};
    std::string localPassword{};
    std::string password{};
};
}

#endif /* TINY_CPP_CLIENT_TemplateRequest_H_ */
