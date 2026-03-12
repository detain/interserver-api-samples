package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ModuleSettings._

case class ModuleSettings (
  SERVICE_ID_OFFSET: Integer,
USE_REPEAT_INVOICE: Boolean,
USE_PACKAGES: Boolean,
BILLING_DAYS_OFFSET: Integer,
IMGNAME: String,
REPEAT_BILLING_METHOD: Integer,
DELETE_PENDING_DAYS: Integer,
SUSPEND_DAYS: Integer,
SUSPEND_WARNING_DAYS: Integer,
TITLE: String,
MENUNAME: String,
EMAIL_FROM: String,
TBLNAME: String,
TABLE: String,
TITLE_FIELD: String,
PREFIX: String,
TITLE_FIELD2: Option[String],
TITLE_FIELD3: Option[String])

object ModuleSettings {
  import DateTimeCodecs._

  implicit val ModuleSettingsCodecJson: CodecJson[ModuleSettings] = CodecJson.derive[ModuleSettings]
  implicit val ModuleSettingsDecoder: EntityDecoder[ModuleSettings] = jsonOf[ModuleSettings]
  implicit val ModuleSettingsEncoder: EntityEncoder[ModuleSettings] = jsonEncoderOf[ModuleSettings]
}
