
/*
 * ServerOrder_cp_li.h
 *
 * Control Panel options for the server order.
 */

#ifndef TINY_CPP_CLIENT_ServerOrder_cp_li_H_
#define TINY_CPP_CLIENT_ServerOrder_cp_li_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "ServerOrderControlPanel.h"

namespace Tiny {


/*! \brief Control Panel options for the server order.
 *
 *  \ingroup Models
 *
 */

class ServerOrder_cp_li{
public:

    /*! \brief Constructor.
	 */
    ServerOrder_cp_li();
    ServerOrder_cp_li(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerOrder_cp_li();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	ServerOrderControlPanel get9();

	/*! \brief Set 
	 */
	void set9(ServerOrderControlPanel 9);


    private:
    ServerOrderControlPanel 9;
};
}

#endif /* TINY_CPP_CLIENT_ServerOrder_cp_li_H_ */
