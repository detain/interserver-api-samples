package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import LicenseExtraInfoTables._

case class LicenseExtraInfoTables (
  ip_info: Option[LicenseIpInfo])

object LicenseExtraInfoTables {
  import DateTimeCodecs._

  implicit val LicenseExtraInfoTablesCodecJson: CodecJson[LicenseExtraInfoTables] = CodecJson.derive[LicenseExtraInfoTables]
  implicit val LicenseExtraInfoTablesDecoder: EntityDecoder[LicenseExtraInfoTables] = jsonOf[LicenseExtraInfoTables]
  implicit val LicenseExtraInfoTablesEncoder: EntityEncoder[LicenseExtraInfoTables] = jsonEncoderOf[LicenseExtraInfoTables]
}
