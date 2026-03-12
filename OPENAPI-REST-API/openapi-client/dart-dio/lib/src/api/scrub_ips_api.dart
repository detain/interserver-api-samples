//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

import 'dart:async';

import 'package:built_value/json_object.dart';
import 'package:built_value/serializer.dart';
import 'package:dio/dio.dart';

import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/api_util.dart';
import 'package:openapi/src/model/cancel_scrub_ip200_response.dart';
import 'package:openapi/src/model/charge_invoice_rows.dart';
import 'package:openapi/src/model/create_filter.dart';
import 'package:openapi/src/model/create_filter201_response.dart';
import 'package:openapi/src/model/create_filter400_response.dart';
import 'package:openapi/src/model/create_filter500_response.dart';
import 'package:openapi/src/model/create_firewall_rule.dart';
import 'package:openapi/src/model/create_geo_firewall_rule.dart';
import 'package:openapi/src/model/create_geo_rule400_response.dart';
import 'package:openapi/src/model/create_rule201_response.dart';
import 'package:openapi/src/model/create_rule400_response.dart';
import 'package:openapi/src/model/create_rule500_response.dart';
import 'package:openapi/src/model/delete_filter200_response.dart';
import 'package:openapi/src/model/delete_filter400_response.dart';
import 'package:openapi/src/model/delete_filter500_response.dart';
import 'package:openapi/src/model/delete_firewall_rule.dart';
import 'package:openapi/src/model/delete_geo_firewall_rule.dart';
import 'package:openapi/src/model/disable_scrub200_response.dart';
import 'package:openapi/src/model/disable_scrub400_response.dart';
import 'package:openapi/src/model/disable_scrub500_response.dart';
import 'package:openapi/src/model/enable_scrub200_response.dart';
import 'package:openapi/src/model/enable_scrub500_response.dart';
import 'package:openapi/src/model/get_account_info401_response.dart';
import 'package:openapi/src/model/get_order_detail200_response.dart';
import 'package:openapi/src/model/get_scrub_ip_details200_response.dart';
import 'package:openapi/src/model/place_scrub_order201_response.dart';
import 'package:openapi/src/model/scrub_ip_filter_types.dart';
import 'package:openapi/src/model/scrub_ip_place_order.dart';
import 'package:openapi/src/model/scrub_ips_delete_rule200_response.dart';
import 'package:openapi/src/model/scrub_ips_delete_rule400_response.dart';
import 'package:openapi/src/model/scrub_ips_delete_rule500_response.dart';
import 'package:openapi/src/model/scrub_ips_log_row_schema.dart';
import 'package:openapi/src/model/scrub_ips_row_schema.dart';

class ScrubIpsApi {

  final Dio _dio;

  final Serializers _serializers;

  const ScrubIpsApi(this._dio, this._serializers);

