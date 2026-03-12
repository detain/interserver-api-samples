package io.swagger.server.model


/**
 * = BillingAddCcRequest =
 *
 * Request to add a new creditcard into the system.
 *
 * @param name 
 * @param address 
 * @param city 
 * @param state 
 * @param country 
 * @param zip 
 * @param cc 
 * @param cc_exp 
 * @param cc_ccv2 
 */
case class BillingAddCcRequest (
  name: Option[String],
  address: Option[String],
  city: Option[String],
  state: Option[String],
  country: Option[String],
  zip: Option[String],
  cc: Option[String],
  cc_exp: Option[String],
  cc_ccv2: Option[String]
)

