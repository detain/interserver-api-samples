package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsExtraInfoTables._

case class VpsExtraInfoTables (
  ip_info: Option[VpsIPInfo])

object VpsExtraInfoTables {
  import DateTimeCodecs._

  implicit val VpsExtraInfoTablesCodecJson: CodecJson[VpsExtraInfoTables] = CodecJson.derive[VpsExtraInfoTables]
  implicit val VpsExtraInfoTablesDecoder: EntityDecoder[VpsExtraInfoTables] = jsonOf[VpsExtraInfoTables]
  implicit val VpsExtraInfoTablesEncoder: EntityEncoder[VpsExtraInfoTables] = jsonEncoderOf[VpsExtraInfoTables]
}
