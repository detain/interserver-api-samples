package io.swagger.server.model

import java.math.BigDecimal

/**
 * Configuration options and pricing data returned when starting a dedicated server order.
 *
 * @param form_values 
 * @param config_ids 
 * @param cpu 
 * @param cpu_li 
 * @param config_li 
 * @param field_label 
 * @param cpu_cores 
 * @param frequency 
 * @param currency 
 * @param currencySymbol 
 * @param country 
 * @param custid 
 * @param ima 
 * @param step 
 * @param regions 
 * @param asset_servers 
 * @param buy_it_servers 
 * @param display_showmore 
 * @param cust_discount 
 */
case class ServerOrderGetResponse (
  form_values: FormValues,
  config_ids: ConfigIds,
  cpu: Int,
  cpu_li: Map[String, Cpu],
  config_li: ConfigLists,
  field_label: Option[Map[String, FieldLabel]],
  cpu_cores: Option[Map[String, Map[String, CpuWithDefaults]]],
  frequency: Int,
  currency: String,
  currencySymbol: Option[String],
  country: String,
  custid: Option[Int],
  ima: Option[String],
  step: String,
  regions: Option[List[Region]],
  asset_servers: Option[List[AssetServer]],
  buy_it_servers: Option[List[Object]],
  display_showmore: Option[String],
  cust_discount: Option[BigDecimal]
)

