
package org.openapitools.client.model


case class BackupLoginResponse (
    /* Indicates whether a login session was created. */
    _success: Option[Boolean],
    /* Login URL or error text returned by the storage provider. */
    _text: Option[String]
)
object BackupLoginResponse {
    def toStringBody(var_success: Object, var_text: Object) =
        s"""
        | {
        | "success":$var_success,"text":$var_text
        | }
        """.stripMargin
}
