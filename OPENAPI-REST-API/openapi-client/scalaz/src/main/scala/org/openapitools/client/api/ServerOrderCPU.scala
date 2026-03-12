package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerOrderCPU._

case class ServerOrderCPU (
  /* CPU ID. */
  id: Option[String],
/* CPU price. */
  price: Option[Integer],
/* CPU image. */
  img: Option[String],
/* Short description of the CPU. */
  short_desc: Option[String],
/* Long description of the CPU. */
  long_desc: Option[String],
/* Location of the CPU. */
  location: Option[String],
/* Front Side Bus information. */
  fsb: Option[String],
/* Manufacturer information. */
  manu: Option[String],
/* CPU type. */
  `type`: Option[String],
/* CPU speed. */
  speed: Option[String],
/* Cache information. */
  cache: Option[String],
/* Active status. */
  active: Option[String],
/* Number of cores. */
  num_cores: Option[String],
/* Number of CPUs. */
  num_cpus: Option[String],
/* CPU benchmark. */
  benchmark: Option[String],
/* Monthly price. */
  monthly_price: Option[Integer],
/* Maximum RAM supported. */
  max_ram: Option[String],
/* Minimum RAM required. */
  min_ram: Option[String],
/* Maximum LFF (Large Form Factor) supported. */
  max_lff: Option[String],
/* Maximum SFF (Small Form Factor) supported. */
  max_sff: Option[String],
/* Maximum NVMe drives supported. */
  max_nve: Option[String],
/* Visibility status. */
  visible: Option[String],
/* Hard drive IDs. */
  hd_ids: Option[AnyType],
/* Display of CPU price. */
  price_display: Option[String],
/* Display of monthly CPU price. */
  monthly_price_display: Option[String])

object ServerOrderCPU {
  import DateTimeCodecs._

  implicit val ServerOrderCPUCodecJson: CodecJson[ServerOrderCPU] = CodecJson.derive[ServerOrderCPU]
  implicit val ServerOrderCPUDecoder: EntityDecoder[ServerOrderCPU] = jsonOf[ServerOrderCPU]
  implicit val ServerOrderCPUEncoder: EntityEncoder[ServerOrderCPU] = jsonEncoderOf[ServerOrderCPU]
}
