
package org.openapitools.client.model


case class ReplyTicketResponseSchema (
    _success: Option[Boolean],
    _post_id: Option[Integer]
)
object ReplyTicketResponseSchema {
    def toStringBody(var_success: Object, var_post_id: Object) =
        s"""
        | {
        | "success":$var_success,"post_id":$var_post_id
        | }
        """.stripMargin
}
