
/*
 * AccountInfoData_fraudrecord.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_AccountInfoData_fraudrecord_H_
#define TINY_CPP_CLIENT_AccountInfoData_fraudrecord_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class AccountInfoData_fraudrecord{
public:

    /*! \brief Constructor.
	 */
    AccountInfoData_fraudrecord();
    AccountInfoData_fraudrecord(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~AccountInfoData_fraudrecord();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getScore();

	/*! \brief Set 
	 */
	void setScore(std::string score);
	/*! \brief Get 
	 */
	std::string getCount();

	/*! \brief Set 
	 */
	void setCount(std::string count);
	/*! \brief Get 
	 */
	std::string getReliability();

	/*! \brief Set 
	 */
	void setReliability(std::string reliability);
	/*! \brief Get 
	 */
	std::string getCode();

	/*! \brief Set 
	 */
	void setCode(std::string code);


    private:
    std::string score{};
    std::string count{};
    std::string reliability{};
    std::string code{};
};
}

#endif /* TINY_CPP_CLIENT_AccountInfoData_fraudrecord_H_ */
