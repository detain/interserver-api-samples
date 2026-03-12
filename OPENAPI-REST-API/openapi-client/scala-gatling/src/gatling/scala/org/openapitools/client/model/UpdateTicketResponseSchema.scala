
package org.openapitools.client.model


case class UpdateTicketResponseSchema (
    _success: Option[Boolean],
    _message: Option[String]
)
object UpdateTicketResponseSchema {
    def toStringBody(var_success: Object, var_message: Object) =
        s"""
        | {
        | "success":$var_success,"message":$var_message
        | }
        """.stripMargin
}
