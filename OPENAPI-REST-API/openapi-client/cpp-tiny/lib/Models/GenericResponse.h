
/*
 * GenericResponse.h
 *
 * Generic Response
 */

#ifndef TINY_CPP_CLIENT_GenericResponse_H_
#define TINY_CPP_CLIENT_GenericResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Generic Response
 *
 *  \ingroup Models
 *
 */

class GenericResponse{
public:

    /*! \brief Constructor.
	 */
    GenericResponse();
    GenericResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~GenericResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getStatus();

	/*! \brief Set 
	 */
	void setStatus(std::string status);
	/*! \brief Get 
	 */
	std::string getText();

	/*! \brief Set 
	 */
	void setText(std::string text);


    private:
    std::string status{};
    std::string text{};
};
}

#endif /* TINY_CPP_CLIENT_GenericResponse_H_ */
