
/*
 * Tickets.h
 *
 * A listing of support tickets.
 */

#ifndef TINY_CPP_CLIENT_Tickets_H_
#define TINY_CPP_CLIENT_Tickets_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "TicketsRow.h"
#include "Tickets_countArray.h"
#include <list>

namespace Tiny {


/*! \brief A listing of support tickets.
 *
 *  \ingroup Models
 *
 */

class Tickets{
public:

    /*! \brief Constructor.
	 */
    Tickets();
    Tickets(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Tickets();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getIma();

	/*! \brief Set 
	 */
	void setIma(std::string ima);
	/*! \brief Get 
	 */
	std::string getCustid();

	/*! \brief Set 
	 */
	void setCustid(std::string custid);
	/*! \brief Get 
	 */
	std::string getView();

	/*! \brief Set 
	 */
	void setView(std::string view);
	/*! \brief Get 
	 */
	int getCurrentPage();

	/*! \brief Set 
	 */
	void setCurrentPage(int currentPage);
	/*! \brief Get 
	 */
	int getLimit();

	/*! \brief Set 
	 */
	void setLimit(int limit);
	/*! \brief Get 
	 */
	int getSortcol();

	/*! \brief Set 
	 */
	void setSortcol(int sortcol);
	/*! \brief Get 
	 */
	int getSortdir();

	/*! \brief Set 
	 */
	void setSortdir(int sortdir);
	/*! \brief Get 
	 */
	int getRowsOffset();

	/*! \brief Set 
	 */
	void setRowsOffset(int rowsOffset);
	/*! \brief Get 
	 */
	std::list<TicketsRow> getTickets();

	/*! \brief Set 
	 */
	void setTickets(std::list<TicketsRow> tickets);
	/*! \brief Get 
	 */
	int getPages();

	/*! \brief Set 
	 */
	void setPages(int pages);
	/*! \brief Get 
	 */
	int getRowsTotal();

	/*! \brief Set 
	 */
	void setRowsTotal(int rowsTotal);
	/*! \brief Get 
	 */
	int getInboxCount();

	/*! \brief Set 
	 */
	void setInboxCount(int inboxCount);
	/*! \brief Get 
	 */
	Tickets_countArray getCountArray();

	/*! \brief Set 
	 */
	void setCountArray(Tickets_countArray countArray);
	/*! \brief Get 
	 */
	std::string getViewText();

	/*! \brief Set 
	 */
	void setViewText(std::string viewText);


    private:
    std::string ima{};
    std::string custid{};
    std::string view{};
    int currentPage{};
    int limit{};
    int sortcol{};
    int sortdir{};
    int rowsOffset{};
    std::list<TicketsRow> tickets;
    int pages{};
    int rowsTotal{};
    int inboxCount{};
    Tickets_countArray countArray;
    std::string viewText{};
};
}

#endif /* TINY_CPP_CLIENT_Tickets_H_ */
