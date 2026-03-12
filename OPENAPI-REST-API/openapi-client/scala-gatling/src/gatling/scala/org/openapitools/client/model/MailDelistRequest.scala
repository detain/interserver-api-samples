
package org.openapitools.client.model


case class MailDelistRequest (
    /* Email address to delist. */
    _unblock: Option[String]
)
object MailDelistRequest {
    def toStringBody(var_unblock: Object) =
        s"""
        | {
        | "unblock":$var_unblock
        | }
        """.stripMargin
}
