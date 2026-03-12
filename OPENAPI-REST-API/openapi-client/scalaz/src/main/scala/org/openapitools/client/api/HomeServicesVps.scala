package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HomeServicesVps._

case class HomeServicesVps (
  links: Option[HomeServicesVpsLinks],
/* Number of VPS services. */
  count: Option[Integer])

object HomeServicesVps {
  import DateTimeCodecs._

  implicit val HomeServicesVpsCodecJson: CodecJson[HomeServicesVps] = CodecJson.derive[HomeServicesVps]
  implicit val HomeServicesVpsDecoder: EntityDecoder[HomeServicesVps] = jsonOf[HomeServicesVps]
  implicit val HomeServicesVpsEncoder: EntityEncoder[HomeServicesVps] = jsonEncoderOf[HomeServicesVps]
}
