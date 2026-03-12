
package org.openapitools.client.model


case class DisableScrub400Response (
    _success: Boolean,
    _text: String
)
object DisableScrub400Response {
    def toStringBody(var_success: Object, var_text: Object) =
        s"""
        | {
        | "success":$var_success,"text":$var_text
        | }
        """.stripMargin
}
