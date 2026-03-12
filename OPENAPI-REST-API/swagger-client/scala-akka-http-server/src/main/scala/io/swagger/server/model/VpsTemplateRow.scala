package io.swagger.server.model


/**
 * = VpsTemplateRow =
 *
 * A VPS OS Template.
 *
 * @param template_id 
 * @param template_type 
 * @param template_os 
 * @param template_version 
 * @param template_bits 
 * @param template_file 
 * @param template_available 
 * @param template_name 
 * @param template_dir 
 */
case class VpsTemplateRow (
  template_id: Option[String],
  template_type: Option[String],
  template_os: Option[String],
  template_version: Option[String],
  template_bits: Option[String],
  template_file: Option[String],
  template_available: Option[String],
  template_name: Option[String],
  template_dir: Option[String]
)

