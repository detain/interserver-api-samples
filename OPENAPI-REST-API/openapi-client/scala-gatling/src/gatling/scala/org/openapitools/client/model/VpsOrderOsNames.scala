
package org.openapitools.client.model


case class VpsOrderOsNames (
    _opensuse: Option[String],
    _ubuntu: Option[String]
)
object VpsOrderOsNames {
    def toStringBody(var_opensuse: Object, var_ubuntu: Object) =
        s"""
        | {
        | "opensuse":$var_opensuse,"ubuntu":$var_ubuntu
        | }
        """.stripMargin
}
