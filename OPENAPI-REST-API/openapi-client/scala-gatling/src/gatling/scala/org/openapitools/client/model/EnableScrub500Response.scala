
package org.openapitools.client.model


case class EnableScrub500Response (
    _success: Boolean,
    _text: String
)
object EnableScrub500Response {
    def toStringBody(var_success: Object, var_text: Object) =
        s"""
        | {
        | "success":$var_success,"text":$var_text
        | }
        """.stripMargin
}
