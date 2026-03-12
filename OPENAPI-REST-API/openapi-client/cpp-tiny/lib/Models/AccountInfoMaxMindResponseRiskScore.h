
/*
 * AccountInfoMaxMindResponse_riskScore.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_AccountInfoMaxMindResponse_riskScore_H_
#define TINY_CPP_CLIENT_AccountInfoMaxMindResponse_riskScore_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class AccountInfoMaxMindResponse_riskScore{
public:

    /*! \brief Constructor.
	 */
    AccountInfoMaxMindResponse_riskScore();
    AccountInfoMaxMindResponse_riskScore(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~AccountInfoMaxMindResponse_riskScore();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_AccountInfoMaxMindResponse_riskScore_H_ */
