package io.swagger.server.model


/**
 * @param services_id The ID of the service. for example: ''11006''
 * @param services_name The name of the service. for example: ''Storage ST 700''
 * @param services_cost The cost of the service. for example: ''84.00''
 * @param services_category The category of the service. for example: ''702''
 * @param services_buyable Indicates if the service is buyable. for example: ''1''
 * @param services_type The type of the service. for example: ''703''
 * @param services_field1 Field 1 of the service.
 * @param services_field2 Field 2 of the service. for example: ''bandwidth=40000000,quota=40000000,inode=100,uinode=ON,vdomains=2,nsubdomains=5,nemails=0,nemailf=0,nemailml=0,nemailr=0,mysql=5,domainptr=5,ftp=100,aftp=OFF,cgi=ON,php=ON,spam=OFF,cron=OFF,catchall=OFF,ssl=ON,ssh=ON,sysinfo=ON,login_keys=ON,dnscontrol=OFF,suspend_at_limit=ON''
 * @param services_module The module of the service. for example: ''backups''
 */
case class BackupsOrderServiceTypes (
  services_id: String,
  services_name: String,
  services_cost: String,
  services_category: String,
  services_buyable: String,
  services_type: String,
  services_field1: String,
  services_field2: String,
  services_module: String
)

