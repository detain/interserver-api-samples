
/*
 * Invoice.h
 *
 * An invoice record
 */

#ifndef TINY_CPP_CLIENT_Invoice_H_
#define TINY_CPP_CLIENT_Invoice_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief An invoice record
 *
 *  \ingroup Models
 *
 */

class Invoice{
public:

    /*! \brief Constructor.
	 */
    Invoice();
    Invoice(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Invoice();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	long getId();

	/*! \brief Set 
	 */
	void setId(long id);


    private:
    long id{};
};
}

#endif /* TINY_CPP_CLIENT_Invoice_H_ */
