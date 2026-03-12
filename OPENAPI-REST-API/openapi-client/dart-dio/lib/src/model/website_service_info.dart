//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'website_service_info.g.dart';

/// WebsiteServiceInfo
///
/// Properties:
/// * [websiteId] - Website ID
/// * [websiteServer] - Website server
/// * [websiteType] - Website type
/// * [websiteCurrency] - Currency of the website
/// * [websiteOrderDate] - Order date of the website
/// * [websiteCustid] - Customer ID of the website
/// * [websiteIp] - IP address of the website
/// * [websiteStatus] - Status of the website
/// * [websiteInvoice] - Invoice of the website
/// * [websiteCoupon] - Coupon for the website
/// * [websiteExtra] - Extra information in JSON format for the website
/// * [websiteHostname] - Hostname of the website
/// * [websiteComment] - Comment for the website
/// * [websiteUsername] - Username for the website
/// * [websiteServerStatus] - Server status of the website
@BuiltValue()
abstract class WebsiteServiceInfo implements Built<WebsiteServiceInfo, WebsiteServiceInfoBuilder> {
  /// Website ID
  @BuiltValueField(wireName: r'website_id')
  String? get websiteId;

  /// Website server
  @BuiltValueField(wireName: r'website_server')
  String? get websiteServer;

  /// Website type
  @BuiltValueField(wireName: r'website_type')
  String? get websiteType;

  /// Currency of the website
  @BuiltValueField(wireName: r'website_currency')
  String? get websiteCurrency;

  /// Order date of the website
  @BuiltValueField(wireName: r'website_order_date')
  String? get websiteOrderDate;

  /// Customer ID of the website
  @BuiltValueField(wireName: r'website_custid')
  String? get websiteCustid;

  /// IP address of the website
  @BuiltValueField(wireName: r'website_ip')
  String? get websiteIp;

  /// Status of the website
  @BuiltValueField(wireName: r'website_status')
  String? get websiteStatus;

  /// Invoice of the website
  @BuiltValueField(wireName: r'website_invoice')
  String? get websiteInvoice;

  /// Coupon for the website
  @BuiltValueField(wireName: r'website_coupon')
  String? get websiteCoupon;

  /// Extra information in JSON format for the website
  @BuiltValueField(wireName: r'website_extra')
  String? get websiteExtra;

  /// Hostname of the website
  @BuiltValueField(wireName: r'website_hostname')
  String? get websiteHostname;

  /// Comment for the website
  @BuiltValueField(wireName: r'website_comment')
  String? get websiteComment;

  /// Username for the website
  @BuiltValueField(wireName: r'website_username')
  String? get websiteUsername;

  /// Server status of the website
  @BuiltValueField(wireName: r'website_server_status')
  String? get websiteServerStatus;

  WebsiteServiceInfo._();

  factory WebsiteServiceInfo([void updates(WebsiteServiceInfoBuilder b)]) = _$WebsiteServiceInfo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WebsiteServiceInfoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<WebsiteServiceInfo> get serializer => _$WebsiteServiceInfoSerializer();
}

class _$WebsiteServiceInfoSerializer implements PrimitiveSerializer<WebsiteServiceInfo> {
  @override
  final Iterable<Type> types = const [WebsiteServiceInfo, _$WebsiteServiceInfo];

  @override
  final String wireName = r'WebsiteServiceInfo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    WebsiteServiceInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.websiteId != null) {
      yield r'website_id';
      yield serializers.serialize(
        object.websiteId,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteServer != null) {
      yield r'website_server';
      yield serializers.serialize(
        object.websiteServer,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteType != null) {
      yield r'website_type';
      yield serializers.serialize(
        object.websiteType,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteCurrency != null) {
      yield r'website_currency';
      yield serializers.serialize(
        object.websiteCurrency,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteOrderDate != null) {
      yield r'website_order_date';
      yield serializers.serialize(
        object.websiteOrderDate,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteCustid != null) {
      yield r'website_custid';
      yield serializers.serialize(
        object.websiteCustid,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteIp != null) {
      yield r'website_ip';
      yield serializers.serialize(
        object.websiteIp,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteStatus != null) {
      yield r'website_status';
      yield serializers.serialize(
        object.websiteStatus,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteInvoice != null) {
      yield r'website_invoice';
      yield serializers.serialize(
        object.websiteInvoice,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteCoupon != null) {
      yield r'website_coupon';
      yield serializers.serialize(
        object.websiteCoupon,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteExtra != null) {
      yield r'website_extra';
      yield serializers.serialize(
        object.websiteExtra,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteHostname != null) {
      yield r'website_hostname';
      yield serializers.serialize(
        object.websiteHostname,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteComment != null) {
      yield r'website_comment';
      yield serializers.serialize(
        object.websiteComment,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteUsername != null) {
      yield r'website_username';
      yield serializers.serialize(
        object.websiteUsername,
        specifiedType: const FullType(String),
      );
    }
    if (object.websiteServerStatus != null) {
      yield r'website_server_status';
      yield serializers.serialize(
        object.websiteServerStatus,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    WebsiteServiceInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required WebsiteServiceInfoBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'website_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteId = valueDes;
          break;
        case r'website_server':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteServer = valueDes;
          break;
        case r'website_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteType = valueDes;
          break;
        case r'website_currency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteCurrency = valueDes;
          break;
        case r'website_order_date':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteOrderDate = valueDes;
          break;
        case r'website_custid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteCustid = valueDes;
          break;
        case r'website_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteIp = valueDes;
          break;
        case r'website_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteStatus = valueDes;
          break;
        case r'website_invoice':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteInvoice = valueDes;
          break;
        case r'website_coupon':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteCoupon = valueDes;
          break;
        case r'website_extra':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteExtra = valueDes;
          break;
        case r'website_hostname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteHostname = valueDes;
          break;
        case r'website_comment':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteComment = valueDes;
          break;
        case r'website_username':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteUsername = valueDes;
          break;
        case r'website_server_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteServerStatus = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  WebsiteServiceInfo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WebsiteServiceInfoBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    final unhandled = <Object?>[];
    _deserializeProperties(
      serializers,
      serialized,
      specifiedType: specifiedType,
      serializedList: serializedList,
      unhandled: unhandled,
      result: result,
    );
    return result.build();
  }
}

