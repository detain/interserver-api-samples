package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainOrderResponseAttributes._

case class DomainOrderResponseAttributes (
  /* Registrar order ID. */
  id: Option[String],
/* Administrative contact email provided for the order. */
  admin_email: Option[String])

object DomainOrderResponseAttributes {
  import DateTimeCodecs._

  implicit val DomainOrderResponseAttributesCodecJson: CodecJson[DomainOrderResponseAttributes] = CodecJson.derive[DomainOrderResponseAttributes]
  implicit val DomainOrderResponseAttributesDecoder: EntityDecoder[DomainOrderResponseAttributes] = jsonOf[DomainOrderResponseAttributes]
  implicit val DomainOrderResponseAttributesEncoder: EntityEncoder[DomainOrderResponseAttributes] = jsonEncoderOf[DomainOrderResponseAttributes]
}
