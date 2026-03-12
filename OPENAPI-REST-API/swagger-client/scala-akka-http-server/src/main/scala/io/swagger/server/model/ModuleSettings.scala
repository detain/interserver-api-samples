package io.swagger.server.model


/**
 * = ModuleSettings =
 *
 * The settings for a module.
 *
 * @param SERVICE_ID_OFFSET  for example: ''0''
 * @param USE_REPEAT_INVOICE  for example: ''true''
 * @param USE_PACKAGES  for example: ''true''
 * @param BILLING_DAYS_OFFSET  for example: ''0''
 * @param IMGNAME  for example: ''root-server.png''
 * @param REPEAT_BILLING_METHOD  for example: ''2''
 * @param DELETE_PENDING_DAYS  for example: ''45''
 * @param SUSPEND_DAYS  for example: ''14''
 * @param SUSPEND_WARNING_DAYS  for example: ''7''
 * @param TITLE  for example: ''VPS''
 * @param MENUNAME  for example: ''VPS''
 * @param EMAIL_FROM  for example: ''support@interserver.net"''
 * @param TBLNAME  for example: ''VPS''
 * @param TABLE  for example: ''vps''
 * @param TITLE_FIELD  for example: ''vps_hostname''
 * @param TITLE_FIELD2  for example: ''vps_ip''
 * @param TITLE_FIELD3  for example: ''vps_vzid''
 * @param PREFIX  for example: ''vps''
 */
case class ModuleSettings (
  SERVICE_ID_OFFSET: Int,
  USE_REPEAT_INVOICE: Boolean,
  USE_PACKAGES: Boolean,
  BILLING_DAYS_OFFSET: Int,
  IMGNAME: String,
  REPEAT_BILLING_METHOD: Int,
  DELETE_PENDING_DAYS: Int,
  SUSPEND_DAYS: Int,
  SUSPEND_WARNING_DAYS: Int,
  TITLE: String,
  MENUNAME: String,
  EMAIL_FROM: String,
  TBLNAME: String,
  TABLE: String,
  TITLE_FIELD: String,
  TITLE_FIELD2: Option[String],
  TITLE_FIELD3: Option[String],
  PREFIX: String
)

