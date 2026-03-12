package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HomeServicesDomainsLinks._

case class HomeServicesDomainsLinks (
  /* Link to a domain. */
  `376114`: Option[String],
/* Link to a domain. */
  `376503`: Option[String],
/* Link to a domain. */
  `592337`: Option[String])

object HomeServicesDomainsLinks {
  import DateTimeCodecs._

  implicit val HomeServicesDomainsLinksCodecJson: CodecJson[HomeServicesDomainsLinks] = CodecJson.derive[HomeServicesDomainsLinks]
  implicit val HomeServicesDomainsLinksDecoder: EntityDecoder[HomeServicesDomainsLinks] = jsonOf[HomeServicesDomainsLinks]
  implicit val HomeServicesDomainsLinksEncoder: EntityEncoder[HomeServicesDomainsLinks] = jsonEncoderOf[HomeServicesDomainsLinks]
}
