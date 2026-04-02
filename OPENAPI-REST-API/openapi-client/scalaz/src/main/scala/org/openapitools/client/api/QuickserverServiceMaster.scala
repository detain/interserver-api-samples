package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import QuickserverServiceMaster._

case class QuickserverServiceMaster (
  /* Quickserver ID */
  qs_id: Option[String],
/* Quickserver name */
  qs_name: Option[String],
/* IP address */
  qs_ip: Option[String],
/* Type */
  qs_type: Option[String],
/* HDD size */
  qs_hdsize: Option[String],
/* Free HDD space */
  qs_hdfree: Option[String],
/* Bits */
  qs_bits: Option[String],
/* Load */
  qs_load: Option[String],
/* RAM information */
  qs_ram: Option[String],
/* CPU model */
  qs_cpu_model: Option[String],
/* CPU frequency */
  qs_cpu_mhz: Option[String],
/* Location */
  qs_location: Option[String],
/* Available information */
  qs_available: Option[String],
/* Cost */
  qs_cost: Option[String],
/* Last update date */
  qs_last_update: Option[String],
/* Number of cores */
  qs_cores: Option[String],
/* I/O wait */
  qs_iowait: Option[String],
/* RAID status */
  qs_raid_status: Option[String],
/* Drive type */
  qs_drive_type: Option[String],
/* Order number */
  qs_order: Option[String],
/* RAID building information */
  qs_raid_building: Option[String],
/* Kernel version */
  qs_kernel: Option[String],
/* IOPing information */
  qs_ioping: Option[String],
/* Speed information */
  qs_speed: Option[String],
/* Distribution name */
  qs_distro: Option[String],
/* Distribution version */
  qs_distro_version: Option[String],
/* Bytes/sec in */
  qs_bytes_sec_in: Option[String],
/* Bytes/sec out */
  qs_bytes_sec_out: Option[String],
/* Packets/sec in */
  qs_packets_sec_in: Option[String],
/* Packets/sec out */
  qs_packets_sec_out: Option[String],
/* Last install time (null) */
  qs_last_install_time: Option[String],
/* Partitions information (null) */
  qs_partitions: Option[String],
/* CPU flags */
  qs_cpu_flags: Option[String])

object QuickserverServiceMaster {
  import DateTimeCodecs._

  implicit val QuickserverServiceMasterCodecJson: CodecJson[QuickserverServiceMaster] = CodecJson.derive[QuickserverServiceMaster]
  implicit val QuickserverServiceMasterDecoder: EntityDecoder[QuickserverServiceMaster] = jsonOf[QuickserverServiceMaster]
  implicit val QuickserverServiceMasterEncoder: EntityEncoder[QuickserverServiceMaster] = jsonEncoderOf[QuickserverServiceMaster]
}
