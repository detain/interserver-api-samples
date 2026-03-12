package io.swagger.server.model


/**
 * @param total_cost  for example: ''5''
 * @param service_id  for example: ''12346''
 * @param invoice_id  for example: ''2746273''
 * @param invoice_description  for example: ''Scrub + Current Ip''
 * @param cj_params 
 */
case class Inline_response_201_2_order_details (
  total_cost: Option[Int],
  service_id: Option[Int],
  invoice_id: Option[Int],
  invoice_description: Option[String],
  cj_params: Option[inline_response_201_2_order_details_cj_params]
)

