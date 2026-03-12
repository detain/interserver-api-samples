package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsOrderPlatformNames._

case class VpsOrderPlatformNames (
  kvm: Option[String],
kvmstorage: Option[String],
hyperv: Option[String])

object VpsOrderPlatformNames {
  import DateTimeCodecs._

  implicit val VpsOrderPlatformNamesCodecJson: CodecJson[VpsOrderPlatformNames] = CodecJson.derive[VpsOrderPlatformNames]
  implicit val VpsOrderPlatformNamesDecoder: EntityDecoder[VpsOrderPlatformNames] = jsonOf[VpsOrderPlatformNames]
  implicit val VpsOrderPlatformNamesEncoder: EntityEncoder[VpsOrderPlatformNames] = jsonEncoderOf[VpsOrderPlatformNames]
}
