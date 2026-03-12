package io.swagger.server.model


/**
 * @param containerTagId 
 * @param CID 
 * @param OID 
 * @param TYPE 
 * @param ITEM1 
 * @param AMT1 
 * @param QTY1 
 * @param CURRENCY 
 */
case class BackupOrderPostResponse_cj_params (
  containerTagId: Option[String],
  CID: Option[String],
  OID: Option[String],
  TYPE: Option[String],
  ITEM1: Option[String],
  AMT1: Option[String],
  QTY1: Option[Int],
  CURRENCY: Option[String]
)

