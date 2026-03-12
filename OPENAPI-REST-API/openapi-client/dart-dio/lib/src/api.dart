//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

import 'package:dio/dio.dart';
import 'package:built_value/serializer.dart';
import 'package:openapi/src/serializers.dart';
import 'package:openapi/src/auth/api_key_auth.dart';
import 'package:openapi/src/auth/basic_auth.dart';
import 'package:openapi/src/auth/bearer_auth.dart';
import 'package:openapi/src/auth/oauth.dart';
import 'package:openapi/src/api/account_api.dart';
import 'package:openapi/src/api/backups_api.dart';
import 'package:openapi/src/api/billing_api.dart';
import 'package:openapi/src/api/dns_api.dart';
import 'package:openapi/src/api/domains_api.dart';
import 'package:openapi/src/api/floating_ips_api.dart';
import 'package:openapi/src/api/licenses_api.dart';
import 'package:openapi/src/api/mail_api.dart';
import 'package:openapi/src/api/public_api.dart';
import 'package:openapi/src/api/quick_servers_api.dart';
import 'package:openapi/src/api/ssl_certificates_api.dart';
import 'package:openapi/src/api/scrub_ips_api.dart';
import 'package:openapi/src/api/servers_api.dart';
import 'package:openapi/src/api/tickets_api.dart';
import 'package:openapi/src/api/vps_api.dart';
import 'package:openapi/src/api/webhosting_api.dart';

class Openapi {
  static const String basePath = r'https://my.interserver.net/apiv2';

  final Dio dio;
  final Serializers serializers;

  Openapi({
    Dio? dio,
    Serializers? serializers,
    String? basePathOverride,
    List<Interceptor>? interceptors,
  })  : this.serializers = serializers ?? standardSerializers,
        this.dio = dio ??
            Dio(BaseOptions(
              baseUrl: basePathOverride ?? basePath,
              connectTimeout: const Duration(milliseconds: 5000),
              receiveTimeout: const Duration(milliseconds: 3000),
            )) {
    if (interceptors == null) {
      this.dio.interceptors.addAll([
        OAuthInterceptor(),
        BasicAuthInterceptor(),
        BearerAuthInterceptor(),
        ApiKeyAuthInterceptor(),
      ]);
    } else {
      this.dio.interceptors.addAll(interceptors);
    }
  }

  void setOAuthToken(String name, String token) {
    if (this.dio.interceptors.any((i) => i is OAuthInterceptor)) {
      (this.dio.interceptors.firstWhere((i) => i is OAuthInterceptor) as OAuthInterceptor).tokens[name] = token;
    }
  }

  void setBearerAuth(String name, String token) {
    if (this.dio.interceptors.any((i) => i is BearerAuthInterceptor)) {
      (this.dio.interceptors.firstWhere((i) => i is BearerAuthInterceptor) as BearerAuthInterceptor).tokens[name] = token;
    }
  }

  void setBasicAuth(String name, String username, String password) {
    if (this.dio.interceptors.any((i) => i is BasicAuthInterceptor)) {
      (this.dio.interceptors.firstWhere((i) => i is BasicAuthInterceptor) as BasicAuthInterceptor).authInfo[name] = BasicAuthInfo(username, password);
    }
  }

  void setApiKey(String name, String apiKey) {
    if (this.dio.interceptors.any((i) => i is ApiKeyAuthInterceptor)) {
      (this.dio.interceptors.firstWhere((element) => element is ApiKeyAuthInterceptor) as ApiKeyAuthInterceptor).apiKeys[name] = apiKey;
    }
  }

  /// Get AccountApi instance, base route and serializer can be overridden by a given but be careful,
  /// by doing that all interceptors will not be executed
  AccountApi getAccountApi() {
    return AccountApi(dio, serializers);
  }

  /// Get BackupsApi instance, base route and serializer can be overridden by a given but be careful,
  /// by doing that all interceptors will not be executed
  BackupsApi getBackupsApi() {
    return BackupsApi(dio, serializers);
  }

  /// Get BillingApi instance, base route and serializer can be overridden by a given but be careful,
  /// by doing that all interceptors will not be executed
  BillingApi getBillingApi() {
    return BillingApi(dio, serializers);
  }

  /// Get DNSApi instance, base route and serializer can be overridden by a given but be careful,
  /// by doing that all interceptors will not be executed
  DNSApi getDNSApi() {
    return DNSApi(dio, serializers);
  }

  /// Get DomainsApi instance, base route and serializer can be overridden by a given but be careful,
  /// by doing that all interceptors will not be executed
  DomainsApi getDomainsApi() {
    return DomainsApi(dio, serializers);
  }

  /// Get FloatingIPsApi instance, base route and serializer can be overridden by a given but be careful,
  /// by doing that all interceptors will not be executed
  FloatingIPsApi getFloatingIPsApi() {
    return FloatingIPsApi(dio, serializers);
  }

  /// Get LicensesApi instance, base route and serializer can be overridden by a given but be careful,
  /// by doing that all interceptors will not be executed
  LicensesApi getLicensesApi() {
    return LicensesApi(dio, serializers);
  }

  /// Get MailApi instance, base route and serializer can be overridden by a given but be careful,
  /// by doing that all interceptors will not be executed
  MailApi getMailApi() {
    return MailApi(dio, serializers);
  }

  /// Get PublicApi instance, base route and serializer can be overridden by a given but be careful,
  /// by doing that all interceptors will not be executed
  PublicApi getPublicApi() {
    return PublicApi(dio, serializers);
  }

  /// Get QuickServersApi instance, base route and serializer can be overridden by a given but be careful,
  /// by doing that all interceptors will not be executed
  QuickServersApi getQuickServersApi() {
    return QuickServersApi(dio, serializers);
  }

  /// Get SSLCertificatesApi instance, base route and serializer can be overridden by a given but be careful,
  /// by doing that all interceptors will not be executed
  SSLCertificatesApi getSSLCertificatesApi() {
    return SSLCertificatesApi(dio, serializers);
  }

  /// Get ScrubIpsApi instance, base route and serializer can be overridden by a given but be careful,
  /// by doing that all interceptors will not be executed
  ScrubIpsApi getScrubIpsApi() {
    return ScrubIpsApi(dio, serializers);
  }

  /// Get ServersApi instance, base route and serializer can be overridden by a given but be careful,
  /// by doing that all interceptors will not be executed
  ServersApi getServersApi() {
    return ServersApi(dio, serializers);
  }

  /// Get TicketsApi instance, base route and serializer can be overridden by a given but be careful,
  /// by doing that all interceptors will not be executed
  TicketsApi getTicketsApi() {
    return TicketsApi(dio, serializers);
  }

  /// Get VPSApi instance, base route and serializer can be overridden by a given but be careful,
  /// by doing that all interceptors will not be executed
  VPSApi getVPSApi() {
    return VPSApi(dio, serializers);
  }

  /// Get WebhostingApi instance, base route and serializer can be overridden by a given but be careful,
  /// by doing that all interceptors will not be executed
  WebhostingApi getWebhostingApi() {
    return WebhostingApi(dio, serializers);
  }
}