  /// Cancel Scrub IP Service
  /// Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.
  ///
  /// Parameters:
  /// * [id] - ScrubIp ID number
  /// * [cancelToken] - A [CancelToken] that can be used to cancel the operation
  /// * [headers] - Can be used to add additional headers to the request
  /// * [extras] - Can be used to add flags to the request
  /// * [validateStatus] - A [ValidateStatus] callback that can be used to determine request success based on the HTTP status of the response
  /// * [onSendProgress] - A [ProgressCallback] that can be used to get the send progress
  /// * [onReceiveProgress] - A [ProgressCallback] that can be used to get the receive progress
  ///
  /// Returns a [Future] containing a [Response] with a [CancelScrubIp200Response] as data
  /// Throws [DioException] if API call or serialization fails
  Future<Response<CancelScrubIp200Response>> cancelScrubIp({ 
    required int id,
    CancelToken? cancelToken,
    Map<String, dynamic>? headers,
    Map<String, dynamic>? extra,
    ValidateStatus? validateStatus,
    ProgressCallback? onSendProgress,
    ProgressCallback? onReceiveProgress,
  }) async {
    final _path = r'/scrub_ips/{id}'.replaceAll('{' r'id' '}', encodeQueryParameter(_serializers, id, const FullType(int)).toString());
    final _options = Options(
      method: r'DELETE',
      headers: <String, dynamic>{
        ...?headers,
      },
      extra: <String, dynamic>{
        'secure': <Map<String, String>>[
          {
            'type': 'apiKey',
            'name': 'sessionIdCookieAuth',
            'keyName': 'sessionid',
            'where': '',
          },{
            'type': 'apiKey',
            'name': 'apiKeyAuth',
            'keyName': 'X-API-KEY',
            'where': 'header',
          },{
            'type': 'apiKey',
            'name': 'sessionIdHeaderAuth',
            'keyName': 'sessionid',
            'where': 'header',
          },
        ],
        ...?extra,
      },
      validateStatus: validateStatus,
    );

    final _response = await _dio.request<Object>(
      _path,
      options: _options,
      cancelToken: cancelToken,
      onSendProgress: onSendProgress,
      onReceiveProgress: onReceiveProgress,
    );

    CancelScrubIp200Response? _responseData;

    try {
      final rawResponse = _response.data;
      _responseData = rawResponse == null ? null : _serializers.deserialize(
        rawResponse,
        specifiedType: const FullType(CancelScrubIp200Response),
      ) as CancelScrubIp200Response;

    } catch (error, stackTrace) {
      throw DioException(
        requestOptions: _response.requestOptions,
        response: _response,
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    return Response<CancelScrubIp200Response>(
      data: _responseData,
      headers: _response.headers,
      isRedirect: _response.isRedirect,
      requestOptions: _response.requestOptions,
      redirects: _response.redirects,
      statusCode: _response.statusCode,
      statusMessage: _response.statusMessage,
      extra: _response.extra,
    );
  }

  /// Create Traffic Filter
  /// Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use &#x60;GET /scrub_ips/filter_types&#x60; to list available filter types.
  ///
  /// Parameters:
  /// * [id] - ScrubIp ID number
  /// * [createFilter] 
  /// * [cancelToken] - A [CancelToken] that can be used to cancel the operation
  /// * [headers] - Can be used to add additional headers to the request
  /// * [extras] - Can be used to add flags to the request
  /// * [validateStatus] - A [ValidateStatus] callback that can be used to determine request success based on the HTTP status of the response
  /// * [onSendProgress] - A [ProgressCallback] that can be used to get the send progress
  /// * [onReceiveProgress] - A [ProgressCallback] that can be used to get the receive progress
  ///
  /// Returns a [Future] containing a [Response] with a [CreateFilter201Response] as data
  /// Throws [DioException] if API call or serialization fails
  Future<Response<CreateFilter201Response>> createFilter({ 
    required int id,
    required CreateFilter createFilter,
    CancelToken? cancelToken,
    Map<String, dynamic>? headers,
    Map<String, dynamic>? extra,
    ValidateStatus? validateStatus,
    ProgressCallback? onSendProgress,
    ProgressCallback? onReceiveProgress,
  }) async {
    final _path = r'/scrub_ips/{id}/create_filter'.replaceAll('{' r'id' '}', encodeQueryParameter(_serializers, id, const FullType(int)).toString());
    final _options = Options(
      method: r'POST',
      headers: <String, dynamic>{
        ...?headers,
      },
      extra: <String, dynamic>{
        'secure': <Map<String, String>>[
          {
            'type': 'apiKey',
            'name': 'sessionIdCookieAuth',
            'keyName': 'sessionid',
            'where': '',
          },{
            'type': 'apiKey',
            'name': 'apiKeyAuth',
            'keyName': 'X-API-KEY',
            'where': 'header',
          },{
            'type': 'apiKey',
            'name': 'sessionIdHeaderAuth',
            'keyName': 'sessionid',
            'where': 'header',
          },
        ],
        ...?extra,
      },
      contentType: 'application/json',
      validateStatus: validateStatus,
    );

    dynamic _bodyData;

    try {
      const _type = FullType(CreateFilter);
      _bodyData = _serializers.serialize(createFilter, specifiedType: _type);

    } catch(error, stackTrace) {
      throw DioException(
         requestOptions: _options.compose(
          _dio.options,
          _path,
        ),
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    final _response = await _dio.request<Object>(
      _path,
      data: _bodyData,
      options: _options,
      cancelToken: cancelToken,
      onSendProgress: onSendProgress,
      onReceiveProgress: onReceiveProgress,
    );

    CreateFilter201Response? _responseData;

    try {
      final rawResponse = _response.data;
      _responseData = rawResponse == null ? null : _serializers.deserialize(
        rawResponse,
        specifiedType: const FullType(CreateFilter201Response),
      ) as CreateFilter201Response;

    } catch (error, stackTrace) {
      throw DioException(
        requestOptions: _response.requestOptions,
        response: _response,
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    return Response<CreateFilter201Response>(
      data: _responseData,
      headers: _response.headers,
      isRedirect: _response.isRedirect,
      requestOptions: _response.requestOptions,
      redirects: _response.redirects,
      statusCode: _response.statusCode,
      statusMessage: _response.statusMessage,
      extra: _response.extra,
    );
  }

  /// Create Geo Firewall Rule
  /// Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.
  ///
  /// Parameters:
  /// * [id] - ScrubIp ID number
  /// * [createGeoFirewallRule] 
  /// * [cancelToken] - A [CancelToken] that can be used to cancel the operation
  /// * [headers] - Can be used to add additional headers to the request
  /// * [extras] - Can be used to add flags to the request
  /// * [validateStatus] - A [ValidateStatus] callback that can be used to determine request success based on the HTTP status of the response
  /// * [onSendProgress] - A [ProgressCallback] that can be used to get the send progress
  /// * [onReceiveProgress] - A [ProgressCallback] that can be used to get the receive progress
  ///
  /// Returns a [Future] containing a [Response] with a [CreateRule201Response] as data
  /// Throws [DioException] if API call or serialization fails
  Future<Response<CreateRule201Response>> createGeoRule({ 
    required int id,
    required CreateGeoFirewallRule createGeoFirewallRule,
    CancelToken? cancelToken,
    Map<String, dynamic>? headers,
    Map<String, dynamic>? extra,
    ValidateStatus? validateStatus,
    ProgressCallback? onSendProgress,
    ProgressCallback? onReceiveProgress,
  }) async {
    final _path = r'/scrub_ips/{id}/create_geo_rule'.replaceAll('{' r'id' '}', encodeQueryParameter(_serializers, id, const FullType(int)).toString());
    final _options = Options(
      method: r'POST',
      headers: <String, dynamic>{
        ...?headers,
      },
      extra: <String, dynamic>{
        'secure': <Map<String, String>>[
          {
            'type': 'apiKey',
            'name': 'sessionIdCookieAuth',
            'keyName': 'sessionid',
            'where': '',
          },{
            'type': 'apiKey',
            'name': 'apiKeyAuth',
            'keyName': 'X-API-KEY',
            'where': 'header',
          },{
            'type': 'apiKey',
            'name': 'sessionIdHeaderAuth',
            'keyName': 'sessionid',
            'where': 'header',
          },
        ],
        ...?extra,
      },
      contentType: 'application/json',
      validateStatus: validateStatus,
    );

    dynamic _bodyData;

    try {
      const _type = FullType(CreateGeoFirewallRule);
      _bodyData = _serializers.serialize(createGeoFirewallRule, specifiedType: _type);

    } catch(error, stackTrace) {
      throw DioException(
         requestOptions: _options.compose(
          _dio.options,
          _path,
        ),
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    final _response = await _dio.request<Object>(
      _path,
      data: _bodyData,
      options: _options,
      cancelToken: cancelToken,
      onSendProgress: onSendProgress,
      onReceiveProgress: onReceiveProgress,
    );

    CreateRule201Response? _responseData;

    try {
      final rawResponse = _response.data;
      _responseData = rawResponse == null ? null : _serializers.deserialize(
        rawResponse,
        specifiedType: const FullType(CreateRule201Response),
      ) as CreateRule201Response;

    } catch (error, stackTrace) {
      throw DioException(
        requestOptions: _response.requestOptions,
        response: _response,
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    return Response<CreateRule201Response>(
      data: _responseData,
      headers: _response.headers,
      isRedirect: _response.isRedirect,
      requestOptions: _response.requestOptions,
      redirects: _response.redirects,
      statusCode: _response.statusCode,
      statusMessage: _response.statusMessage,
      extra: _response.extra,
    );
  }

  /// Create Firewall Rule
  /// Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.
  ///
  /// Parameters:
  /// * [id] - ScrubIp ID number
  /// * [createFirewallRule] 
  /// * [cancelToken] - A [CancelToken] that can be used to cancel the operation
  /// * [headers] - Can be used to add additional headers to the request
  /// * [extras] - Can be used to add flags to the request
  /// * [validateStatus] - A [ValidateStatus] callback that can be used to determine request success based on the HTTP status of the response
  /// * [onSendProgress] - A [ProgressCallback] that can be used to get the send progress
  /// * [onReceiveProgress] - A [ProgressCallback] that can be used to get the receive progress
  ///
  /// Returns a [Future] containing a [Response] with a [CreateRule201Response] as data
  /// Throws [DioException] if API call or serialization fails
  Future<Response<CreateRule201Response>> createRule({ 
    required int id,
    required CreateFirewallRule createFirewallRule,
    CancelToken? cancelToken,
    Map<String, dynamic>? headers,
    Map<String, dynamic>? extra,
    ValidateStatus? validateStatus,
    ProgressCallback? onSendProgress,
    ProgressCallback? onReceiveProgress,
  }) async {
    final _path = r'/scrub_ips/{id}/create_rule'.replaceAll('{' r'id' '}', encodeQueryParameter(_serializers, id, const FullType(int)).toString());
    final _options = Options(
      method: r'POST',
      headers: <String, dynamic>{
        ...?headers,
      },
      extra: <String, dynamic>{
        'secure': <Map<String, String>>[
          {
            'type': 'apiKey',
            'name': 'sessionIdCookieAuth',
            'keyName': 'sessionid',
            'where': '',
          },{
            'type': 'apiKey',
            'name': 'apiKeyAuth',
            'keyName': 'X-API-KEY',
            'where': 'header',
          },{
            'type': 'apiKey',
            'name': 'sessionIdHeaderAuth',
            'keyName': 'sessionid',
            'where': 'header',
          },
        ],
        ...?extra,
      },
      contentType: 'application/json',
      validateStatus: validateStatus,
    );

    dynamic _bodyData;

    try {
      const _type = FullType(CreateFirewallRule);
      _bodyData = _serializers.serialize(createFirewallRule, specifiedType: _type);

    } catch(error, stackTrace) {
      throw DioException(
         requestOptions: _options.compose(
          _dio.options,
          _path,
        ),
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    final _response = await _dio.request<Object>(
      _path,
      data: _bodyData,
      options: _options,
      cancelToken: cancelToken,
      onSendProgress: onSendProgress,
      onReceiveProgress: onReceiveProgress,
    );

    CreateRule201Response? _responseData;

    try {
      final rawResponse = _response.data;
      _responseData = rawResponse == null ? null : _serializers.deserialize(
        rawResponse,
        specifiedType: const FullType(CreateRule201Response),
      ) as CreateRule201Response;

    } catch (error, stackTrace) {
      throw DioException(
        requestOptions: _response.requestOptions,
        response: _response,
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    return Response<CreateRule201Response>(
      data: _responseData,
      headers: _response.headers,
      isRedirect: _response.isRedirect,
      requestOptions: _response.requestOptions,
      redirects: _response.redirects,
      statusCode: _response.statusCode,
      statusMessage: _response.statusMessage,
      extra: _response.extra,
    );
  }

  /// Delete Traffic Filter
  /// Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.
  ///
  /// Parameters:
  /// * [id] - ScrubIp ID number
  /// * [createFilter] 
  /// * [cancelToken] - A [CancelToken] that can be used to cancel the operation
  /// * [headers] - Can be used to add additional headers to the request
  /// * [extras] - Can be used to add flags to the request
  /// * [validateStatus] - A [ValidateStatus] callback that can be used to determine request success based on the HTTP status of the response
  /// * [onSendProgress] - A [ProgressCallback] that can be used to get the send progress
  /// * [onReceiveProgress] - A [ProgressCallback] that can be used to get the receive progress
  ///
  /// Returns a [Future] containing a [Response] with a [DeleteFilter200Response] as data
  /// Throws [DioException] if API call or serialization fails
  Future<Response<DeleteFilter200Response>> deleteFilter({ 
    required int id,
    required CreateFilter createFilter,
    CancelToken? cancelToken,
    Map<String, dynamic>? headers,
    Map<String, dynamic>? extra,
    ValidateStatus? validateStatus,
    ProgressCallback? onSendProgress,
    ProgressCallback? onReceiveProgress,
  }) async {
    final _path = r'/scrub_ips/{id}/delete_filter'.replaceAll('{' r'id' '}', encodeQueryParameter(_serializers, id, const FullType(int)).toString());
    final _options = Options(
      method: r'POST',
      headers: <String, dynamic>{
        ...?headers,
      },
      extra: <String, dynamic>{
        'secure': <Map<String, String>>[
          {
            'type': 'apiKey',
            'name': 'sessionIdCookieAuth',
            'keyName': 'sessionid',
            'where': '',
          },{
            'type': 'apiKey',
            'name': 'apiKeyAuth',
            'keyName': 'X-API-KEY',
            'where': 'header',
          },{
            'type': 'apiKey',
            'name': 'sessionIdHeaderAuth',
            'keyName': 'sessionid',
            'where': 'header',
          },
        ],
        ...?extra,
      },
      contentType: 'application/json',
      validateStatus: validateStatus,
    );

    dynamic _bodyData;

    try {
      const _type = FullType(CreateFilter);
      _bodyData = _serializers.serialize(createFilter, specifiedType: _type);

    } catch(error, stackTrace) {
      throw DioException(
         requestOptions: _options.compose(
          _dio.options,
          _path,
        ),
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    final _response = await _dio.request<Object>(
      _path,
      data: _bodyData,
      options: _options,
      cancelToken: cancelToken,
      onSendProgress: onSendProgress,
      onReceiveProgress: onReceiveProgress,
    );

    DeleteFilter200Response? _responseData;

    try {
      final rawResponse = _response.data;
      _responseData = rawResponse == null ? null : _serializers.deserialize(
        rawResponse,
        specifiedType: const FullType(DeleteFilter200Response),
      ) as DeleteFilter200Response;

    } catch (error, stackTrace) {
      throw DioException(
        requestOptions: _response.requestOptions,
        response: _response,
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    return Response<DeleteFilter200Response>(
      data: _responseData,
      headers: _response.headers,
      isRedirect: _response.isRedirect,
      requestOptions: _response.requestOptions,
      redirects: _response.redirects,
      statusCode: _response.statusCode,
      statusMessage: _response.statusMessage,
      extra: _response.extra,
    );
  }

  /// Disable Scrub Protection
  /// Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.
  ///
  /// Parameters:
  /// * [id] - ScrubIp ID number
  /// * [cancelToken] - A [CancelToken] that can be used to cancel the operation
  /// * [headers] - Can be used to add additional headers to the request
  /// * [extras] - Can be used to add flags to the request
  /// * [validateStatus] - A [ValidateStatus] callback that can be used to determine request success based on the HTTP status of the response
  /// * [onSendProgress] - A [ProgressCallback] that can be used to get the send progress
  /// * [onReceiveProgress] - A [ProgressCallback] that can be used to get the receive progress
  ///
  /// Returns a [Future] containing a [Response] with a [DisableScrub200Response] as data
  /// Throws [DioException] if API call or serialization fails
  Future<Response<DisableScrub200Response>> disableScrub({ 
    required int id,
    CancelToken? cancelToken,
    Map<String, dynamic>? headers,
    Map<String, dynamic>? extra,
    ValidateStatus? validateStatus,
    ProgressCallback? onSendProgress,
    ProgressCallback? onReceiveProgress,
  }) async {
    final _path = r'/scrub_ips/{id}/disable'.replaceAll('{' r'id' '}', encodeQueryParameter(_serializers, id, const FullType(int)).toString());
    final _options = Options(
      method: r'GET',
      headers: <String, dynamic>{
        ...?headers,
      },
      extra: <String, dynamic>{
        'secure': <Map<String, String>>[
          {
            'type': 'apiKey',
            'name': 'sessionIdCookieAuth',
            'keyName': 'sessionid',
            'where': '',
          },{
            'type': 'apiKey',
            'name': 'apiKeyAuth',
            'keyName': 'X-API-KEY',
            'where': 'header',
          },{
            'type': 'apiKey',
            'name': 'sessionIdHeaderAuth',
            'keyName': 'sessionid',
            'where': 'header',
          },
        ],
        ...?extra,
      },
      validateStatus: validateStatus,
    );

    final _response = await _dio.request<Object>(
      _path,
      options: _options,
      cancelToken: cancelToken,
      onSendProgress: onSendProgress,
      onReceiveProgress: onReceiveProgress,
    );

    DisableScrub200Response? _responseData;

    try {
      final rawResponse = _response.data;
      _responseData = rawResponse == null ? null : _serializers.deserialize(
        rawResponse,
        specifiedType: const FullType(DisableScrub200Response),
      ) as DisableScrub200Response;

    } catch (error, stackTrace) {
      throw DioException(
        requestOptions: _response.requestOptions,
        response: _response,
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    return Response<DisableScrub200Response>(
      data: _responseData,
      headers: _response.headers,
      isRedirect: _response.isRedirect,
      requestOptions: _response.requestOptions,
      redirects: _response.redirects,
      statusCode: _response.statusCode,
      statusMessage: _response.statusMessage,
      extra: _response.extra,
    );
  }

  /// Enable Scrub Protection
  /// Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.
  ///
  /// Parameters:
  /// * [id] - ScrubIp ID number
  /// * [cancelToken] - A [CancelToken] that can be used to cancel the operation
  /// * [headers] - Can be used to add additional headers to the request
  /// * [extras] - Can be used to add flags to the request
  /// * [validateStatus] - A [ValidateStatus] callback that can be used to determine request success based on the HTTP status of the response
  /// * [onSendProgress] - A [ProgressCallback] that can be used to get the send progress
  /// * [onReceiveProgress] - A [ProgressCallback] that can be used to get the receive progress
  ///
  /// Returns a [Future] containing a [Response] with a [EnableScrub200Response] as data
  /// Throws [DioException] if API call or serialization fails
  Future<Response<EnableScrub200Response>> enableScrub({ 
    required int id,
    CancelToken? cancelToken,
    Map<String, dynamic>? headers,
    Map<String, dynamic>? extra,
    ValidateStatus? validateStatus,
    ProgressCallback? onSendProgress,
    ProgressCallback? onReceiveProgress,
  }) async {
    final _path = r'/scrub_ips/{id}/enable'.replaceAll('{' r'id' '}', encodeQueryParameter(_serializers, id, const FullType(int)).toString());
    final _options = Options(
      method: r'GET',
      headers: <String, dynamic>{
        ...?headers,
      },
      extra: <String, dynamic>{
        'secure': <Map<String, String>>[
          {
            'type': 'apiKey',
            'name': 'sessionIdCookieAuth',
            'keyName': 'sessionid',
            'where': '',
          },{
            'type': 'apiKey',
            'name': 'apiKeyAuth',
            'keyName': 'X-API-KEY',
            'where': 'header',
          },{
            'type': 'apiKey',
            'name': 'sessionIdHeaderAuth',
            'keyName': 'sessionid',
            'where': 'header',
          },
        ],
        ...?extra,
      },
      validateStatus: validateStatus,
    );

    final _response = await _dio.request<Object>(
      _path,
      options: _options,
      cancelToken: cancelToken,
      onSendProgress: onSendProgress,
      onReceiveProgress: onReceiveProgress,
    );

    EnableScrub200Response? _responseData;

    try {
      final rawResponse = _response.data;
      _responseData = rawResponse == null ? null : _serializers.deserialize(
        rawResponse,
        specifiedType: const FullType(EnableScrub200Response),
      ) as EnableScrub200Response;

    } catch (error, stackTrace) {
      throw DioException(
        requestOptions: _response.requestOptions,
        response: _response,
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    return Response<EnableScrub200Response>(
      data: _responseData,
      headers: _response.headers,
      isRedirect: _response.isRedirect,
      requestOptions: _response.requestOptions,
      redirects: _response.redirects,
      statusCode: _response.statusCode,
      statusMessage: _response.statusMessage,
      extra: _response.extra,
    );
  }

  /// Get Scrub IP Ordering Information
  /// Returns the available Scrub IP service plans and pricing information needed to build an order form.
  ///
  /// Parameters:
  /// * [cancelToken] - A [CancelToken] that can be used to cancel the operation
  /// * [headers] - Can be used to add additional headers to the request
  /// * [extras] - Can be used to add flags to the request
  /// * [validateStatus] - A [ValidateStatus] callback that can be used to determine request success based on the HTTP status of the response
  /// * [onSendProgress] - A [ProgressCallback] that can be used to get the send progress
  /// * [onReceiveProgress] - A [ProgressCallback] that can be used to get the receive progress
  ///
  /// Returns a [Future] containing a [Response] with a [GetOrderDetail200Response] as data
  /// Throws [DioException] if API call or serialization fails
  Future<Response<GetOrderDetail200Response>> getOrderDetail({ 
    CancelToken? cancelToken,
    Map<String, dynamic>? headers,
    Map<String, dynamic>? extra,
    ValidateStatus? validateStatus,
    ProgressCallback? onSendProgress,
    ProgressCallback? onReceiveProgress,
  }) async {
    final _path = r'/scrub_ips/order';
    final _options = Options(
      method: r'GET',
      headers: <String, dynamic>{
        ...?headers,
      },
      extra: <String, dynamic>{
        'secure': <Map<String, String>>[
          {
            'type': 'apiKey',
            'name': 'sessionIdCookieAuth',
            'keyName': 'sessionid',
            'where': '',
          },{
            'type': 'apiKey',
            'name': 'apiKeyAuth',
            'keyName': 'X-API-KEY',
            'where': 'header',
          },{
            'type': 'apiKey',
            'name': 'sessionIdHeaderAuth',
            'keyName': 'sessionid',
            'where': 'header',
          },
        ],
        ...?extra,
      },
      validateStatus: validateStatus,
    );

    final _response = await _dio.request<Object>(
      _path,
      options: _options,
      cancelToken: cancelToken,
      onSendProgress: onSendProgress,
      onReceiveProgress: onReceiveProgress,
    );

    GetOrderDetail200Response? _responseData;

    try {
      final rawResponse = _response.data;
      _responseData = rawResponse == null ? null : _serializers.deserialize(
        rawResponse,
        specifiedType: const FullType(GetOrderDetail200Response),
      ) as GetOrderDetail200Response;

    } catch (error, stackTrace) {
      throw DioException(
        requestOptions: _response.requestOptions,
        response: _response,
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    return Response<GetOrderDetail200Response>(
      data: _responseData,
      headers: _response.headers,
      isRedirect: _response.isRedirect,
      requestOptions: _response.requestOptions,
      redirects: _response.redirects,
      statusCode: _response.statusCode,
      statusMessage: _response.statusMessage,
      extra: _response.extra,
    );
  }

  /// Get Scrub IP Details
  /// Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.
  ///
  /// Parameters:
  /// * [id] - ScrubIp ID number
  /// * [cancelToken] - A [CancelToken] that can be used to cancel the operation
  /// * [headers] - Can be used to add additional headers to the request
  /// * [extras] - Can be used to add flags to the request
  /// * [validateStatus] - A [ValidateStatus] callback that can be used to determine request success based on the HTTP status of the response
  /// * [onSendProgress] - A [ProgressCallback] that can be used to get the send progress
  /// * [onReceiveProgress] - A [ProgressCallback] that can be used to get the receive progress
  ///
  /// Returns a [Future] containing a [Response] with a [GetScrubIpDetails200Response] as data
  /// Throws [DioException] if API call or serialization fails
  Future<Response<GetScrubIpDetails200Response>> getScrubIpDetails({ 
    required int id,
    CancelToken? cancelToken,
    Map<String, dynamic>? headers,
    Map<String, dynamic>? extra,
    ValidateStatus? validateStatus,
    ProgressCallback? onSendProgress,
    ProgressCallback? onReceiveProgress,
  }) async {
    final _path = r'/scrub_ips/{id}'.replaceAll('{' r'id' '}', encodeQueryParameter(_serializers, id, const FullType(int)).toString());
    final _options = Options(
      method: r'GET',
      headers: <String, dynamic>{
        ...?headers,
      },
      extra: <String, dynamic>{
        'secure': <Map<String, String>>[
          {
            'type': 'apiKey',
            'name': 'sessionIdCookieAuth',
            'keyName': 'sessionid',
            'where': '',
          },{
            'type': 'apiKey',
            'name': 'apiKeyAuth',
            'keyName': 'X-API-KEY',
            'where': 'header',
          },{
            'type': 'apiKey',
            'name': 'sessionIdHeaderAuth',
            'keyName': 'sessionid',
            'where': 'header',
          },
        ],
        ...?extra,
      },
      validateStatus: validateStatus,
    );

    final _response = await _dio.request<Object>(
      _path,
      options: _options,
      cancelToken: cancelToken,
      onSendProgress: onSendProgress,
      onReceiveProgress: onReceiveProgress,
    );

    GetScrubIpDetails200Response? _responseData;

    try {
      final rawResponse = _response.data;
      _responseData = rawResponse == null ? null : _serializers.deserialize(
        rawResponse,
        specifiedType: const FullType(GetScrubIpDetails200Response),
      ) as GetScrubIpDetails200Response;

    } catch (error, stackTrace) {
      throw DioException(
        requestOptions: _response.requestOptions,
        response: _response,
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    return Response<GetScrubIpDetails200Response>(
      data: _responseData,
      headers: _response.headers,
      isRedirect: _response.isRedirect,
      requestOptions: _response.requestOptions,
      redirects: _response.redirects,
      statusCode: _response.statusCode,
      statusMessage: _response.statusMessage,
      extra: _response.extra,
    );
  }

  /// List Scrub Filter Types
  /// Returns the list of scrub filter types that can be used when creating filter rules via &#x60;/scrub_ips/{id}/create_filter&#x60;.
  ///
  /// Parameters:
  /// * [cancelToken] - A [CancelToken] that can be used to cancel the operation
  /// * [headers] - Can be used to add additional headers to the request
  /// * [extras] - Can be used to add flags to the request
  /// * [validateStatus] - A [ValidateStatus] callback that can be used to determine request success based on the HTTP status of the response
  /// * [onSendProgress] - A [ProgressCallback] that can be used to get the send progress
  /// * [onReceiveProgress] - A [ProgressCallback] that can be used to get the receive progress
  ///
  /// Returns a [Future] containing a [Response] with a [ScrubIpFilterTypes] as data
  /// Throws [DioException] if API call or serialization fails
  Future<Response<ScrubIpFilterTypes>> getScrubIpFilterTypes({ 
    CancelToken? cancelToken,
    Map<String, dynamic>? headers,
    Map<String, dynamic>? extra,
    ValidateStatus? validateStatus,
    ProgressCallback? onSendProgress,
    ProgressCallback? onReceiveProgress,
  }) async {
    final _path = r'/scrub_ips/filter_types';
    final _options = Options(
      method: r'GET',
      headers: <String, dynamic>{
        ...?headers,
      },
      extra: <String, dynamic>{
        'secure': <Map<String, String>>[
          {
            'type': 'apiKey',
            'name': 'sessionIdCookieAuth',
            'keyName': 'sessionid',
            'where': '',
          },{
            'type': 'apiKey',
            'name': 'apiKeyAuth',
            'keyName': 'X-API-KEY',
            'where': 'header',
          },{
            'type': 'apiKey',
            'name': 'sessionIdHeaderAuth',
            'keyName': 'sessionid',
            'where': 'header',
          },
        ],
        ...?extra,
      },
      validateStatus: validateStatus,
    );

    final _response = await _dio.request<Object>(
      _path,
      options: _options,
      cancelToken: cancelToken,
      onSendProgress: onSendProgress,
      onReceiveProgress: onReceiveProgress,
    );

    ScrubIpFilterTypes? _responseData;

    try {
      final rawResponse = _response.data;
      _responseData = rawResponse == null ? null : _serializers.deserialize(
        rawResponse,
        specifiedType: const FullType(ScrubIpFilterTypes),
      ) as ScrubIpFilterTypes;

    } catch (error, stackTrace) {
      throw DioException(
        requestOptions: _response.requestOptions,
        response: _response,
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    return Response<ScrubIpFilterTypes>(
      data: _responseData,
      headers: _response.headers,
      isRedirect: _response.isRedirect,
      requestOptions: _response.requestOptions,
      redirects: _response.redirects,
      statusCode: _response.statusCode,
      statusMessage: _response.statusMessage,
      extra: _response.extra,
    );
  }

  /// Get ScrubIp Invoices
  /// Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.
  ///
  /// Parameters:
  /// * [id] - ScrubIp ID number
  /// * [cancelToken] - A [CancelToken] that can be used to cancel the operation
  /// * [headers] - Can be used to add additional headers to the request
  /// * [extras] - Can be used to add flags to the request
  /// * [validateStatus] - A [ValidateStatus] callback that can be used to determine request success based on the HTTP status of the response
  /// * [onSendProgress] - A [ProgressCallback] that can be used to get the send progress
  /// * [onReceiveProgress] - A [ProgressCallback] that can be used to get the receive progress
  ///
  /// Returns a [Future] containing a [Response] with a [ChargeInvoiceRows] as data
  /// Throws [DioException] if API call or serialization fails
  Future<Response<ChargeInvoiceRows>> getScrubIpInvoices({ 
    required int id,
    CancelToken? cancelToken,
    Map<String, dynamic>? headers,
    Map<String, dynamic>? extra,
    ValidateStatus? validateStatus,
    ProgressCallback? onSendProgress,
    ProgressCallback? onReceiveProgress,
  }) async {
    final _path = r'/scrub_ips/{id}/invoices'.replaceAll('{' r'id' '}', encodeQueryParameter(_serializers, id, const FullType(int)).toString());
    final _options = Options(
      method: r'GET',
      headers: <String, dynamic>{
        ...?headers,
      },
      extra: <String, dynamic>{
        'secure': <Map<String, String>>[
          {
            'type': 'apiKey',
            'name': 'sessionIdCookieAuth',
            'keyName': 'sessionid',
            'where': '',
          },{
            'type': 'apiKey',
            'name': 'apiKeyAuth',
            'keyName': 'X-API-KEY',
            'where': 'header',
          },{
            'type': 'apiKey',
            'name': 'sessionIdHeaderAuth',
            'keyName': 'sessionid',
            'where': 'header',
          },
        ],
        ...?extra,
      },
      validateStatus: validateStatus,
    );

    final _response = await _dio.request<Object>(
      _path,
      options: _options,
      cancelToken: cancelToken,
      onSendProgress: onSendProgress,
      onReceiveProgress: onReceiveProgress,
    );

    ChargeInvoiceRows? _responseData;

    try {
      final rawResponse = _response.data;
      _responseData = rawResponse == null ? null : _serializers.deserialize(
        rawResponse,
        specifiedType: const FullType(ChargeInvoiceRows),
      ) as ChargeInvoiceRows;

    } catch (error, stackTrace) {
      throw DioException(
        requestOptions: _response.requestOptions,
        response: _response,
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    return Response<ChargeInvoiceRows>(
      data: _responseData,
      headers: _response.headers,
      isRedirect: _response.isRedirect,
      requestOptions: _response.requestOptions,
      redirects: _response.redirects,
      statusCode: _response.statusCode,
      statusMessage: _response.statusMessage,
      extra: _response.extra,
    );
  }

  /// Get Scrub IP Logs
  /// Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.
  ///
  /// Parameters:
  /// * [id] - Scrub Order ID
  /// * [cancelToken] - A [CancelToken] that can be used to cancel the operation
  /// * [headers] - Can be used to add additional headers to the request
  /// * [extras] - Can be used to add flags to the request
  /// * [validateStatus] - A [ValidateStatus] callback that can be used to determine request success based on the HTTP status of the response
  /// * [onSendProgress] - A [ProgressCallback] that can be used to get the send progress
  /// * [onReceiveProgress] - A [ProgressCallback] that can be used to get the receive progress
  ///
  /// Returns a [Future] containing a [Response] with a [BuiltList<ScrubIpsLogRowSchema>] as data
  /// Throws [DioException] if API call or serialization fails
  Future<Response<BuiltList<ScrubIpsLogRowSchema>>> getScrubIpLogs({ 
    required String id,
    CancelToken? cancelToken,
    Map<String, dynamic>? headers,
    Map<String, dynamic>? extra,
    ValidateStatus? validateStatus,
    ProgressCallback? onSendProgress,
    ProgressCallback? onReceiveProgress,
  }) async {
    final _path = r'/scrub_ips/{id}/logs'.replaceAll('{' r'id' '}', encodeQueryParameter(_serializers, id, const FullType(String)).toString());
    final _options = Options(
      method: r'GET',
      headers: <String, dynamic>{
        ...?headers,
      },
      extra: <String, dynamic>{
        'secure': <Map<String, String>>[
          {
            'type': 'apiKey',
            'name': 'sessionIdCookieAuth',
            'keyName': 'sessionid',
            'where': '',
          },{
            'type': 'apiKey',
            'name': 'apiKeyAuth',
            'keyName': 'X-API-KEY',
            'where': 'header',
          },{
            'type': 'apiKey',
            'name': 'sessionIdHeaderAuth',
            'keyName': 'sessionid',
            'where': 'header',
          },
        ],
        ...?extra,
      },
      validateStatus: validateStatus,
    );

    final _response = await _dio.request<Object>(
      _path,
      options: _options,
      cancelToken: cancelToken,
      onSendProgress: onSendProgress,
      onReceiveProgress: onReceiveProgress,
    );

    BuiltList<ScrubIpsLogRowSchema>? _responseData;

    try {
      final rawResponse = _response.data;
      _responseData = rawResponse == null ? null : _serializers.deserialize(
        rawResponse,
        specifiedType: const FullType(BuiltList, [FullType(ScrubIpsLogRowSchema)]),
      ) as BuiltList<ScrubIpsLogRowSchema>;

    } catch (error, stackTrace) {
      throw DioException(
        requestOptions: _response.requestOptions,
        response: _response,
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    return Response<BuiltList<ScrubIpsLogRowSchema>>(
      data: _responseData,
      headers: _response.headers,
      isRedirect: _response.isRedirect,
      requestOptions: _response.requestOptions,
      redirects: _response.redirects,
      statusCode: _response.statusCode,
      statusMessage: _response.statusMessage,
      extra: _response.extra,
    );
  }

  /// List Scrub IP Services
  /// Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.
  ///
  /// Parameters:
  /// * [cancelToken] - A [CancelToken] that can be used to cancel the operation
  /// * [headers] - Can be used to add additional headers to the request
  /// * [extras] - Can be used to add flags to the request
  /// * [validateStatus] - A [ValidateStatus] callback that can be used to determine request success based on the HTTP status of the response
  /// * [onSendProgress] - A [ProgressCallback] that can be used to get the send progress
  /// * [onReceiveProgress] - A [ProgressCallback] that can be used to get the receive progress
  ///
  /// Returns a [Future] containing a [Response] with a [BuiltList<ScrubIpsRowSchema>] as data
  /// Throws [DioException] if API call or serialization fails
  Future<Response<BuiltList<ScrubIpsRowSchema>>> getScrubIpsList({ 
    CancelToken? cancelToken,
    Map<String, dynamic>? headers,
    Map<String, dynamic>? extra,
    ValidateStatus? validateStatus,
    ProgressCallback? onSendProgress,
    ProgressCallback? onReceiveProgress,
  }) async {
    final _path = r'/scrub_ips';
    final _options = Options(
      method: r'GET',
      headers: <String, dynamic>{
        ...?headers,
      },
      extra: <String, dynamic>{
        'secure': <Map<String, String>>[
          {
            'type': 'apiKey',
            'name': 'sessionIdCookieAuth',
            'keyName': 'sessionid',
            'where': '',
          },{
            'type': 'apiKey',
            'name': 'apiKeyAuth',
            'keyName': 'X-API-KEY',
            'where': 'header',
          },{
            'type': 'apiKey',
            'name': 'sessionIdHeaderAuth',
            'keyName': 'sessionid',
            'where': 'header',
          },
        ],
        ...?extra,
      },
      validateStatus: validateStatus,
    );

    final _response = await _dio.request<Object>(
      _path,
      options: _options,
      cancelToken: cancelToken,
      onSendProgress: onSendProgress,
      onReceiveProgress: onReceiveProgress,
    );

    BuiltList<ScrubIpsRowSchema>? _responseData;

    try {
      final rawResponse = _response.data;
      _responseData = rawResponse == null ? null : _serializers.deserialize(
        rawResponse,
        specifiedType: const FullType(BuiltList, [FullType(ScrubIpsRowSchema)]),
      ) as BuiltList<ScrubIpsRowSchema>;

    } catch (error, stackTrace) {
      throw DioException(
        requestOptions: _response.requestOptions,
        response: _response,
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    return Response<BuiltList<ScrubIpsRowSchema>>(
      data: _responseData,
      headers: _response.headers,
      isRedirect: _response.isRedirect,
      requestOptions: _response.requestOptions,
      redirects: _response.redirects,
      statusCode: _response.statusCode,
      statusMessage: _response.statusMessage,
      extra: _response.extra,
    );
  }

  /// Place Scrub IP Order
  /// Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.
  ///
  /// Parameters:
  /// * [scrubIpPlaceOrder] 
  /// * [cancelToken] - A [CancelToken] that can be used to cancel the operation
  /// * [headers] - Can be used to add additional headers to the request
  /// * [extras] - Can be used to add flags to the request
  /// * [validateStatus] - A [ValidateStatus] callback that can be used to determine request success based on the HTTP status of the response
  /// * [onSendProgress] - A [ProgressCallback] that can be used to get the send progress
  /// * [onReceiveProgress] - A [ProgressCallback] that can be used to get the receive progress
  ///
  /// Returns a [Future] containing a [Response] with a [PlaceScrubOrder201Response] as data
  /// Throws [DioException] if API call or serialization fails
  Future<Response<PlaceScrubOrder201Response>> placeScrubOrder({ 
    required ScrubIpPlaceOrder scrubIpPlaceOrder,
    CancelToken? cancelToken,
    Map<String, dynamic>? headers,
    Map<String, dynamic>? extra,
    ValidateStatus? validateStatus,
    ProgressCallback? onSendProgress,
    ProgressCallback? onReceiveProgress,
  }) async {
    final _path = r'/scrub_ips/order';
    final _options = Options(
      method: r'POST',
      headers: <String, dynamic>{
        ...?headers,
      },
      extra: <String, dynamic>{
        'secure': <Map<String, String>>[
          {
            'type': 'apiKey',
            'name': 'sessionIdCookieAuth',
            'keyName': 'sessionid',
            'where': '',
          },{
            'type': 'apiKey',
            'name': 'apiKeyAuth',
            'keyName': 'X-API-KEY',
            'where': 'header',
          },{
            'type': 'apiKey',
            'name': 'sessionIdHeaderAuth',
            'keyName': 'sessionid',
            'where': 'header',
          },
        ],
        ...?extra,
      },
      contentType: 'application/json',
      validateStatus: validateStatus,
    );

    dynamic _bodyData;

    try {
      const _type = FullType(ScrubIpPlaceOrder);
      _bodyData = _serializers.serialize(scrubIpPlaceOrder, specifiedType: _type);

    } catch(error, stackTrace) {
      throw DioException(
         requestOptions: _options.compose(
          _dio.options,
          _path,
        ),
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    final _response = await _dio.request<Object>(
      _path,
      data: _bodyData,
      options: _options,
      cancelToken: cancelToken,
      onSendProgress: onSendProgress,
      onReceiveProgress: onReceiveProgress,
    );

    PlaceScrubOrder201Response? _responseData;

    try {
      final rawResponse = _response.data;
      _responseData = rawResponse == null ? null : _serializers.deserialize(
        rawResponse,
        specifiedType: const FullType(PlaceScrubOrder201Response),
      ) as PlaceScrubOrder201Response;

    } catch (error, stackTrace) {
      throw DioException(
        requestOptions: _response.requestOptions,
        response: _response,
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    return Response<PlaceScrubOrder201Response>(
      data: _responseData,
      headers: _response.headers,
      isRedirect: _response.isRedirect,
      requestOptions: _response.requestOptions,
      redirects: _response.redirects,
      statusCode: _response.statusCode,
      statusMessage: _response.statusMessage,
      extra: _response.extra,
    );
  }

  /// Delete Geo Firewall Rule
  /// Removes an existing geographic-based firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.
  ///
  /// Parameters:
  /// * [id] - ScrubIp ID number
  /// * [deleteGeoFirewallRule] 
  /// * [cancelToken] - A [CancelToken] that can be used to cancel the operation
  /// * [headers] - Can be used to add additional headers to the request
  /// * [extras] - Can be used to add flags to the request
  /// * [validateStatus] - A [ValidateStatus] callback that can be used to determine request success based on the HTTP status of the response
  /// * [onSendProgress] - A [ProgressCallback] that can be used to get the send progress
  /// * [onReceiveProgress] - A [ProgressCallback] that can be used to get the receive progress
  ///
  /// Returns a [Future] containing a [Response] with a [ScrubIpsDeleteRule200Response] as data
  /// Throws [DioException] if API call or serialization fails
  Future<Response<ScrubIpsDeleteRule200Response>> scrubIpsDeleteGeoRule({ 
    required int id,
    required DeleteGeoFirewallRule deleteGeoFirewallRule,
    CancelToken? cancelToken,
    Map<String, dynamic>? headers,
    Map<String, dynamic>? extra,
    ValidateStatus? validateStatus,
    ProgressCallback? onSendProgress,
    ProgressCallback? onReceiveProgress,
  }) async {
    final _path = r'/scrub_ips/{id}/delete_geo_rule'.replaceAll('{' r'id' '}', encodeQueryParameter(_serializers, id, const FullType(int)).toString());
    final _options = Options(
      method: r'POST',
      headers: <String, dynamic>{
        ...?headers,
      },
      extra: <String, dynamic>{
        'secure': <Map<String, String>>[
          {
            'type': 'apiKey',
            'name': 'sessionIdCookieAuth',
            'keyName': 'sessionid',
            'where': '',
          },{
            'type': 'apiKey',
            'name': 'apiKeyAuth',
            'keyName': 'X-API-KEY',
            'where': 'header',
          },{
            'type': 'apiKey',
            'name': 'sessionIdHeaderAuth',
            'keyName': 'sessionid',
            'where': 'header',
          },
        ],
        ...?extra,
      },
      contentType: 'application/json',
      validateStatus: validateStatus,
    );

    dynamic _bodyData;

    try {
      const _type = FullType(DeleteGeoFirewallRule);
      _bodyData = _serializers.serialize(deleteGeoFirewallRule, specifiedType: _type);

    } catch(error, stackTrace) {
      throw DioException(
         requestOptions: _options.compose(
          _dio.options,
          _path,
        ),
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    final _response = await _dio.request<Object>(
      _path,
      data: _bodyData,
      options: _options,
      cancelToken: cancelToken,
      onSendProgress: onSendProgress,
      onReceiveProgress: onReceiveProgress,
    );

    ScrubIpsDeleteRule200Response? _responseData;

    try {
      final rawResponse = _response.data;
      _responseData = rawResponse == null ? null : _serializers.deserialize(
        rawResponse,
        specifiedType: const FullType(ScrubIpsDeleteRule200Response),
      ) as ScrubIpsDeleteRule200Response;

    } catch (error, stackTrace) {
      throw DioException(
        requestOptions: _response.requestOptions,
        response: _response,
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    return Response<ScrubIpsDeleteRule200Response>(
      data: _responseData,
      headers: _response.headers,
      isRedirect: _response.isRedirect,
      requestOptions: _response.requestOptions,
      redirects: _response.redirects,
      statusCode: _response.statusCode,
      statusMessage: _response.statusMessage,
      extra: _response.extra,
    );
  }

  /// Delete Firewall Rule
  /// Removes an existing firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.
  ///
  /// Parameters:
  /// * [id] - ScrubIp ID number
  /// * [deleteFirewallRule] 
  /// * [cancelToken] - A [CancelToken] that can be used to cancel the operation
  /// * [headers] - Can be used to add additional headers to the request
  /// * [extras] - Can be used to add flags to the request
  /// * [validateStatus] - A [ValidateStatus] callback that can be used to determine request success based on the HTTP status of the response
  /// * [onSendProgress] - A [ProgressCallback] that can be used to get the send progress
  /// * [onReceiveProgress] - A [ProgressCallback] that can be used to get the receive progress
  ///
  /// Returns a [Future] containing a [Response] with a [ScrubIpsDeleteRule200Response] as data
  /// Throws [DioException] if API call or serialization fails
  Future<Response<ScrubIpsDeleteRule200Response>> scrubIpsDeleteRule({ 
    required int id,
    required DeleteFirewallRule deleteFirewallRule,
    CancelToken? cancelToken,
    Map<String, dynamic>? headers,
    Map<String, dynamic>? extra,
    ValidateStatus? validateStatus,
    ProgressCallback? onSendProgress,
    ProgressCallback? onReceiveProgress,
  }) async {
    final _path = r'/scrub_ips/{id}/delete_rule'.replaceAll('{' r'id' '}', encodeQueryParameter(_serializers, id, const FullType(int)).toString());
    final _options = Options(
      method: r'POST',
      headers: <String, dynamic>{
        ...?headers,
      },
      extra: <String, dynamic>{
        'secure': <Map<String, String>>[
          {
            'type': 'apiKey',
            'name': 'sessionIdCookieAuth',
            'keyName': 'sessionid',
            'where': '',
          },{
            'type': 'apiKey',
            'name': 'apiKeyAuth',
            'keyName': 'X-API-KEY',
            'where': 'header',
          },{
            'type': 'apiKey',
            'name': 'sessionIdHeaderAuth',
            'keyName': 'sessionid',
            'where': 'header',
          },
        ],
        ...?extra,
      },
      contentType: 'application/json',
      validateStatus: validateStatus,
    );

    dynamic _bodyData;

    try {
      const _type = FullType(DeleteFirewallRule);
      _bodyData = _serializers.serialize(deleteFirewallRule, specifiedType: _type);

    } catch(error, stackTrace) {
      throw DioException(
         requestOptions: _options.compose(
          _dio.options,
          _path,
        ),
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    final _response = await _dio.request<Object>(
      _path,
      data: _bodyData,
      options: _options,
      cancelToken: cancelToken,
      onSendProgress: onSendProgress,
      onReceiveProgress: onReceiveProgress,
    );

    ScrubIpsDeleteRule200Response? _responseData;

    try {
      final rawResponse = _response.data;
      _responseData = rawResponse == null ? null : _serializers.deserialize(
        rawResponse,
        specifiedType: const FullType(ScrubIpsDeleteRule200Response),
      ) as ScrubIpsDeleteRule200Response;

    } catch (error, stackTrace) {
      throw DioException(
        requestOptions: _response.requestOptions,
        response: _response,
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    return Response<ScrubIpsDeleteRule200Response>(
      data: _responseData,
      headers: _response.headers,
      isRedirect: _response.isRedirect,
      requestOptions: _response.requestOptions,
      redirects: _response.redirects,
      statusCode: _response.statusCode,
      statusMessage: _response.statusMessage,
      extra: _response.extra,
    );
  }

}
