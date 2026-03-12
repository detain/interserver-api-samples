
/*
 * AccountInfoLimits_inner.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_AccountInfoLimits_inner_H_
#define TINY_CPP_CLIENT_AccountInfoLimits_inner_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class AccountInfoLimits_inner{
public:

    /*! \brief Constructor.
	 */
    AccountInfoLimits_inner();
    AccountInfoLimits_inner(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~AccountInfoLimits_inner();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getStart();

	/*! \brief Set 
	 */
	void setStart(std::string start);
	/*! \brief Get 
	 */
	std::string getEnd();

	/*! \brief Set 
	 */
	void setEnd(std::string end);


    private:
    std::string start{};
    std::string end{};
};
}

#endif /* TINY_CPP_CLIENT_AccountInfoLimits_inner_H_ */
