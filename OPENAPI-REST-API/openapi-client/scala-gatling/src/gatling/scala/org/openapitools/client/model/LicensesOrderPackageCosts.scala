
package org.openapitools.client.model


case class LicensesOrderPackageCosts (
    /* Cost of package with ID 11468 */
    _LicensesOrderPackageCosts11468: Option[Number]
)
object LicensesOrderPackageCosts {
    def toStringBody(var_LicensesOrderPackageCosts11468: Object) =
        s"""
        | {
        | "LicensesOrderPackageCosts11468":$var_LicensesOrderPackageCosts11468
        | }
        """.stripMargin
}
