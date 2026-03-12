package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerOrder._

case class ServerOrder (
  form_values: Option[ServerOrderFormValues],
config_ids: Option[ServerOrderConfigIds],
/* Number of CPUs for the server order. */
  cpu: Option[Integer],
field_label: Option[ServerOrderFieldLabels],
cpu_li: Option[ServerOrderCpuLi],
memory_li: Option[ServerOrderMemoryLi],
bandwidth_li: Option[ServerOrderBandwidthLi],
ips_li: Option[ServerOrderIpsLi],
os_li: Option[ServerOrderOsLi],
cp_li: Option[ServerOrderCpLi],
/* RAID options for the server order. */
  raid_li: Option[List[ServerOrderRAID]])

object ServerOrder {
  import DateTimeCodecs._

  implicit val ServerOrderCodecJson: CodecJson[ServerOrder] = CodecJson.derive[ServerOrder]
  implicit val ServerOrderDecoder: EntityDecoder[ServerOrder] = jsonOf[ServerOrder]
  implicit val ServerOrderEncoder: EntityEncoder[ServerOrder] = jsonEncoderOf[ServerOrder]
}
