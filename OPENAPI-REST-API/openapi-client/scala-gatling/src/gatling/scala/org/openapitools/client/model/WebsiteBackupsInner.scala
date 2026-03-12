
package org.openapitools.client.model


case class WebsiteBackupsInner (
    _name: String,
    _size: Option[Integer]
)
object WebsiteBackupsInner {
    def toStringBody(var_name: Object, var_size: Object) =
        s"""
        | {
        | "name":$var_name,"size":$var_size
        | }
        """.stripMargin
}
