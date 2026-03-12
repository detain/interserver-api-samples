package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailStatsTypeVolumeFrom._

case class MailStatsTypeVolumeFrom (
  billingsomedomain_com: Option[Integer],
salessomedomain_com: Option[Integer])

object MailStatsTypeVolumeFrom {
  import DateTimeCodecs._

  implicit val MailStatsTypeVolumeFromCodecJson: CodecJson[MailStatsTypeVolumeFrom] = CodecJson.derive[MailStatsTypeVolumeFrom]
  implicit val MailStatsTypeVolumeFromDecoder: EntityDecoder[MailStatsTypeVolumeFrom] = jsonOf[MailStatsTypeVolumeFrom]
  implicit val MailStatsTypeVolumeFromEncoder: EntityEncoder[MailStatsTypeVolumeFrom] = jsonEncoderOf[MailStatsTypeVolumeFrom]
}
