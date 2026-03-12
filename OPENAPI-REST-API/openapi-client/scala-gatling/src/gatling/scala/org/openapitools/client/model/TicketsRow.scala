
package org.openapitools.client.model


case class TicketsRow (
    _title: String,
    _ticketmaskid: String,
    _lastreplier: String,
    _status: String,
    _priority: String,
    _total_replies: Integer,
    _lastactivity: String,
    _departmenttitle: String,
    _ticketid: Integer,
    _can_close: String,
    _attachments: AnyType,
    _status_text: String,
    _checked: Boolean
)
object TicketsRow {
    def toStringBody(var_title: Object, var_ticketmaskid: Object, var_lastreplier: Object, var_status: Object, var_priority: Object, var_total_replies: Object, var_lastactivity: Object, var_departmenttitle: Object, var_ticketid: Object, var_can_close: Object, var_attachments: Object, var_status_text: Object, var_checked: Object) =
        s"""
        | {
        | "title":$var_title,"ticketmaskid":$var_ticketmaskid,"lastreplier":$var_lastreplier,"status":$var_status,"priority":$var_priority,"total_replies":$var_total_replies,"lastactivity":$var_lastactivity,"departmenttitle":$var_departmenttitle,"ticketid":$var_ticketid,"can_close":$var_can_close,"attachments":$var_attachments,"status_text":$var_status_text,"checked":$var_checked
        | }
        """.stripMargin
}
