package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import QuickserverOrder._

case class QuickserverOrder (
  /* Quickserver ID. */
  qs_id: Option[String],
server_details: Option[QuickserverOrderServerDetails],
templates: Option[QuickserverOrderTemplates],
version: Option[QuickserverOrderVersion],
distro_sel: Option[QuickserverOrderDistroSel])

object QuickserverOrder {
  import DateTimeCodecs._

  implicit val QuickserverOrderCodecJson: CodecJson[QuickserverOrder] = CodecJson.derive[QuickserverOrder]
  implicit val QuickserverOrderDecoder: EntityDecoder[QuickserverOrder] = jsonOf[QuickserverOrder]
  implicit val QuickserverOrderEncoder: EntityEncoder[QuickserverOrder] = jsonEncoderOf[QuickserverOrder]
}
