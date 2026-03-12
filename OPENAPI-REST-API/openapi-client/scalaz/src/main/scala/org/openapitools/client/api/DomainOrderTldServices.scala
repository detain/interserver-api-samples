package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainOrderTldServices._

case class DomainOrderTldServices (
  /* Service ID for .asia TLD */
  _asia: Option[Integer],
/* Service ID for .be TLD */
  _be: Option[Integer],
/* Service ID for .biz TLD */
  _biz: Option[Integer],
/* Service ID for .ca TLD */
  _ca: Option[Integer])

object DomainOrderTldServices {
  import DateTimeCodecs._

  implicit val DomainOrderTldServicesCodecJson: CodecJson[DomainOrderTldServices] = CodecJson.derive[DomainOrderTldServices]
  implicit val DomainOrderTldServicesDecoder: EntityDecoder[DomainOrderTldServices] = jsonOf[DomainOrderTldServices]
  implicit val DomainOrderTldServicesEncoder: EntityEncoder[DomainOrderTldServices] = jsonEncoderOf[DomainOrderTldServices]
}
