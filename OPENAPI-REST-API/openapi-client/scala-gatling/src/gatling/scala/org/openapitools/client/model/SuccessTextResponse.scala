
package org.openapitools.client.model


case class SuccessTextResponse (
    /* Indicates whether or not the command was successful or not. */
    _success: Boolean,
    /* Text associated with the response. */
    _text: Option[String],
    /* Optional Action relating to the response. */
    _action: Option[String]
)
object SuccessTextResponse {
    def toStringBody(var_success: Object, var_text: Object, var_action: Object) =
        s"""
        | {
        | "success":$var_success,"text":$var_text,"action":$var_action
        | }
        """.stripMargin
}
