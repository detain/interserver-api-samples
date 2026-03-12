
/*
 * ServersBuyNowError.h
 *
 * Error response when a buy-it-now server order fails validation.
 */

#ifndef TINY_CPP_CLIENT_ServersBuyNowError_H_
#define TINY_CPP_CLIENT_ServersBuyNowError_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include <list>

namespace Tiny {


/*! \brief Error response when a buy-it-now server order fails validation.
 *
 *  \ingroup Models
 *
 */

class ServersBuyNowError{
public:

    /*! \brief Constructor.
	 */
    ServersBuyNowError();
    ServersBuyNowError(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServersBuyNowError();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Always false for error responses.
	 */
	bool isSuccess();

	/*! \brief Set Always false for error responses.
	 */
	void setSuccess(bool success);
	/*! \brief Get Human-readable error summary.
	 */
	std::string getText();

	/*! \brief Set Human-readable error summary.
	 */
	void setText(std::string text);
	/*! \brief Get List of specific validation error messages.
	 */
	std::list<std::string> getErrors();

	/*! \brief Set List of specific validation error messages.
	 */
	void setErrors(std::list<std::string> errors);


    private:
    bool success{};
    std::string text{};
    std::list<std::string> errors;
};
}

#endif /* TINY_CPP_CLIENT_ServersBuyNowError_H_ */
