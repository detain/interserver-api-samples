package io.swagger.server.model


/**
 * @param containerTagId  for example: ''1684''
 * @param CID  for example: ''2314''
 * @param OID  for example: ''scrub_ips12424''
 * @param TYPE  for example: ''2242343242''
 * @param ITEM1  for example: ''scrub_ips904''
 * @param AMT1  for example: ''5''
 * @param QTY1  for example: ''1''
 * @param CURRENCY  for example: ''USD''
 */
case class Inline_response_201_2_order_details_cj_params (
  containerTagId: Option[Int],
  CID: Option[Int],
  OID: Option[String],
  TYPE: Option[Int],
  ITEM1: Option[String],
  AMT1: Option[Int],
  QTY1: Option[Int],
  CURRENCY: Option[String]
)

