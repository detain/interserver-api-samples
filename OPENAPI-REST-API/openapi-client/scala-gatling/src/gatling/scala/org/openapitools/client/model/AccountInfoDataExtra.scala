
package org.openapitools.client.model


case class AccountInfoDataExtra (
    _private_whois: Option[String]
)
object AccountInfoDataExtra {
    def toStringBody(var_private_whois: Object) =
        s"""
        | {
        | "private_whois":$var_private_whois
        | }
        """.stripMargin
}
