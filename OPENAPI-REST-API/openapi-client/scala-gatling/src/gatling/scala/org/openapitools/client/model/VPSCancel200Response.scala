
package org.openapitools.client.model


case class VPSCancel200Response (
    _success: Boolean,
    _text: String
)
object VPSCancel200Response {
    def toStringBody(var_success: Object, var_text: Object) =
        s"""
        | {
        | "success":$var_success,"text":$var_text
        | }
        """.stripMargin
}
