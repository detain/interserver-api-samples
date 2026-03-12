package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import QuickserverIpInfo._

case class QuickserverIpInfo (
  /* Table title */
  title: Option[String],
rows: Option[List[QuickserverIpTableRow]])

object QuickserverIpInfo {
  import DateTimeCodecs._

  implicit val QuickserverIpInfoCodecJson: CodecJson[QuickserverIpInfo] = CodecJson.derive[QuickserverIpInfo]
  implicit val QuickserverIpInfoDecoder: EntityDecoder[QuickserverIpInfo] = jsonOf[QuickserverIpInfo]
  implicit val QuickserverIpInfoEncoder: EntityEncoder[QuickserverIpInfo] = jsonEncoderOf[QuickserverIpInfo]
}
