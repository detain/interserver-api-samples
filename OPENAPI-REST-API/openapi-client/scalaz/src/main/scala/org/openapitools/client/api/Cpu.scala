package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import Cpu._

case class Cpu (
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
active: Option[String])

object Cpu {
  import DateTimeCodecs._

  implicit val CpuCodecJson: CodecJson[Cpu] = CodecJson.derive[Cpu]
  implicit val CpuDecoder: EntityDecoder[Cpu] = jsonOf[Cpu]
  implicit val CpuEncoder: EntityEncoder[Cpu] = jsonEncoderOf[Cpu]
}
