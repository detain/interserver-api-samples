
package org.openapitools.client.model


case class LicenseIpInfoRow (
    /* Row description */
    _desc: Option[String],
    /* Row value */
    _value: Option[String]
)
object LicenseIpInfoRow {
    def toStringBody(var_desc: Object, var_value: Object) =
        s"""
        | {
        | "desc":$var_desc,"value":$var_value
        | }
        """.stripMargin
}
