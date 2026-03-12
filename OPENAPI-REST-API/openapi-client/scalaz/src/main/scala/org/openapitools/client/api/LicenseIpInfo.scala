package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import LicenseIpInfo._

case class LicenseIpInfo (
  /* Table title */
  title: Option[String],
rows: Option[List[LicenseIpInfoRow]])

object LicenseIpInfo {
  import DateTimeCodecs._

  implicit val LicenseIpInfoCodecJson: CodecJson[LicenseIpInfo] = CodecJson.derive[LicenseIpInfo]
  implicit val LicenseIpInfoDecoder: EntityDecoder[LicenseIpInfo] = jsonOf[LicenseIpInfo]
  implicit val LicenseIpInfoEncoder: EntityEncoder[LicenseIpInfo] = jsonEncoderOf[LicenseIpInfo]
}
