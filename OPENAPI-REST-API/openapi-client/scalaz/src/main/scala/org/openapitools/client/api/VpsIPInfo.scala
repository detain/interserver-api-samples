package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsIPInfo._

case class VpsIPInfo (
  /* Title of the table */
  title: Option[String],
rows: Option[List[VpsIPInfoRow]])

object VpsIPInfo {
  import DateTimeCodecs._

  implicit val VpsIPInfoCodecJson: CodecJson[VpsIPInfo] = CodecJson.derive[VpsIPInfo]
  implicit val VpsIPInfoDecoder: EntityDecoder[VpsIPInfo] = jsonOf[VpsIPInfo]
  implicit val VpsIPInfoEncoder: EntityEncoder[VpsIPInfo] = jsonEncoderOf[VpsIPInfo]
}
