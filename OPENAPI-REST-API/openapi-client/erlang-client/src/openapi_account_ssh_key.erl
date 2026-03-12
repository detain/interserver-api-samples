-module(openapi_account_ssh_key).

-export([encode/1]).

-export_type([openapi_account_ssh_key/0]).

-type openapi_account_ssh_key() ::
    #{ 'ssh_key' => binary()
     }.

encode(#{ 'ssh_key' := SshKey
        }) ->
    #{ 'ssh_key' => SshKey
     }.
