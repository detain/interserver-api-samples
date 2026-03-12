
package org.openapitools.client.model


case class GetOrderDetail200Response (
    _packageCosts: Option[GetOrderDetail200ResponsePackageCosts],
    _serviceTypes: Option[List[GetOrderDetail200ResponseServiceTypesInner]],
    _ips: Option[List[GetOrderDetail200ResponseIpsInner]]
)
object GetOrderDetail200Response {
    def toStringBody(var_packageCosts: Object, var_serviceTypes: Object, var_ips: Object) =
        s"""
        | {
        | "packageCosts":$var_packageCosts,"serviceTypes":$var_serviceTypes,"ips":$var_ips
        | }
        """.stripMargin
}
