
/*
 * InvoiceRow.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_InvoiceRow_H_
#define TINY_CPP_CLIENT_InvoiceRow_H_


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

class InvoiceRow{
public:

    /*! \brief Constructor.
	 */
    InvoiceRow();
    InvoiceRow(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~InvoiceRow();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_InvoiceRow_H_ */
