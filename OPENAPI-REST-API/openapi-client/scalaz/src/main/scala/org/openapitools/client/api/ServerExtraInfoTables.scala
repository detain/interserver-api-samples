package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerExtraInfoTables._

case class ServerExtraInfoTables (
  assets: ServerAssets)

object ServerExtraInfoTables {
  import DateTimeCodecs._

  implicit val ServerExtraInfoTablesCodecJson: CodecJson[ServerExtraInfoTables] = CodecJson.derive[ServerExtraInfoTables]
  implicit val ServerExtraInfoTablesDecoder: EntityDecoder[ServerExtraInfoTables] = jsonOf[ServerExtraInfoTables]
  implicit val ServerExtraInfoTablesEncoder: EntityEncoder[ServerExtraInfoTables] = jsonEncoderOf[ServerExtraInfoTables]
}
