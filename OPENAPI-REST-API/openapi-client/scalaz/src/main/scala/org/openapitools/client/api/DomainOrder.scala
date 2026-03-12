package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainOrder._

case class DomainOrder (
  /* Cost of Whois Privacy */
  whoisPrivacyCost: Option[String],
services: Option[DomainOrderServices],
/* Map of TLDs to domain service IDs. */
  tldServices: Option[Any])

object DomainOrder {
  import DateTimeCodecs._

  implicit val DomainOrderCodecJson: CodecJson[DomainOrder] = CodecJson.derive[DomainOrder]
  implicit val DomainOrderDecoder: EntityDecoder[DomainOrder] = jsonOf[DomainOrder]
  implicit val DomainOrderEncoder: EntityEncoder[DomainOrder] = jsonEncoderOf[DomainOrder]
}
