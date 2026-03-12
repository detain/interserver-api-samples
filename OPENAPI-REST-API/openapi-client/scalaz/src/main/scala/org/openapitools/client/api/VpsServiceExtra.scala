package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsServiceExtra._

case class VpsServiceExtra (
  /* Spice */
  spice: Option[Integer],
snapshots: Option[List[VpsSnapshot]])

object VpsServiceExtra {
  import DateTimeCodecs._

  implicit val VpsServiceExtraCodecJson: CodecJson[VpsServiceExtra] = CodecJson.derive[VpsServiceExtra]
  implicit val VpsServiceExtraDecoder: EntityDecoder[VpsServiceExtra] = jsonOf[VpsServiceExtra]
  implicit val VpsServiceExtraEncoder: EntityEncoder[VpsServiceExtra] = jsonEncoderOf[VpsServiceExtra]
}
