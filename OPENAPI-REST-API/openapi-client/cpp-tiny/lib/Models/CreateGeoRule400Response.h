
/*
 * CreateGeoRule_400_response.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_CreateGeoRule_400_response_H_
#define TINY_CPP_CLIENT_CreateGeoRule_400_response_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class CreateGeoRule_400_response{
public:

    /*! \brief Constructor.
	 */
    CreateGeoRule_400_response();
    CreateGeoRule_400_response(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~CreateGeoRule_400_response();


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
	/*! \brief Get 
	 */
	std::list<std::string> getErrors();

	/*! \brief Set 
	 */
	void setErrors(std::list<std::string> errors);


    private:
    bool success{};
    std::string text{};
    std::list<std::string> errors;
};
}

#endif /* TINY_CPP_CLIENT_CreateGeoRule_400_response_H_ */
