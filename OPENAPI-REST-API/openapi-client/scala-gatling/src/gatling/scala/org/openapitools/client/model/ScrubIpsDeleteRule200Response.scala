
package org.openapitools.client.model


case class ScrubIpsDeleteRule200Response (
    _success: Option[Boolean],
    _text: Option[String]
)
object ScrubIpsDeleteRule200Response {
    def toStringBody(var_success: Object, var_text: Object) =
        s"""
        | {
        | "success":$var_success,"text":$var_text
        | }
        """.stripMargin
}
