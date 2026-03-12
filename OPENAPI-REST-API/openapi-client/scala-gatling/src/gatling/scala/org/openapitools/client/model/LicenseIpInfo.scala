
package org.openapitools.client.model


case class LicenseIpInfo (
    /* Table title */
    _title: Option[String],
    _rows: Option[List[LicenseIpInfoRow]]
)
object LicenseIpInfo {
    def toStringBody(var_title: Object, var_rows: Object) =
        s"""
        | {
        | "title":$var_title,"rows":$var_rows
        | }
        """.stripMargin
}
