package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import QuickserverExtraInfoTables._

case class QuickserverExtraInfoTables (
  ip_info: Option[QuickserverIpInfo],
addons: Option[QuickserverAddons])

object QuickserverExtraInfoTables {
  import DateTimeCodecs._

  implicit val QuickserverExtraInfoTablesCodecJson: CodecJson[QuickserverExtraInfoTables] = CodecJson.derive[QuickserverExtraInfoTables]
  implicit val QuickserverExtraInfoTablesDecoder: EntityDecoder[QuickserverExtraInfoTables] = jsonOf[QuickserverExtraInfoTables]
  implicit val QuickserverExtraInfoTablesEncoder: EntityEncoder[QuickserverExtraInfoTables] = jsonEncoderOf[QuickserverExtraInfoTables]
}
