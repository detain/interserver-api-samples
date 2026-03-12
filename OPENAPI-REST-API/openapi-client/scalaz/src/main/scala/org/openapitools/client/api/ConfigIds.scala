package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ConfigIds._

case class ConfigIds (
  /* Configuration ID for the selected memory option. */
  memory: Option[Integer],
/* Configuration ID for the selected hard drive option. */
  hd: Option[Integer],
/* Configuration ID for the selected bandwidth option. */
  bandwidth: Option[Integer],
/* Configuration ID for the selected IP block option. */
  ips: Option[Integer],
/* Configuration ID for the selected operating system. */
  os: Option[Integer],
/* Configuration ID for the selected control panel. */
  cp: Option[Integer],
/* Configuration ID for the selected RAID option. */
  raid: Option[Integer])

object ConfigIds {
  import DateTimeCodecs._

  implicit val ConfigIdsCodecJson: CodecJson[ConfigIds] = CodecJson.derive[ConfigIds]
  implicit val ConfigIdsDecoder: EntityDecoder[ConfigIds] = jsonOf[ConfigIds]
  implicit val ConfigIdsEncoder: EntityEncoder[ConfigIds] = jsonEncoderOf[ConfigIds]
}
