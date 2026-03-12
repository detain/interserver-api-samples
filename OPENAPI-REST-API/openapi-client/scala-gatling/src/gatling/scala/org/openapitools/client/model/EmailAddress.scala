
package org.openapitools.client.model


case class EmailAddress (
    /* an email address */
    _email: Option[String]
)
object EmailAddress {
    def toStringBody(var_email: Object) =
        s"""
        | {
        | "email":$var_email
        | }
        """.stripMargin
}
