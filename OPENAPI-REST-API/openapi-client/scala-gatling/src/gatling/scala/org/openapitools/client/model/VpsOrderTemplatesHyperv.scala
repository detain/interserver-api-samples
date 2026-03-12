
package org.openapitools.client.model


case class VpsOrderTemplatesHyperv (
    _windows: Option[VpsOrderTemplatesHypervWindows]
)
object VpsOrderTemplatesHyperv {
    def toStringBody(var_windows: Object) =
        s"""
        | {
        | "windows":$var_windows
        | }
        """.stripMargin
}
