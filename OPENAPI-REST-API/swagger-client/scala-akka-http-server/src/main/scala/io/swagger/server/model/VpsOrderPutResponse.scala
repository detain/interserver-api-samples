package io.swagger.server.model


/**
 * = Root Type for VpsOrderPutResponse =
 *
 * Response from VPS order validation request
 *
 * @param continue 
 * @param errors 
 * @param coupon_code 
 * @param service_cost 
 * @param slice_cost 
 * @param service_type 
 * @param repeat_slice_cost 
 * @param original_slice_cost 
 * @param original_cost 
 * @param repeat_service_cost 
 * @param monthly_service_cost 
 * @param custid 
 * @param os 
 * @param slices 
 * @param platform 
 * @param controlpanel 
 * @param period 
 * @param location 
 * @param version 
 * @param hostname 
 * @param coupon 
 * @param rootpass 
 */
case class VpsOrderPutResponse (
  continue: Option[Boolean],
  errors: Option[List[null]],
  coupon_code: Option[Int],
  service_cost: Option[Int],
  slice_cost: Option[Int],
  service_type: Option[Int],
  repeat_slice_cost: Option[Int],
  original_slice_cost: Option[Int],
  original_cost: Option[Int],
  repeat_service_cost: Option[Int],
  monthly_service_cost: Option[Int],
  custid: Option[String],
  os: Option[String],
  slices: Option[String],
  platform: Option[String],
  controlpanel: Option[String],
  period: Option[Int],
  location: Option[Int],
  version: Option[String],
  hostname: Option[String],
  coupon: Option[String],
  rootpass: Option[String]
)

