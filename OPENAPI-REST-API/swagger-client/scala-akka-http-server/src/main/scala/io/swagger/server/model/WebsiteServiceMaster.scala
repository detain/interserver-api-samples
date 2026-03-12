package io.swagger.server.model


/**
 * @param website_id Website ID for the service master for example: ''543''
 * @param website_name Website name for the service master for example: ''vda4200.is.cc''
 * @param website_ip IP address for the service master for example: ''74.50.80.15''
 * @param website_type Website type for the service master for example: ''206''
 * @param website_available Availability status for the service master for example: ''0''
 * @param website_hdsize Hard drive size for the service master for example: ''2062''
 * @param website_hdfree Free hard drive space for the service master for example: ''196''
 * @param website_load Load for the service master for example: ''6.55''
 * @param website_last_update Last update date for the service master for example: ''2023-08-17T23:01:02.000Z''
 * @param website_max_sites Maximum number of sites for the service master for example: ''300''
 * @param website_order Order number for the service master for example: ''58984''
 * @param website_partitions Partitions for the service master
 * @param website_dns1 DNS server 1 for the service master for example: ''vda4200a.trouble-free.net''
 * @param website_dns2 DNS server 2 for the service master for example: ''vda4200b.trouble-free.net''
 */
case class WebsiteServiceMaster (
  website_id: Option[String],
  website_name: Option[String],
  website_ip: Option[String],
  website_type: Option[String],
  website_available: Option[String],
  website_hdsize: Option[String],
  website_hdfree: Option[String],
  website_load: Option[String],
  website_last_update: Option[String],
  website_max_sites: Option[String],
  website_order: Option[String],
  website_partitions: Option[String],
  website_dns1: Option[String],
  website_dns2: Option[String]
)

