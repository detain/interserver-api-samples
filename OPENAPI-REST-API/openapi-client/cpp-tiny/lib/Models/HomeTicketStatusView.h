
/*
 * Home_ticketStatusView.h
 *
 * Ticket statuses with view numbers.
 */

#ifndef TINY_CPP_CLIENT_Home_ticketStatusView_H_
#define TINY_CPP_CLIENT_Home_ticketStatusView_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Ticket statuses with view numbers.
 *
 *  \ingroup Models
 *
 */

class Home_ticketStatusView{
public:

    /*! \brief Constructor.
	 */
    Home_ticketStatusView();
    Home_ticketStatusView(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Home_ticketStatusView();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Status corresponding to view number 4.
	 */
	std::string get4();

	/*! \brief Set Status corresponding to view number 4.
	 */
	void set4(std::string 4);
	/*! \brief Get Status corresponding to view number 5.
	 */
	std::string get5();

	/*! \brief Set Status corresponding to view number 5.
	 */
	void set5(std::string 5);
	/*! \brief Get Status corresponding to view number 6.
	 */
	std::string get6();

	/*! \brief Set Status corresponding to view number 6.
	 */
	void set6(std::string 6);


    private:
    std::string 4{};
    std::string 5{};
    std::string 6{};
};
}

#endif /* TINY_CPP_CLIENT_Home_ticketStatusView_H_ */
