
package org.openapitools.client.model


case class TicketNewResponse (
    _text: String,
    _success: Boolean,
    _ticket_id: Option[Integer]
)
object TicketNewResponse {
    def toStringBody(var_text: Object, var_success: Object, var_ticket_id: Object) =
        s"""
        | {
        | "text":$var_text,"success":$var_success,"ticket_id":$var_ticket_id
        | }
        """.stripMargin
}
