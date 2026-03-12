package io.swagger.server.model


/**
 * @param 2fa_google_key Base64-encoded secret key for TOTP setup.
 * @param 2fa_google_split Human-readable formatted key (chunks of 4 characters).
 */
case class Inline_response_200 (
  2fa_google_key: Option[String],
  2fa_google_split: Option[String]
)

