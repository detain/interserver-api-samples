
package org.openapitools.client.model


case class RestoreRequest (
    _backup: Option[String],
    _password: Option[String]
)
object RestoreRequest {
    def toStringBody(var_backup: Object, var_password: Object) =
        s"""
        | {
        | "backup":$var_backup,"password":$var_password
        | }
        """.stripMargin
}
