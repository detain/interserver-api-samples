
package org.openapitools.client.model


case class TicketDetails (
    _ticketid: Option[Integer],
    _ticketmaskid: Option[String],
    _department: Option[String],
    _status: Option[String],
    _priority: Option[String],
    _subject: Option[String],
    _created_on: Option[String],
    _updated_on: Option[String]
)
object TicketDetails {
    def toStringBody(var_ticketid: Object, var_ticketmaskid: Object, var_department: Object, var_status: Object, var_priority: Object, var_subject: Object, var_created_on: Object, var_updated_on: Object) =
        s"""
        | {
        | "ticketid":$var_ticketid,"ticketmaskid":$var_ticketmaskid,"department":$var_department,"status":$var_status,"priority":$var_priority,"subject":$var_subject,"created_on":$var_created_on,"updated_on":$var_updated_on
        | }
        """.stripMargin
}
