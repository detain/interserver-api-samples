package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HomeServicesWebhosting._

case class HomeServicesWebhosting (
  links: Option[HomeServicesWebhostingLinks],
/* Number of web hosting services. */
  count: Option[Integer])

object HomeServicesWebhosting {
  import DateTimeCodecs._

  implicit val HomeServicesWebhostingCodecJson: CodecJson[HomeServicesWebhosting] = CodecJson.derive[HomeServicesWebhosting]
  implicit val HomeServicesWebhostingDecoder: EntityDecoder[HomeServicesWebhosting] = jsonOf[HomeServicesWebhosting]
  implicit val HomeServicesWebhostingEncoder: EntityEncoder[HomeServicesWebhosting] = jsonEncoderOf[HomeServicesWebhosting]
}
