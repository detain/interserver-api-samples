-module(openapi_mail_alerts_response).

-include("openapi.hrl").

-export([openapi_mail_alerts_response/0]).

-export_type([openapi_mail_alerts_response/0]).

-type openapi_mail_alerts_response() ::
  list(openapi_mail_alerts_response_inner:openapi_mail_alerts_response_inner()).

openapi_mail_alerts_response() ->
  list(openapi_mail_alerts_response_inner:openapi_mail_alerts_response_inner()).

