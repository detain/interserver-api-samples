package io.swagger.server.model


/**
 * = Root Type for BackupOrderPutResponse =
 *
 * Backup Order validation response
 *
 * @param continue 
 * @param errors 
 * @param serviceType 
 * @param serviceCost 
 * @param originalCost 
 * @param repeatServiceCost 
 * @param hostname 
 * @param password 
 * @param coupon 
 * @param couponCode 
 */
case class BackupOrderPutResponse (
  continue: Option[Boolean],
  errors: Option[List[String]],
  serviceType: Option[Int],
  serviceCost: Option[String],
  originalCost: Option[String],
  repeatServiceCost: Option[String],
  hostname: Option[String],
  password: Option[String],
  coupon: Option[String],
  couponCode: Option[Int]
)

