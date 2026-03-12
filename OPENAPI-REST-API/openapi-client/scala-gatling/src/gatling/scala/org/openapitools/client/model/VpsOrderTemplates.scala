
package org.openapitools.client.model


case class VpsOrderTemplates (
    _hyperv: Option[VpsOrderTemplatesHyperv]
)
object VpsOrderTemplates {
    def toStringBody(var_hyperv: Object) =
        s"""
        | {
        | "hyperv":$var_hyperv
        | }
        """.stripMargin
}
