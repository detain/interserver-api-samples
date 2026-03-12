-module(openapi_api).

-export([ add_website/0
        , get_new_website/0
        , get_website_buy_ip/1
        , get_website_info/1
        , get_website_invoices/1
        , get_website_list/0
        , get_websites_backups/1
        , get_websites_login/1
        , get_websites_welcome_email/1
        , gett_website_reverse_dns/1
        , post_website_buy_ip/2
        , post_website_migration/2
        , post_websites_reverse_dns/2
        , put_websites/0
        , update_website_info/1
        , webhosting_cancel/1
        ]).

-define(BASE_URL, "/apiv2").

%% @doc Place Website Order
%% Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.
-spec add_website() ->
  openapi_utils:response().
add_website() ->
  Method      = post,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/websites/order"],
  Body        = [],
  ContentType = "text/plain",

  openapi_utils:request(Method, [Host, ?BASE_URL, Path], jsx:encode(Body), ContentType).

%% @doc Website Ordering Information
%% Retrieves available webhosting plans and pricing for ordering.
-spec get_new_website() ->
  openapi_utils:response().
get_new_website() ->
  Method      = get,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/websites/order"],

  openapi_utils:request(Method, [Host, ?BASE_URL, Path]).

%% @doc Get Website IP Information
%% Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.
-spec get_website_buy_ip(integer()) ->
  openapi_utils:response().
get_website_buy_ip(Id) ->
  Method      = get,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/websites/", Id, "/buy_ip"],

  openapi_utils:request(Method, [Host, ?BASE_URL, Path]).

%% @doc Get Website Order
%% Returns detailed information about a specific webhosting order including its domain, plan, and status.
-spec get_website_info(integer()) ->
  openapi_utils:response().
get_website_info(Id) ->
  Method      = get,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/websites/", Id, ""],

  openapi_utils:request(Method, [Host, ?BASE_URL, Path]).

%% @doc Get Website Invoices
%% Returns the billing invoices associated with this webhosting service.
-spec get_website_invoices(integer()) ->
  openapi_utils:response().
get_website_invoices(Id) ->
  Method      = get,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/websites/", Id, "/invoices"],

  openapi_utils:request(Method, [Host, ?BASE_URL, Path]).

%% @doc Get Website Listing
%% Gets a listing of your webhosting orders and service details.
-spec get_website_list() ->
  openapi_utils:response().
get_website_list() ->
  Method      = get,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/websites"],

  openapi_utils:request(Method, [Host, ?BASE_URL, Path]).

%% @doc Get Website Backups
%% Gets a list of the backups that exist for a website and their sizes.
-spec get_websites_backups(integer()) ->
  openapi_utils:response().
get_websites_backups(Id) ->
  Method      = get,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/websites/", Id, "/backups"],

  openapi_utils:request(Method, [Host, ?BASE_URL, Path]).

%% @doc Hosting Panel Auto Login
%% Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.
-spec get_websites_login(integer()) ->
  openapi_utils:response().
get_websites_login(Id) ->
  Method      = get,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/websites/", Id, "/login"],

  openapi_utils:request(Method, [Host, ?BASE_URL, Path]).

%% @doc Resend Website Welcome Email
%% Resends the welcome email containing hosting credentials and panel access details for the webhosting order.
-spec get_websites_welcome_email(integer()) ->
  openapi_utils:response().
get_websites_welcome_email(Id) ->
  Method      = get,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/websites/", Id, "/welcome_email"],

  openapi_utils:request(Method, [Host, ?BASE_URL, Path]).

%% @doc Get Website Reverse DNS
%% Returns the current reverse DNS (PTR record) entries for the website's IP addresses.
-spec gett_website_reverse_dns(integer()) ->
  openapi_utils:response().
gett_website_reverse_dns(Id) ->
  Method      = get,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/websites/", Id, "/reverse_dns"],

  openapi_utils:request(Method, [Host, ?BASE_URL, Path]).

%% @doc Update Website IP DNS
%% Updates the reverse DNS hostnames for the website's IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.
-spec post_website_buy_ip(integer(), openapi_post_website_buy_ip_request:openapi_post_website_buy_ip_request()) ->
  openapi_utils:response().
post_website_buy_ip(Id, OpenapiPostWebsiteBuyIpRequest) ->
  Method      = post,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/websites/", Id, "/buy_ip"],
  Body        = OpenapiPostWebsiteBuyIpRequest,
  ContentType = hd(["application/json", "multipart/form-data"]),

  openapi_utils:request(Method, [Host, ?BASE_URL, Path], jsx:encode(Body), ContentType).

%% @doc Request Website Migration
%% Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.
-spec post_website_migration(integer(), openapi_post_website_migration_request:openapi_post_website_migration_request()) ->
  openapi_utils:response().
post_website_migration(Id, OpenapiPostWebsiteMigrationRequest) ->
  Method      = post,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/websites/", Id, "/migration"],
  Body        = OpenapiPostWebsiteMigrationRequest,
  ContentType = hd(["application/json", "multipart/form-data"]),

  openapi_utils:request(Method, [Host, ?BASE_URL, Path], jsx:encode(Body), ContentType).

%% @doc Update Website Reverse DNS
%% Updates the reverse DNS entries for each of the IP addresses for the website.
-spec post_websites_reverse_dns(integer(), openapi_reverse_dns_entries:openapi_reverse_dns_entries()) ->
  openapi_utils:response().
post_websites_reverse_dns(Id, OpenapiReverseDnsEntries) ->
  Method      = post,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/websites/", Id, "/reverse_dns"],
  Body        = OpenapiReverseDnsEntries,
  ContentType = hd(["application/json", "multipart/form-data"]),

  openapi_utils:request(Method, [Host, ?BASE_URL, Path], jsx:encode(Body), ContentType).

%% @doc Validate Webhosting Order
%% Validates a webhosting order before placing it.
-spec put_websites() ->
  openapi_utils:response().
put_websites() ->
  Method      = put,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/websites/order"],
  Body        = [],
  ContentType = "text/plain",

  openapi_utils:request(Method, [Host, ?BASE_URL, Path], jsx:encode(Body), ContentType).

%% @doc Update Website Order
%% Updates settings on a webhosting order.
-spec update_website_info(binary()) ->
  openapi_utils:response().
update_website_info(Id) ->
  Method      = post,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/websites/", Id, ""],
  Body        = [],
  ContentType = "text/plain",

  openapi_utils:request(Method, [Host, ?BASE_URL, Path], jsx:encode(Body), ContentType).

%% @doc Cancel Website
%% Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.
-spec webhosting_cancel(binary()) ->
  openapi_utils:response().
webhosting_cancel(Id) ->
  Method      = delete,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/websites/", Id, ""],

  openapi_utils:request(Method, [Host, ?BASE_URL, Path]).

