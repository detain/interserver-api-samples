package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailSchemaExtraInfoTables._

case class MailSchemaExtraInfoTables (
  mail: Option[MailExtraInfoTable],
tutorials: Option[MailTutorialsTable])

object MailSchemaExtraInfoTables {
  import DateTimeCodecs._

  implicit val MailSchemaExtraInfoTablesCodecJson: CodecJson[MailSchemaExtraInfoTables] = CodecJson.derive[MailSchemaExtraInfoTables]
  implicit val MailSchemaExtraInfoTablesDecoder: EntityDecoder[MailSchemaExtraInfoTables] = jsonOf[MailSchemaExtraInfoTables]
  implicit val MailSchemaExtraInfoTablesEncoder: EntityEncoder[MailSchemaExtraInfoTables] = jsonEncoderOf[MailSchemaExtraInfoTables]
}
