
package org.openapitools.client.model


case class CloseTicketResponseSchema (
    _success: Option[Boolean],
    _text: Option[String]
)
object CloseTicketResponseSchema {
    def toStringBody(var_success: Object, var_text: Object) =
        s"""
        | {
        | "success":$var_success,"text":$var_text
        | }
        """.stripMargin
}
