
package org.openapitools.client.model


case class AccountSshKey (
    _ssh_key: Option[String]
)
object AccountSshKey {
    def toStringBody(var_ssh_key: Object) =
        s"""
        | {
        | "ssh_key":$var_ssh_key
        | }
        """.stripMargin
}
