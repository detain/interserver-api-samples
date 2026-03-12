
/*
 * Delete_Firewall_Rule.h
 *
 * Delete firewall rule for your ip
 */

#ifndef TINY_CPP_CLIENT_Delete_Firewall_Rule_H_
#define TINY_CPP_CLIENT_Delete_Firewall_Rule_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Delete firewall rule for your ip
 *
 *  \ingroup Models
 *
 */

class Delete_Firewall_Rule{
public:

    /*! \brief Constructor.
	 */
    Delete_Firewall_Rule();
    Delete_Firewall_Rule(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Delete_Firewall_Rule();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getRuleId();

	/*! \brief Set 
	 */
	void setRuleId(int rule_id);


    private:
    int rule_id{};
};
}

#endif /* TINY_CPP_CLIENT_Delete_Firewall_Rule_H_ */
