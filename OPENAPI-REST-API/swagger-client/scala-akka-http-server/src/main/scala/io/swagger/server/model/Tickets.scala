package io.swagger.server.model


/**
 * = Tickets =
 *
 * A listing of support tickets.
 *
 * @param ima 
 * @param custid 
 * @param view 
 * @param currentPage 
 * @param limit 
 * @param sortcol 
 * @param sortdir 
 * @param rowsOffset 
 * @param tickets 
 * @param pages 
 * @param rowsTotal 
 * @param inboxCount 
 * @param countArray 
 * @param viewText 
 */
case class Tickets (
  ima: String,
  custid: String,
  view: String,
  currentPage: Int,
  limit: Int,
  sortcol: Int,
  sortdir: Int,
  rowsOffset: Int,
  tickets: List[TicketsRow],
  pages: Int,
  rowsTotal: Int,
  inboxCount: Int,
  countArray: Tickets_countArray,
  viewText: String
)

