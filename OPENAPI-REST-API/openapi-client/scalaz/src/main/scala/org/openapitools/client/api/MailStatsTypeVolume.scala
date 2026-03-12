package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailStatsTypeVolume._

case class MailStatsTypeVolume (
  to: Option[MailStatsTypeVolumeTo],
from: Option[MailStatsTypeVolumeFrom],
ip: Option[MailStatsTypeVolumeIp])

object MailStatsTypeVolume {
  import DateTimeCodecs._

  implicit val MailStatsTypeVolumeCodecJson: CodecJson[MailStatsTypeVolume] = CodecJson.derive[MailStatsTypeVolume]
  implicit val MailStatsTypeVolumeDecoder: EntityDecoder[MailStatsTypeVolume] = jsonOf[MailStatsTypeVolume]
  implicit val MailStatsTypeVolumeEncoder: EntityEncoder[MailStatsTypeVolume] = jsonEncoderOf[MailStatsTypeVolume]
}
