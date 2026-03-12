
package org.openapitools.client.model


case class LicensesOrder (
    _serviceCategories: Option[LicensesOrderServiceCategories],
    _packageCosts: Option[LicensesOrderPackageCosts],
    _serviceTypes: Option[LicensesOrderServiceTypes]
)
object LicensesOrder {
    def toStringBody(var_serviceCategories: Object, var_packageCosts: Object, var_serviceTypes: Object) =
        s"""
        | {
        | "serviceCategories":$var_serviceCategories,"packageCosts":$var_packageCosts,"serviceTypes":$var_serviceTypes
        | }
        """.stripMargin
}
