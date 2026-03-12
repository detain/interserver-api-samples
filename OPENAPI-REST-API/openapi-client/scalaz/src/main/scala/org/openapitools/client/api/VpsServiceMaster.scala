package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsServiceMaster._

case class VpsServiceMaster (
  /* VPS ID */
  vps_id: Option[String],
/* VPS name */
  vps_name: Option[String],
/* IP address of the VPS */
  vps_ip: Option[String],
/* VPS type */
  vps_type: Option[String],
/* Hard drive size */
  vps_hdsize: Option[String],
/* Free hard drive space */
  vps_hdfree: Option[String],
/* Bits */
  vps_bits: Option[String],
/* CPU load */
  vps_load: Option[String],
/* RAM */
  vps_ram: Option[String],
/* CPU model */
  vps_cpu_model: Option[String],
/* CPU frequency in MHz */
  vps_cpu_mhz: Option[String],
/* Location of the VPS */
  vps_location: Option[String],
/* Last update date */
  vps_last_update: Option[String],
/* RAID building status */
  vps_raid_building: Option[String],
/* Kernel version */
  vps_kernel: Option[String],
/* Available */
  vps_available: Option[String],
/* Number of CPU cores */
  vps_cores: Option[String],
/* I/O wait */
  vps_iowait: Option[String],
/* RAID status */
  vps_raid_status: Option[String],
/* Mounts */
  vps_mounts: Option[String],
/* Maximum number of servers */
  vps_server_max: Option[String],
/* Maximum number of server slices */
  vps_server_max_slices: Option[String],
/* Drive type */
  vps_drive_type: Option[String],
/* Order number */
  vps_order: Option[String])

object VpsServiceMaster {
  import DateTimeCodecs._

  implicit val VpsServiceMasterCodecJson: CodecJson[VpsServiceMaster] = CodecJson.derive[VpsServiceMaster]
  implicit val VpsServiceMasterDecoder: EntityDecoder[VpsServiceMaster] = jsonOf[VpsServiceMaster]
  implicit val VpsServiceMasterEncoder: EntityEncoder[VpsServiceMaster] = jsonEncoderOf[VpsServiceMaster]
}
