
/*
 * SuccessTextResponse.h
 *
 * Response with success flag and text description.
 */

#ifndef TINY_CPP_CLIENT_SuccessTextResponse_H_
#define TINY_CPP_CLIENT_SuccessTextResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Response with success flag and text description.
 *
 *  \ingroup Models
 *
 */

class SuccessTextResponse{
public:

    /*! \brief Constructor.
	 */
    SuccessTextResponse();
    SuccessTextResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~SuccessTextResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Indicates whether or not the command was successful or not.
	 */
	bool isSuccess();

	/*! \brief Set Indicates whether or not the command was successful or not.
	 */
	void setSuccess(bool success);
	/*! \brief Get Text associated with the response.
	 */
	std::string getText();

	/*! \brief Set Text associated with the response.
	 */
	void setText(std::string text);
	/*! \brief Get Optional Action relating to the response.
	 */
	std::string getAction();

	/*! \brief Set Optional Action relating to the response.
	 */
	void setAction(std::string action);


    private:
    bool success{};
    std::string text{};
    std::string action{};
};
}

#endif /* TINY_CPP_CLIENT_SuccessTextResponse_H_ */
