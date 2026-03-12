
/*
 * TextResponse.h
 *
 * Text Response Object
 */

#ifndef TINY_CPP_CLIENT_TextResponse_H_
#define TINY_CPP_CLIENT_TextResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Text Response Object
 *
 *  \ingroup Models
 *
 */

class TextResponse{
public:

    /*! \brief Constructor.
	 */
    TextResponse();
    TextResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~TextResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Response text
	 */
	std::string getText();

	/*! \brief Set Response text
	 */
	void setText(std::string text);
	/*! \brief Get Response message
	 */
	std::string getMessage();

	/*! \brief Set Response message
	 */
	void setMessage(std::string message);


    private:
    std::string text{};
    std::string message{};
};
}

#endif /* TINY_CPP_CLIENT_TextResponse_H_ */
