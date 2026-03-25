-module(openapi_view_mail_log_start_date_parameter).

-include("openapi.hrl").

-export([openapi_view_mail_log_start_date_parameter/0]).

-export([openapi_view_mail_log_start_date_parameter/1]).

-export_type([openapi_view_mail_log_start_date_parameter/0]).

-type openapi_view_mail_log_start_date_parameter() ::
  [ 
  ].


openapi_view_mail_log_start_date_parameter() ->
    openapi_view_mail_log_start_date_parameter([]).

openapi_view_mail_log_start_date_parameter(Fields) ->
  Default = [ 
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

