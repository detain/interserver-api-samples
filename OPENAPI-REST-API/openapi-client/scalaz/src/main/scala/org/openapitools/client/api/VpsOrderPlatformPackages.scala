package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsOrderPlatformPackages._

case class VpsOrderPlatformPackages (
  kvm: Option[BigDecimal],
kvmstorage: Option[BigDecimal],
hyperv: Option[BigDecimal])

object VpsOrderPlatformPackages {
  import DateTimeCodecs._

  implicit val VpsOrderPlatformPackagesCodecJson: CodecJson[VpsOrderPlatformPackages] = CodecJson.derive[VpsOrderPlatformPackages]
  implicit val VpsOrderPlatformPackagesDecoder: EntityDecoder[VpsOrderPlatformPackages] = jsonOf[VpsOrderPlatformPackages]
  implicit val VpsOrderPlatformPackagesEncoder: EntityEncoder[VpsOrderPlatformPackages] = jsonEncoderOf[VpsOrderPlatformPackages]
}
