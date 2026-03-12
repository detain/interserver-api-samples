package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainProvProcessPendingAttributes._

case class DomainProvProcessPendingAttributes (
  id: Option[String],
order_id: Option[String],
registration_expiration_date: Option[String],
f_auto_renew: Option[String])

object DomainProvProcessPendingAttributes {
  import DateTimeCodecs._

  implicit val DomainProvProcessPendingAttributesCodecJson: CodecJson[DomainProvProcessPendingAttributes] = CodecJson.derive[DomainProvProcessPendingAttributes]
  implicit val DomainProvProcessPendingAttributesDecoder: EntityDecoder[DomainProvProcessPendingAttributes] = jsonOf[DomainProvProcessPendingAttributes]
  implicit val DomainProvProcessPendingAttributesEncoder: EntityEncoder[DomainProvProcessPendingAttributes] = jsonEncoderOf[DomainProvProcessPendingAttributes]
}
