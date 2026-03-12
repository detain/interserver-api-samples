
package org.openapitools.client.model


case class VpsDAData (
    _free: Option[VpsDALicense]
)
object VpsDAData {
    def toStringBody(var_free: Object) =
        s"""
        | {
        | "free":$var_free
        | }
        """.stripMargin
}
