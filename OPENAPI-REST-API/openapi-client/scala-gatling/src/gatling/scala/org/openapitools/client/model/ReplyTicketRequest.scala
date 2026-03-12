
package org.openapitools.client.model


case class ReplyTicketRequest (
    _content: Option[String]
)
object ReplyTicketRequest {
    def toStringBody(var_content: Object) =
        s"""
        | {
        | "content":$var_content
        | }
        """.stripMargin
}
