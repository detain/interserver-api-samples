
package org.openapitools.client.model


case class ViewTicketResponse (
    _success: Boolean,
    _ticket: TicketDetails,
    _ticket_custom_fields: Option[TicketCustomFieldDetails],
    _ticket_posts: Option[TicketPostDetails]
)
object ViewTicketResponse {
    def toStringBody(var_success: Object, var_ticket: Object, var_ticket_custom_fields: Object, var_ticket_posts: Object) =
        s"""
        | {
        | "success":$var_success,"ticket":$var_ticket,"ticket_custom_fields":$var_ticket_custom_fields,"ticket_posts":$var_ticket_posts
        | }
        """.stripMargin
}
