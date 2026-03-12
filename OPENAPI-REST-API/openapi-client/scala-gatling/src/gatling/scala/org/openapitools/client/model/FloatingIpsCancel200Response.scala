
package org.openapitools.client.model


case class FloatingIpsCancel200Response (
    _success: Boolean,
    _text: String
)
object FloatingIpsCancel200Response {
    def toStringBody(var_success: Object, var_text: Object) =
        s"""
        | {
        | "success":$var_success,"text":$var_text
        | }
        """.stripMargin
}
