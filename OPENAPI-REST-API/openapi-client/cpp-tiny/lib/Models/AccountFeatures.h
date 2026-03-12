
/*
 * AccountFeatures.h
 *
 * Account Features data.
 */

#ifndef TINY_CPP_CLIENT_AccountFeatures_H_
#define TINY_CPP_CLIENT_AccountFeatures_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Account Features data.
 *
 *  \ingroup Models
 *
 */

class AccountFeatures{
public:

    /*! \brief Constructor.
	 */
    AccountFeatures();
    AccountFeatures(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~AccountFeatures();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getDisableReset();

	/*! \brief Set 
	 */
	void setDisableReset(int disable_reset);
	/*! \brief Get 
	 */
	int getDisableReinstall();

	/*! \brief Set 
	 */
	void setDisableReinstall(int disable_reinstall);


    private:
    int disable_reset{};
    int disable_reinstall{};
};
}

#endif /* TINY_CPP_CLIENT_AccountFeatures_H_ */
