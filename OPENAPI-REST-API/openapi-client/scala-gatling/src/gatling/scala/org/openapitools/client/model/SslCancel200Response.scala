
package org.openapitools.client.model


case class SslCancel200Response (
    _success: Boolean,
    _text: String
)
object SslCancel200Response {
    def toStringBody(var_success: Object, var_text: Object) =
        s"""
        | {
        | "success":$var_success,"text":$var_text
        | }
        """.stripMargin
}
