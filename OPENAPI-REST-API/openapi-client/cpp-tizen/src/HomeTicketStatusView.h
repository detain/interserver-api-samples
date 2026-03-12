/*
 * Home_ticketStatusView.h
 *
 * Ticket statuses with view numbers.
 */

#ifndef _Home_ticketStatusView_H_
#define _Home_ticketStatusView_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Ticket statuses with view numbers.
 *
 *  \ingroup Models
 *
 */

class Home_ticketStatusView : public Object {
public:
	/*! \brief Constructor.
	 */
	Home_ticketStatusView();
	Home_ticketStatusView(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Home_ticketStatusView();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Status corresponding to view number 4.
	 */
	std::string get4();

	/*! \brief Set Status corresponding to view number 4.
	 */
	void set4(std::string  4);
	/*! \brief Get Status corresponding to view number 5.
	 */
	std::string get5();

	/*! \brief Set Status corresponding to view number 5.
	 */
	void set5(std::string  5);
	/*! \brief Get Status corresponding to view number 6.
	 */
	std::string get6();

	/*! \brief Set Status corresponding to view number 6.
	 */
	void set6(std::string  6);

private:
	std::string 4;
	std::string 5;
	std::string 6;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Home_ticketStatusView_H_ */
