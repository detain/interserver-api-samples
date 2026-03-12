
/*
 * Tickets_countArray.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Tickets_countArray_H_
#define TINY_CPP_CLIENT_Tickets_countArray_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Tickets_countArray{
public:

    /*! \brief Constructor.
	 */
    Tickets_countArray();
    Tickets_countArray(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Tickets_countArray();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getOpen();

	/*! \brief Set 
	 */
	void setOpen(int open);
	/*! \brief Get 
	 */
	int getOnHold();

	/*! \brief Set 
	 */
	void setOnHold(int onHold);
	/*! \brief Get 
	 */
	int getClosed();

	/*! \brief Set 
	 */
	void setClosed(int closed);


    private:
    int open{};
    int onHold{};
    int closed{};
};
}

#endif /* TINY_CPP_CLIENT_Tickets_countArray_H_ */
