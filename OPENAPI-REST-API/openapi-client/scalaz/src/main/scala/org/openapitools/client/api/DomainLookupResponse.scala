package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainLookupResponse._

case class DomainLookupResponse (
  /* Whether the domain is available to register. */
  available: Option[Boolean],
/* Whether the domain is marked as premium by the registrar. */
  premium: Option[Boolean],
/* Indicates if the domain is already used by a website service. */
  website: Option[Boolean],
/* Indicates if the domain already exists as a domain service on the account. */
  domain_service: Option[Boolean],
/* Service catalog details for the domain's TLD. */
  service: Option[Any],
/* Whether Whois privacy is available for the TLD. */
  whois_privacy: Option[Boolean],
/* Calculated registration price, when available. */
  `new`: Option[String],
/* Calculated renewal price, when available. */
  renewal: Option[String],
/* Calculated transfer price, when available. */
  transfer: Option[String],
/* Registrar field requirements for this domain/TLD. */
  fields: Option[Any],
/* Pricing information normalized to supported currencies. */
  currencies: Option[Any])

object DomainLookupResponse {
  import DateTimeCodecs._

  implicit val DomainLookupResponseCodecJson: CodecJson[DomainLookupResponse] = CodecJson.derive[DomainLookupResponse]
  implicit val DomainLookupResponseDecoder: EntityDecoder[DomainLookupResponse] = jsonOf[DomainLookupResponse]
  implicit val DomainLookupResponseEncoder: EntityEncoder[DomainLookupResponse] = jsonEncoderOf[DomainLookupResponse]
}
