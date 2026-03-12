package io.swagger.server.model


/**
 * = AccountFeatures =
 *
 * Account Features data.
 *
 * @param disable_reset 
 * @param disable_reinstall 
 */
case class AccountFeatures (
  disable_reset: Option[Int],
  disable_reinstall: Option[Int]
)

