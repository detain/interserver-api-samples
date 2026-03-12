-module(openapi_vps_plesk12_data).

-export([encode/1]).

-export_type([openapi_vps_plesk12_data/0]).

-type openapi_vps_plesk12_data() ::
    #{ 'admin' => openapi_vps_plesk_license:openapi_vps_plesk_license(),
       'pro' => openapi_vps_plesk_license:openapi_vps_plesk_license(),
       'host' => openapi_vps_plesk_license:openapi_vps_plesk_license()
     }.

encode(#{ 'admin' := Admin,
          'pro' := Pro,
          'host' := Host
        }) ->
    #{ 'admin' => Admin,
       'pro' => Pro,
       'host' => Host
     }.
