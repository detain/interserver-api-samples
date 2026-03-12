-module(openapi_account_info_data_email_settings).

-include("openapi.hrl").

-export([openapi_account_info_data_email_settings/0]).

-export([openapi_account_info_data_email_settings/1]).

-export_type([openapi_account_info_data_email_settings/0]).

-type openapi_account_info_data_email_settings() ::
  [ {'admin_cc_bad_response', binary() }
  | {'admin_mass_communications_tpl', binary() }
  ].


openapi_account_info_data_email_settings() ->
    openapi_account_info_data_email_settings([]).

openapi_account_info_data_email_settings(Fields) ->
  Default = [ {'admin/cc_bad_response', binary() }
            , {'admin/mass_communications.tpl', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

