package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HomeServicesWebhostingLinks._

case class HomeServicesWebhostingLinks (
  /* Link to a website. */
  `376359`: Option[String],
/* Link to a website. */
  `376473`: Option[String],
/* Link to a website. */
  `386218`: Option[String])

object HomeServicesWebhostingLinks {
  import DateTimeCodecs._

  implicit val HomeServicesWebhostingLinksCodecJson: CodecJson[HomeServicesWebhostingLinks] = CodecJson.derive[HomeServicesWebhostingLinks]
  implicit val HomeServicesWebhostingLinksDecoder: EntityDecoder[HomeServicesWebhostingLinks] = jsonOf[HomeServicesWebhostingLinks]
  implicit val HomeServicesWebhostingLinksEncoder: EntityEncoder[HomeServicesWebhostingLinks] = jsonEncoderOf[HomeServicesWebhostingLinks]
}
