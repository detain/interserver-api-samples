
package org.openapitools.client.model


case class ServerOrderFieldLabel (
    /* Name of the field label. */
    _name: Option[String],
    /* Active status of the field label. */
    _active: Option[Integer]
)
object ServerOrderFieldLabel {
    def toStringBody(var_name: Object, var_active: Object) =
        s"""
        | {
        | "name":$var_name,"active":$var_active
        | }
        """.stripMargin
}
