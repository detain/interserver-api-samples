package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsOrderLocationStock1._

case class VpsOrderLocationStock1 (
  kvm: Option[Boolean],
kvmstorage: Option[Boolean],
hyperv: Option[Boolean])

object VpsOrderLocationStock1 {
  import DateTimeCodecs._

  implicit val VpsOrderLocationStock1CodecJson: CodecJson[VpsOrderLocationStock1] = CodecJson.derive[VpsOrderLocationStock1]
  implicit val VpsOrderLocationStock1Decoder: EntityDecoder[VpsOrderLocationStock1] = jsonOf[VpsOrderLocationStock1]
  implicit val VpsOrderLocationStock1Encoder: EntityEncoder[VpsOrderLocationStock1] = jsonEncoderOf[VpsOrderLocationStock1]
}
