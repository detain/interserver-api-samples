package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ControlPanel._

case class ControlPanel (
  id: Option[Integer],
short_desc: Option[String],
monthly_price: Option[BigDecimal])

object ControlPanel {
  import DateTimeCodecs._

  implicit val ControlPanelCodecJson: CodecJson[ControlPanel] = CodecJson.derive[ControlPanel]
  implicit val ControlPanelDecoder: EntityDecoder[ControlPanel] = jsonOf[ControlPanel]
  implicit val ControlPanelEncoder: EntityEncoder[ControlPanel] = jsonEncoderOf[ControlPanel]
}
