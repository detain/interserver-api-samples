/*
 * TicketsRow.h
 *
 * Information about a single ticket.
 */

#ifndef _TicketsRow_H_
#define _TicketsRow_H_


#include <string>
#include "AnyType.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Information about a single ticket.
 *
 *  \ingroup Models
 *
 */

class TicketsRow : public Object {
public:
	/*! \brief Constructor.
	 */
	TicketsRow();
	TicketsRow(char* str);

	/*! \brief Destructor.
	 */
	virtual ~TicketsRow();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getTitle();

	/*! \brief Set 
	 */
	void setTitle(std::string  title);
	/*! \brief Get 
	 */
	std::string getTicketmaskid();

	/*! \brief Set 
	 */
	void setTicketmaskid(std::string  ticketmaskid);
	/*! \brief Get 
	 */
	std::string getLastreplier();

	/*! \brief Set 
	 */
	void setLastreplier(std::string  lastreplier);
	/*! \brief Get 
	 */
	std::string getStatus();

	/*! \brief Set 
	 */
	void setStatus(std::string  status);
	/*! \brief Get 
	 */
	std::string getPriority();

	/*! \brief Set 
	 */
	void setPriority(std::string  priority);
	/*! \brief Get 
	 */
	int getTotalReplies();

	/*! \brief Set 
	 */
	void setTotalReplies(int  total_replies);
	/*! \brief Get 
	 */
	std::string getLastactivity();

	/*! \brief Set 
	 */
	void setLastactivity(std::string  lastactivity);
	/*! \brief Get 
	 */
	std::string getDepartmenttitle();

	/*! \brief Set 
	 */
	void setDepartmenttitle(std::string  departmenttitle);
	/*! \brief Get 
	 */
	int getTicketid();

	/*! \brief Set 
	 */
	void setTicketid(int  ticketid);
	/*! \brief Get 
	 */
	std::string getCanClose();

	/*! \brief Set 
	 */
	void setCanClose(std::string  can_close);
	/*! \brief Get 
	 */
	AnyType getAttachments();

	/*! \brief Set 
	 */
	void setAttachments(AnyType  attachments);
	/*! \brief Get 
	 */
	std::string getStatusText();

	/*! \brief Set 
	 */
	void setStatusText(std::string  status_text);
	/*! \brief Get 
	 */
	bool getChecked();

	/*! \brief Set 
	 */
	void setChecked(bool  checked);

private:
	std::string title;
	std::string ticketmaskid;
	std::string lastreplier;
	std::string status;
	std::string priority;
	int total_replies;
	std::string lastactivity;
	std::string departmenttitle;
	int ticketid;
	std::string can_close;
	AnyType attachments;
	std::string status_text;
	bool checked;
	void __init();
	void __cleanup();

};
}
}

#endif /* _TicketsRow_H_ */
