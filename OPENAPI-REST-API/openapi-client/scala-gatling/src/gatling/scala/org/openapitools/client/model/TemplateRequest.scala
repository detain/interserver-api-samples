
package org.openapitools.client.model


case class TemplateRequest (
    /* OS Template Filename */
    _template: String,
    /* Password for this account. */
    _localPassword: String,
    /* Password for Root / Administrator Account. */
    _password: Option[String]
)
object TemplateRequest {
    def toStringBody(var_template: Object, var_localPassword: Object, var_password: Object) =
        s"""
        | {
        | "template":$var_template,"localPassword":$var_localPassword,"password":$var_password
        | }
        """.stripMargin
}
