
package org.openapitools.client.model


case class EnableScrub200Response (
    _success: Boolean,
    _text: String
)
object EnableScrub200Response {
    def toStringBody(var_success: Object, var_text: Object) =
        s"""
        | {
        | "success":$var_success,"text":$var_text
        | }
        """.stripMargin
}
