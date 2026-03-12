-module(openapi_account_info_data_cc).

-export([encode/1]).

-export_type([openapi_account_info_data_cc/0]).

-type openapi_account_info_data_cc() ::
    #{ 'cc' => binary(),
       'cc_exp' => binary(),
       'name' => binary(),
       'address' => binary(),
       'city' => binary(),
       'state' => binary(),
       'zip' => binary(),
       'country' => binary(),
       'maxmind_riskscore' => binary(),
       'maxmind' => openapi_account_info_max_mind_response:openapi_account_info_max_mind_response(),
       'verified' => boolean()
     }.

encode(#{ 'cc' := Cc,
          'cc_exp' := CcExp,
          'name' := Name,
          'address' := Address,
          'city' := City,
          'state' := State,
          'zip' := Zip,
          'country' := Country,
          'maxmind_riskscore' := MaxmindRiskscore,
          'maxmind' := Maxmind,
          'verified' := Verified
        }) ->
    #{ 'cc' => Cc,
       'cc_exp' => CcExp,
       'name' => Name,
       'address' => Address,
       'city' => City,
       'state' => State,
       'zip' => Zip,
       'country' => Country,
       'maxmind_riskscore' => MaxmindRiskscore,
       'maxmind' => Maxmind,
       'verified' => Verified
     }.
