
package org.openapitools.client.model


case class BackupOrderPutRequest (
    _validateOnly: Option[Boolean],
    _serviceType: Option[Integer],
    _coupon: Option[String]
)
object BackupOrderPutRequest {
    def toStringBody(var_validateOnly: Object, var_serviceType: Object, var_coupon: Object) =
        s"""
        | {
        | "validateOnly":$var_validateOnly,"serviceType":$var_serviceType,"coupon":$var_coupon
        | }
        """.stripMargin
}
