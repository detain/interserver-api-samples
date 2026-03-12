package io.swagger.server.model


/**
 * = Root Type for BackupOrderPutRequest =
 *
 * Parameters to submit to validate your backup order
 *
 * @param validateOnly 
 * @param serviceType 
 * @param coupon 
 */
case class BackupOrderPutRequest (
  validateOnly: Option[Boolean],
  serviceType: Option[Int],
  coupon: Option[String]
)

