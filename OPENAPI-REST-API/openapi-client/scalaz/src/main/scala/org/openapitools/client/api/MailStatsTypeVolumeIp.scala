package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailStatsTypeVolumeIp._

case class MailStatsTypeVolumeIp (
  `1_1_1_1`: Option[Integer],
`2_2_2_2`: Option[Integer],
`3_3_3_3`: Option[Integer],
`4_4_4_4`: Option[Integer])

object MailStatsTypeVolumeIp {
  import DateTimeCodecs._

  implicit val MailStatsTypeVolumeIpCodecJson: CodecJson[MailStatsTypeVolumeIp] = CodecJson.derive[MailStatsTypeVolumeIp]
  implicit val MailStatsTypeVolumeIpDecoder: EntityDecoder[MailStatsTypeVolumeIp] = jsonOf[MailStatsTypeVolumeIp]
  implicit val MailStatsTypeVolumeIpEncoder: EntityEncoder[MailStatsTypeVolumeIp] = jsonEncoderOf[MailStatsTypeVolumeIp]
}
