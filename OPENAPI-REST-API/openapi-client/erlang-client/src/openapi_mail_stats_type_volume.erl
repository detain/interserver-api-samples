-module(openapi_mail_stats_type_volume).

-export([encode/1]).

-export_type([openapi_mail_stats_type_volume/0]).

-type openapi_mail_stats_type_volume() ::
    #{ 'to' => openapi_mail_stats_type_volume_to:openapi_mail_stats_type_volume_to(),
       'from' => openapi_mail_stats_type_volume_from:openapi_mail_stats_type_volume_from(),
       'ip' => openapi_mail_stats_type_volume_ip:openapi_mail_stats_type_volume_ip()
     }.

encode(#{ 'to' := To,
          'from' := From,
          'ip' := Ip
        }) ->
    #{ 'to' => To,
       'from' => From,
       'ip' => Ip
     }.
