package io.swagger.server.model


/**
 * = Root Type for BackupOrderPostResponse =
 *
 * Backup Order Placement Response
 *
 * @param continue 
 * @param errors 
 * @param total_cost 
 * @param iid 
 * @param iids 
 * @param real_iids 
 * @param serviceId 
 * @param invoice_description 
 * @param cj_params 
 */
case class BackupOrderPostResponse (
  continue: Option[Boolean],
  errors: Option[List[String]],
  total_cost: Option[String],
  iid: Option[String],
  iids: Option[List[String]],
  real_iids: Option[List[String]],
  serviceId: Option[Int],
  invoice_description: Option[String],
  cj_params: Option[BackupOrderPostResponse_cj_params]
)

