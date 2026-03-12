
package org.openapitools.client.model


case class InlineObject (
    _code: String,
    _message: String
)
object InlineObject {
    def toStringBody(var_code: Object, var_message: Object) =
        s"""
        | {
        | "code":$var_code,"message":$var_message
        | }
        """.stripMargin
}
