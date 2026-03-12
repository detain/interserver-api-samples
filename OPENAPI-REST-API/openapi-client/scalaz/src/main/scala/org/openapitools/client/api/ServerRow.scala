package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerRow._

case class ServerRow (
  /* The id of the server. */
  server_id: String,
/* The account lid of the server. */
  account_lid: String,
/* The hostname of the server. */
  server_hostname: String,
/* The status of the server. */
  server_status: String)

object ServerRow {
  import DateTimeCodecs._

  implicit val ServerRowCodecJson: CodecJson[ServerRow] = CodecJson.derive[ServerRow]
  implicit val ServerRowDecoder: EntityDecoder[ServerRow] = jsonOf[ServerRow]
  implicit val ServerRowEncoder: EntityEncoder[ServerRow] = jsonEncoderOf[ServerRow]
}
