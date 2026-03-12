
package org.openapitools.client.model


case class Tickets (
    _ima: String,
    _custid: String,
    _view: String,
    _currentPage: Integer,
    _limit: Integer,
    _sortcol: Integer,
    _sortdir: Integer,
    _rowsOffset: Integer,
    _tickets: List[TicketsRow],
    _pages: Integer,
    _rowsTotal: Integer,
    _inboxCount: Integer,
    _countArray: TicketsCountArray,
    _viewText: String
)
object Tickets {
    def toStringBody(var_ima: Object, var_custid: Object, var_view: Object, var_currentPage: Object, var_limit: Object, var_sortcol: Object, var_sortdir: Object, var_rowsOffset: Object, var_tickets: Object, var_pages: Object, var_rowsTotal: Object, var_inboxCount: Object, var_countArray: Object, var_viewText: Object) =
        s"""
        | {
        | "ima":$var_ima,"custid":$var_custid,"view":$var_view,"currentPage":$var_currentPage,"limit":$var_limit,"sortcol":$var_sortcol,"sortdir":$var_sortdir,"rowsOffset":$var_rowsOffset,"tickets":$var_tickets,"pages":$var_pages,"rowsTotal":$var_rowsTotal,"inboxCount":$var_inboxCount,"countArray":$var_countArray,"viewText":$var_viewText
        | }
        """.stripMargin
}
