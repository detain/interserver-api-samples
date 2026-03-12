
package org.openapitools.client.model


case class FieldLabel (
    _name: Option[String],
    _active: Option[Integer]
)
object FieldLabel {
    def toStringBody(var_name: Object, var_active: Object) =
        s"""
        | {
        | "name":$var_name,"active":$var_active
        | }
        """.stripMargin
}
