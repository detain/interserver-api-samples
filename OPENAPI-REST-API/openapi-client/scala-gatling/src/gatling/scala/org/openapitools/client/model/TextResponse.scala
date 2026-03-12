
package org.openapitools.client.model


case class TextResponse (
    /* Response text */
    _text: Option[String],
    /* Response message */
    _message: Option[String]
)
object TextResponse {
    def toStringBody(var_text: Object, var_message: Object) =
        s"""
        | {
        | "text":$var_text,"message":$var_message
        | }
        """.stripMargin
}
