package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ConfigLists._

case class ConfigLists (
  cpu_li: Option[Map[String, Cpu]],
memory_li: Option[Map[String, Map[String, MemoryOption]]],
hd_li: Option[Map[String, Map[String, HardDrive]]],
bandwidth_li: Option[Map[String, Bandwidth]],
ips_li: Option[Map[String, IpBlock]],
os_li: Option[Map[String, OperatingSystem]],
cp_li: Option[Map[String, ControlPanel]],
raid_li: Option[List[RaidOption]])

object ConfigLists {
  import DateTimeCodecs._

  implicit val ConfigListsCodecJson: CodecJson[ConfigLists] = CodecJson.derive[ConfigLists]
  implicit val ConfigListsDecoder: EntityDecoder[ConfigLists] = jsonOf[ConfigLists]
  implicit val ConfigListsEncoder: EntityEncoder[ConfigLists] = jsonEncoderOf[ConfigLists]
}
