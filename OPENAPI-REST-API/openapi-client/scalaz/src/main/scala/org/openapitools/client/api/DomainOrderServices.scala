package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainOrderServices._

case class DomainOrderServices (
  DomainOrderServices10001: Option[DomainOrderServices10001])

object DomainOrderServices {
  import DateTimeCodecs._

  implicit val DomainOrderServicesCodecJson: CodecJson[DomainOrderServices] = CodecJson.derive[DomainOrderServices]
  implicit val DomainOrderServicesDecoder: EntityDecoder[DomainOrderServices] = jsonOf[DomainOrderServices]
  implicit val DomainOrderServicesEncoder: EntityEncoder[DomainOrderServices] = jsonEncoderOf[DomainOrderServices]
}
