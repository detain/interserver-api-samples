
package org.openapitools.client.model


case class MailOrder (
    /* The ID of the order. */
    _id: Integer,
    /* The order status. */
    _status: String,
    /* The username to use for this order. */
    _username: String,
    /* Optional order comment. */
    _comment: Option[String]
)
object MailOrder {
    def toStringBody(var_id: Object, var_status: Object, var_username: Object, var_comment: Object) =
        s"""
        | {
        | "id":$var_id,"status":$var_status,"username":$var_username,"comment":$var_comment
        | }
        """.stripMargin
}
