package io.swagger.server.model


/**
 * = AccountInfoDataCc =
 *
 * Credit card information stored on the account.
 *
 * @param cc 
 * @param cc_exp 
 * @param name 
 * @param address 
 * @param city 
 * @param state 
 * @param zip 
 * @param country 
 * @param maxmind_riskscore 
 * @param maxmind 
 * @param verified 
 */
case class AccountInfoDataCc (
  cc: Option[String],
  cc_exp: Option[String],
  name: Option[String],
  address: Option[String],
  city: Option[String],
  state: Option[String],
  zip: Option[String],
  country: Option[String],
  maxmind_riskscore: Option[String],
  maxmind: Option[AccountInfoMaxMindResponse],
  verified: Option[Boolean]
)

