
package org.openapitools.client.model


case class CreateFilter (
    _filter_type: String,
    _port: Integer
)
object CreateFilter {
    def toStringBody(var_filter_type: Object, var_port: Object) =
        s"""
        | {
        | "filter_type":$var_filter_type,"port":$var_port
        | }
        """.stripMargin
}
