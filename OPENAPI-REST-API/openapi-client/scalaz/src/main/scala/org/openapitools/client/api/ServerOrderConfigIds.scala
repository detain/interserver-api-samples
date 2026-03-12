package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerOrderConfigIds._

case class ServerOrderConfigIds (
  /* Memory configuration ID for the server order. */
  memory: Option[Integer],
/* Bandwidth configuration ID for the server order. */
  bandwidth: Option[String],
/* IPs configuration ID for the server order. */
  ips: Option[String],
/* Operating System configuration ID for the server order. */
  os: Option[String],
/* Control Panel configuration ID for the server order. */
  cp: Option[Integer],
/* RAID configuration ID for the server order. */
  raid: Option[String],
/* Hard Drives configuration ID for the server order. */
  hd: Option[String])

object ServerOrderConfigIds {
  import DateTimeCodecs._

  implicit val ServerOrderConfigIdsCodecJson: CodecJson[ServerOrderConfigIds] = CodecJson.derive[ServerOrderConfigIds]
  implicit val ServerOrderConfigIdsDecoder: EntityDecoder[ServerOrderConfigIds] = jsonOf[ServerOrderConfigIds]
  implicit val ServerOrderConfigIdsEncoder: EntityEncoder[ServerOrderConfigIds] = jsonEncoderOf[ServerOrderConfigIds]
}
