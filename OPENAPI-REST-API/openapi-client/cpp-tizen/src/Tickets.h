/*
 * Tickets.h
 *
 * A listing of support tickets.
 */

#ifndef _Tickets_H_
#define _Tickets_H_


#include <string>
#include "TicketsRow.h"
#include "Tickets_countArray.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A listing of support tickets.
 *
 *  \ingroup Models
 *
 */

class Tickets : public Object {
public:
	/*! \brief Constructor.
	 */
	Tickets();
	Tickets(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Tickets();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getIma();

	/*! \brief Set 
	 */
	void setIma(std::string  ima);
	/*! \brief Get 
	 */
	std::string getCustid();

	/*! \brief Set 
	 */
	void setCustid(std::string  custid);
	/*! \brief Get 
	 */
	std::string getView();

	/*! \brief Set 
	 */
	void setView(std::string  view);
	/*! \brief Get 
	 */
	int getCurrentPage();

	/*! \brief Set 
	 */
	void setCurrentPage(int  currentPage);
	/*! \brief Get 
	 */
	int getLimit();

	/*! \brief Set 
	 */
	void setLimit(int  limit);
	/*! \brief Get 
	 */
	int getSortcol();

	/*! \brief Set 
	 */
	void setSortcol(int  sortcol);
	/*! \brief Get 
	 */
	int getSortdir();

	/*! \brief Set 
	 */
	void setSortdir(int  sortdir);
	/*! \brief Get 
	 */
	int getRowsOffset();

	/*! \brief Set 
	 */
	void setRowsOffset(int  rowsOffset);
	/*! \brief Get 
	 */
	std::list<TicketsRow> getTickets();

	/*! \brief Set 
	 */
	void setTickets(std::list <TicketsRow> tickets);
	/*! \brief Get 
	 */
	int getPages();

	/*! \brief Set 
	 */
	void setPages(int  pages);
	/*! \brief Get 
	 */
	int getRowsTotal();

	/*! \brief Set 
	 */
	void setRowsTotal(int  rowsTotal);
	/*! \brief Get 
	 */
	int getInboxCount();

	/*! \brief Set 
	 */
	void setInboxCount(int  inboxCount);
	/*! \brief Get 
	 */
	Tickets_countArray getCountArray();

	/*! \brief Set 
	 */
	void setCountArray(Tickets_countArray  countArray);
	/*! \brief Get 
	 */
	std::string getViewText();

	/*! \brief Set 
	 */
	void setViewText(std::string  viewText);

private:
	std::string ima;
	std::string custid;
	std::string view;
	int currentPage;
	int limit;
	int sortcol;
	int sortdir;
	int rowsOffset;
	std::list <TicketsRow>tickets;
	int pages;
	int rowsTotal;
	int inboxCount;
	Tickets_countArray countArray;
	std::string viewText;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Tickets_H_ */
