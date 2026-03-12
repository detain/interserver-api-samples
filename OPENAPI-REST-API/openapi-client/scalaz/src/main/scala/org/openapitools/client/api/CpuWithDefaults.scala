package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import CpuWithDefaults._

case class CpuWithDefaults (
  id: Option[Integer],
short_desc: Option[String],
long_desc: Option[String],
`type`: Option[String],
speed: Option[String],
num_cores: Option[String],
num_cpus: Option[String],
benchmark: Option[String],
monthly_price: Option[BigDecimal],
monthly_price_display: Option[String],
max_ram: Option[String],
min_ram: Option[String],
max_lff: Option[String],
max_sff: Option[String],
max_nve: Option[String],
visible: Option[String],
active: Option[String],
memory_det: Option[MemoryOption],
hd_det: Option[HardDrive],
monthly_fee: Option[String])

object CpuWithDefaults {
  import DateTimeCodecs._

  implicit val CpuWithDefaultsCodecJson: CodecJson[CpuWithDefaults] = CodecJson.derive[CpuWithDefaults]
  implicit val CpuWithDefaultsDecoder: EntityDecoder[CpuWithDefaults] = jsonOf[CpuWithDefaults]
  implicit val CpuWithDefaultsEncoder: EntityEncoder[CpuWithDefaults] = jsonEncoderOf[CpuWithDefaults]
}
