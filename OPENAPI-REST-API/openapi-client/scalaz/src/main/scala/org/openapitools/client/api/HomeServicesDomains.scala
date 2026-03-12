package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HomeServicesDomains._

case class HomeServicesDomains (
  links: Option[HomeServicesDomainsLinks],
/* Number of domains. */
  count: Option[Integer])

object HomeServicesDomains {
  import DateTimeCodecs._

  implicit val HomeServicesDomainsCodecJson: CodecJson[HomeServicesDomains] = CodecJson.derive[HomeServicesDomains]
  implicit val HomeServicesDomainsDecoder: EntityDecoder[HomeServicesDomains] = jsonOf[HomeServicesDomains]
  implicit val HomeServicesDomainsEncoder: EntityEncoder[HomeServicesDomains] = jsonEncoderOf[HomeServicesDomains]
}
