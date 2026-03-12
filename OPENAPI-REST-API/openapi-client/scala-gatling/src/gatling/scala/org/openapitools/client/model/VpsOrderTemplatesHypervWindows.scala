
package org.openapitools.client.model


case class VpsOrderTemplatesHypervWindows (
    _Windows2019Standard: Option[String],
    _Windows2022: Option[String]
)
object VpsOrderTemplatesHypervWindows {
    def toStringBody(var_Windows2019Standard: Object, var_Windows2022: Object) =
        s"""
        | {
        | "Windows2019Standard":$var_Windows2019Standard,"Windows2022":$var_Windows2022
        | }
        """.stripMargin
}
