package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HomeServicesVpsLinks._

case class HomeServicesVpsLinks (
  /* Link to a VPS. */
  `465503`: Option[String],
/* Link to a VPS. */
  `2500081`: Option[String],
/* Link to a VPS. */
  `2578866`: Option[String])

object HomeServicesVpsLinks {
  import DateTimeCodecs._

  implicit val HomeServicesVpsLinksCodecJson: CodecJson[HomeServicesVpsLinks] = CodecJson.derive[HomeServicesVpsLinks]
  implicit val HomeServicesVpsLinksDecoder: EntityDecoder[HomeServicesVpsLinks] = jsonOf[HomeServicesVpsLinks]
  implicit val HomeServicesVpsLinksEncoder: EntityEncoder[HomeServicesVpsLinks] = jsonEncoderOf[HomeServicesVpsLinks]
}
