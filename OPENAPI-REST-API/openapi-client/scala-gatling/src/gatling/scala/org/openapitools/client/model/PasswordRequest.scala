
package org.openapitools.client.model


case class PasswordRequest (
    _password: String
)
object PasswordRequest {
    def toStringBody(var_password: Object) =
        s"""
        | {
        | "password":$var_password
        | }
        """.stripMargin
}
