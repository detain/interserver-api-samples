//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_service_info.g.dart';

/// MailServiceInfo
///
/// Properties:
/// * [mailId] - The ID of the mail service.
/// * [mailType] - The type of mail service.
/// * [mailCurrency] - The currency of the mail service.
/// * [mailOrderDate] - The order date of the mail service.
/// * [mailCustid] - The customer ID associated with the mail service.
/// * [mailQuota] - The mail quota for the service.
/// * [mailStatus] - The status of the mail service.
/// * [mailInvoice] - The invoice ID of the mail service.
/// * [mailUsername] - The username associated with the mail service.
/// * [mailIp] - The IP address associated with the mail service.
/// * [mailCoupon] - The coupon associated with the mail service.
/// * [mailExtra] - Additional information for the mail service.
/// * [mailServerStatus] - The server status of the mail service.
/// * [mailComment] - Additional comments for the mail service.
@BuiltValue()
abstract class MailServiceInfo implements Built<MailServiceInfo, MailServiceInfoBuilder> {
  /// The ID of the mail service.
  @BuiltValueField(wireName: r'mail_id')
  String get mailId;

  /// The type of mail service.
  @BuiltValueField(wireName: r'mail_type')
  String get mailType;

  /// The currency of the mail service.
  @BuiltValueField(wireName: r'mail_currency')
  String get mailCurrency;

  /// The order date of the mail service.
  @BuiltValueField(wireName: r'mail_order_date')
  String get mailOrderDate;

  /// The customer ID associated with the mail service.
  @BuiltValueField(wireName: r'mail_custid')
  String get mailCustid;

  /// The mail quota for the service.
  @BuiltValueField(wireName: r'mail_quota')
  String get mailQuota;

  /// The status of the mail service.
  @BuiltValueField(wireName: r'mail_status')
  String get mailStatus;

  /// The invoice ID of the mail service.
  @BuiltValueField(wireName: r'mail_invoice')
  String get mailInvoice;

  /// The username associated with the mail service.
  @BuiltValueField(wireName: r'mail_username')
  String? get mailUsername;

  /// The IP address associated with the mail service.
  @BuiltValueField(wireName: r'mail_ip')
  String? get mailIp;

  /// The coupon associated with the mail service.
  @BuiltValueField(wireName: r'mail_coupon')
  String? get mailCoupon;

  /// Additional information for the mail service.
  @BuiltValueField(wireName: r'mail_extra')
  String? get mailExtra;

  /// The server status of the mail service.
  @BuiltValueField(wireName: r'mail_server_status')
  String? get mailServerStatus;

  /// Additional comments for the mail service.
  @BuiltValueField(wireName: r'mail_comment')
  String? get mailComment;

  MailServiceInfo._();

  factory MailServiceInfo([void updates(MailServiceInfoBuilder b)]) = _$MailServiceInfo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailServiceInfoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailServiceInfo> get serializer => _$MailServiceInfoSerializer();
}

class _$MailServiceInfoSerializer implements PrimitiveSerializer<MailServiceInfo> {
  @override
  final Iterable<Type> types = const [MailServiceInfo, _$MailServiceInfo];

  @override
  final String wireName = r'MailServiceInfo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailServiceInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'mail_id';
    yield serializers.serialize(
      object.mailId,
      specifiedType: const FullType(String),
    );
    yield r'mail_type';
    yield serializers.serialize(
      object.mailType,
      specifiedType: const FullType(String),
    );
    yield r'mail_currency';
    yield serializers.serialize(
      object.mailCurrency,
      specifiedType: const FullType(String),
    );
    yield r'mail_order_date';
    yield serializers.serialize(
      object.mailOrderDate,
      specifiedType: const FullType(String),
    );
    yield r'mail_custid';
    yield serializers.serialize(
      object.mailCustid,
      specifiedType: const FullType(String),
    );
    yield r'mail_quota';
    yield serializers.serialize(
      object.mailQuota,
      specifiedType: const FullType(String),
    );
    yield r'mail_status';
    yield serializers.serialize(
      object.mailStatus,
      specifiedType: const FullType(String),
    );
    yield r'mail_invoice';
    yield serializers.serialize(
      object.mailInvoice,
      specifiedType: const FullType(String),
    );
    if (object.mailUsername != null) {
      yield r'mail_username';
      yield serializers.serialize(
        object.mailUsername,
        specifiedType: const FullType(String),
      );
    }
    if (object.mailIp != null) {
      yield r'mail_ip';
      yield serializers.serialize(
        object.mailIp,
        specifiedType: const FullType(String),
      );
    }
    if (object.mailCoupon != null) {
      yield r'mail_coupon';
      yield serializers.serialize(
        object.mailCoupon,
        specifiedType: const FullType(String),
      );
    }
    if (object.mailExtra != null) {
      yield r'mail_extra';
      yield serializers.serialize(
        object.mailExtra,
        specifiedType: const FullType(String),
      );
    }
    if (object.mailServerStatus != null) {
      yield r'mail_server_status';
      yield serializers.serialize(
        object.mailServerStatus,
        specifiedType: const FullType(String),
      );
    }
    if (object.mailComment != null) {
      yield r'mail_comment';
      yield serializers.serialize(
        object.mailComment,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    MailServiceInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailServiceInfoBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'mail_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.mailId = valueDes;
          break;
        case r'mail_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.mailType = valueDes;
          break;
        case r'mail_currency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.mailCurrency = valueDes;
          break;
        case r'mail_order_date':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.mailOrderDate = valueDes;
          break;
        case r'mail_custid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.mailCustid = valueDes;
          break;
        case r'mail_quota':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.mailQuota = valueDes;
          break;
        case r'mail_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.mailStatus = valueDes;
          break;
        case r'mail_invoice':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.mailInvoice = valueDes;
          break;
        case r'mail_username':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.mailUsername = valueDes;
          break;
        case r'mail_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.mailIp = valueDes;
          break;
        case r'mail_coupon':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.mailCoupon = valueDes;
          break;
        case r'mail_extra':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.mailExtra = valueDes;
          break;
        case r'mail_server_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.mailServerStatus = valueDes;
          break;
        case r'mail_comment':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.mailComment = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  MailServiceInfo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailServiceInfoBuilder();
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

