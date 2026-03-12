
/*
 * QuickserversCancel_200_response.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_QuickserversCancel_200_response_H_
#define TINY_CPP_CLIENT_QuickserversCancel_200_response_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class QuickserversCancel_200_response{
public:

    /*! \brief Constructor.
	 */
    QuickserversCancel_200_response();
    QuickserversCancel_200_response(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~QuickserversCancel_200_response();


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
	std::string getText();

	/*! \brief Set 
	 */
	void setText(std::string text);


    private:
    bool success{};
    std::string text{};
};
}

#endif /* TINY_CPP_CLIENT_QuickserversCancel_200_response_H_ */
