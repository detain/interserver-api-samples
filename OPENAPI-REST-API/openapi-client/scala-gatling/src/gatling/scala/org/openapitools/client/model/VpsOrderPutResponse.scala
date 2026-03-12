
package org.openapitools.client.model


case class VpsOrderPutResponse (
    _continue: Option[Boolean],
    _errors: Option[List[AnyType]],
    _coupon_code: Option[Integer],
    _service_cost: Option[Integer],
    _slice_cost: Option[Integer],
    _service_type: Option[Integer],
    _repeat_slice_cost: Option[Integer],
    _original_slice_cost: Option[Integer],
    _original_cost: Option[Integer],
    _repeat_service_cost: Option[Integer],
    _monthly_service_cost: Option[Integer],
    _custid: Option[String],
    _os: Option[String],
    _slices: Option[String],
    _platform: Option[String],
    _controlpanel: Option[String],
    _period: Option[Integer],
    _location: Option[Integer],
    _version: Option[String],
    _hostname: Option[String],
    _coupon: Option[String],
    _rootpass: Option[String]
)
object VpsOrderPutResponse {
    def toStringBody(var_continue: Object, var_errors: Object, var_coupon_code: Object, var_service_cost: Object, var_slice_cost: Object, var_service_type: Object, var_repeat_slice_cost: Object, var_original_slice_cost: Object, var_original_cost: Object, var_repeat_service_cost: Object, var_monthly_service_cost: Object, var_custid: Object, var_os: Object, var_slices: Object, var_platform: Object, var_controlpanel: Object, var_period: Object, var_location: Object, var_version: Object, var_hostname: Object, var_coupon: Object, var_rootpass: Object) =
        s"""
        | {
        | "continue":$var_continue,"errors":$var_errors,"coupon_code":$var_coupon_code,"service_cost":$var_service_cost,"slice_cost":$var_slice_cost,"service_type":$var_service_type,"repeat_slice_cost":$var_repeat_slice_cost,"original_slice_cost":$var_original_slice_cost,"original_cost":$var_original_cost,"repeat_service_cost":$var_repeat_service_cost,"monthly_service_cost":$var_monthly_service_cost,"custid":$var_custid,"os":$var_os,"slices":$var_slices,"platform":$var_platform,"controlpanel":$var_controlpanel,"period":$var_period,"location":$var_location,"version":$var_version,"hostname":$var_hostname,"coupon":$var_coupon,"rootpass":$var_rootpass
        | }
        """.stripMargin
}
