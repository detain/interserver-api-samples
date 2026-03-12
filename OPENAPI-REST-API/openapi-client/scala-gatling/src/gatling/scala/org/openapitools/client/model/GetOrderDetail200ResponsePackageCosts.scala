
package org.openapitools.client.model


case class GetOrderDetail200ResponsePackageCosts (
    _package_id: Option[Number],
    _package_cost: Option[Number],
    _currency: Option[String],
    _currencySymbol: Option[String]
)
object GetOrderDetail200ResponsePackageCosts {
    def toStringBody(var_package_id: Object, var_package_cost: Object, var_currency: Object, var_currencySymbol: Object) =
        s"""
        | {
        | "package_id":$var_package_id,"package_cost":$var_package_cost,"currency":$var_currency,"currencySymbol":$var_currencySymbol
        | }
        """.stripMargin
}
