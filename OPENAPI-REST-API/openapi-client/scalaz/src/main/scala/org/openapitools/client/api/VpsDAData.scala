package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsDAData._

case class VpsDAData (
  free: Option[VpsDALicense])

object VpsDAData {
  import DateTimeCodecs._

  implicit val VpsDADataCodecJson: CodecJson[VpsDAData] = CodecJson.derive[VpsDAData]
  implicit val VpsDADataDecoder: EntityDecoder[VpsDAData] = jsonOf[VpsDAData]
  implicit val VpsDADataEncoder: EntityEncoder[VpsDAData] = jsonEncoderOf[VpsDAData]
}
