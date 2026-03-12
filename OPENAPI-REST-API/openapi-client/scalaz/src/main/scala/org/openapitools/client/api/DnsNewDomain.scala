package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DnsNewDomain._

case class DnsNewDomain (
  /* The domain name. */
  domain: String,
/* IP Address to point the domain to. */
  ip: String)

object DnsNewDomain {
  import DateTimeCodecs._

  implicit val DnsNewDomainCodecJson: CodecJson[DnsNewDomain] = CodecJson.derive[DnsNewDomain]
  implicit val DnsNewDomainDecoder: EntityDecoder[DnsNewDomain] = jsonOf[DnsNewDomain]
  implicit val DnsNewDomainEncoder: EntityEncoder[DnsNewDomain] = jsonEncoderOf[DnsNewDomain]
}
