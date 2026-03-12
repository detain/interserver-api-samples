
package org.openapitools.client.model


case class GenericResponse (
    _status: String,
    _text: String
)
object GenericResponse {
    def toStringBody(var_status: Object, var_text: Object) =
        s"""
        | {
        | "status":$var_status,"text":$var_text
        | }
        """.stripMargin
}
