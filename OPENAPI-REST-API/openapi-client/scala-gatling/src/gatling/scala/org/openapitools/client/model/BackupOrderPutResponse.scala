
package org.openapitools.client.model


case class BackupOrderPutResponse (
    _continue: Option[Boolean],
    _errors: Option[List[String]],
    _serviceType: Option[Integer],
    _serviceCost: Option[String],
    _originalCost: Option[String],
    _repeatServiceCost: Option[String],
    _hostname: Option[String],
    _password: Option[String],
    _coupon: Option[String],
    _couponCode: Option[Integer]
)
object BackupOrderPutResponse {
    def toStringBody(var_continue: Object, var_errors: Object, var_serviceType: Object, var_serviceCost: Object, var_originalCost: Object, var_repeatServiceCost: Object, var_hostname: Object, var_password: Object, var_coupon: Object, var_couponCode: Object) =
        s"""
        | {
        | "continue":$var_continue,"errors":$var_errors,"serviceType":$var_serviceType,"serviceCost":$var_serviceCost,"originalCost":$var_originalCost,"repeatServiceCost":$var_repeatServiceCost,"hostname":$var_hostname,"password":$var_password,"coupon":$var_coupon,"couponCode":$var_couponCode
        | }
        """.stripMargin
}
