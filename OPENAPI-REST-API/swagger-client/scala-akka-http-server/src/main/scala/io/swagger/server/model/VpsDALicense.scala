package io.swagger.server.model


/**
 * A DirectAdmin license tier option.
 *
 * @param name License tier name.
 * @param sub_name License tier sub-name.
 * @param cost Monthly cost in cents.
 * @param img_disabled Image path for the disabled state icon.
 * @param img_active Image path for the active state icon.
 */
case class VpsDALicense (
  name: Option[String],
  sub_name: Option[String],
  cost: Option[Int],
  img_disabled: Option[String],
  img_active: Option[String]
)

