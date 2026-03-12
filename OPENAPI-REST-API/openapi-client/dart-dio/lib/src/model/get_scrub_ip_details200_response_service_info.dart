//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'get_scrub_ip_details200_response_service_info.g.dart';

/// GetScrubIpDetails200ResponseServiceInfo
///
/// Properties:
/// * [scrubIpId] 
/// * [scrubIpType] 
/// * [scrubIpCustid] 
/// * [scrubIpOrderDate] 
/// * [scrubIpIp] 
/// * [scrubIpServiceId] 
/// * [scrubIpServiceModule] 
/// * [scrubIpStatus] 
/// * [scrubIpInvoice] 
/// * [scrubIpCurrency] 
/// * [scrubIpCoupon] 
/// * [scrubIpComment] 
@BuiltValue()
abstract class GetScrubIpDetails200ResponseServiceInfo implements Built<GetScrubIpDetails200ResponseServiceInfo, GetScrubIpDetails200ResponseServiceInfoBuilder> {
  @BuiltValueField(wireName: r'scrub_ip_id')
  String? get scrubIpId;

  @BuiltValueField(wireName: r'scrub_ip_type')
  String? get scrubIpType;

  @BuiltValueField(wireName: r'scrub_ip_custid')
  String? get scrubIpCustid;

  @BuiltValueField(wireName: r'scrub_ip_order_date')
  String? get scrubIpOrderDate;

  @BuiltValueField(wireName: r'scrub_ip_ip')
  String? get scrubIpIp;

  @BuiltValueField(wireName: r'scrub_ip_service_id')
  String? get scrubIpServiceId;

  @BuiltValueField(wireName: r'scrub_ip_service_module')
  String? get scrubIpServiceModule;

  @BuiltValueField(wireName: r'scrub_ip_status')
  GetScrubIpDetails200ResponseServiceInfoScrubIpStatusEnum? get scrubIpStatus;
  // enum scrubIpStatusEnum {  active,  pending,  canceled,  expired,  };

  @BuiltValueField(wireName: r'scrub_ip_invoice')
  String? get scrubIpInvoice;

  @BuiltValueField(wireName: r'scrub_ip_currency')
  String? get scrubIpCurrency;

  @BuiltValueField(wireName: r'scrub_ip_coupon')
  String? get scrubIpCoupon;

  @BuiltValueField(wireName: r'scrub_ip_comment')
  String? get scrubIpComment;

  GetScrubIpDetails200ResponseServiceInfo._();

  factory GetScrubIpDetails200ResponseServiceInfo([void updates(GetScrubIpDetails200ResponseServiceInfoBuilder b)]) = _$GetScrubIpDetails200ResponseServiceInfo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(GetScrubIpDetails200ResponseServiceInfoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<GetScrubIpDetails200ResponseServiceInfo> get serializer => _$GetScrubIpDetails200ResponseServiceInfoSerializer();
}

class _$GetScrubIpDetails200ResponseServiceInfoSerializer implements PrimitiveSerializer<GetScrubIpDetails200ResponseServiceInfo> {
  @override
  final Iterable<Type> types = const [GetScrubIpDetails200ResponseServiceInfo, _$GetScrubIpDetails200ResponseServiceInfo];

  @override
  final String wireName = r'GetScrubIpDetails200ResponseServiceInfo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    GetScrubIpDetails200ResponseServiceInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.scrubIpId != null) {
      yield r'scrub_ip_id';
      yield serializers.serialize(
        object.scrubIpId,
        specifiedType: const FullType(String),
      );
    }
    if (object.scrubIpType != null) {
      yield r'scrub_ip_type';
      yield serializers.serialize(
        object.scrubIpType,
        specifiedType: const FullType(String),
      );
    }
    if (object.scrubIpCustid != null) {
      yield r'scrub_ip_custid';
      yield serializers.serialize(
        object.scrubIpCustid,
        specifiedType: const FullType(String),
      );
    }
    if (object.scrubIpOrderDate != null) {
      yield r'scrub_ip_order_date';
      yield serializers.serialize(
        object.scrubIpOrderDate,
        specifiedType: const FullType(String),
      );
    }
    if (object.scrubIpIp != null) {
      yield r'scrub_ip_ip';
      yield serializers.serialize(
        object.scrubIpIp,
        specifiedType: const FullType(String),
      );
    }
    if (object.scrubIpServiceId != null) {
      yield r'scrub_ip_service_id';
      yield serializers.serialize(
        object.scrubIpServiceId,
        specifiedType: const FullType(String),
      );
    }
    if (object.scrubIpServiceModule != null) {
      yield r'scrub_ip_service_module';
      yield serializers.serialize(
        object.scrubIpServiceModule,
        specifiedType: const FullType(String),
      );
    }
    if (object.scrubIpStatus != null) {
      yield r'scrub_ip_status';
      yield serializers.serialize(
        object.scrubIpStatus,
        specifiedType: const FullType(GetScrubIpDetails200ResponseServiceInfoScrubIpStatusEnum),
      );
    }
    if (object.scrubIpInvoice != null) {
      yield r'scrub_ip_invoice';
      yield serializers.serialize(
        object.scrubIpInvoice,
        specifiedType: const FullType(String),
      );
    }
    if (object.scrubIpCurrency != null) {
      yield r'scrub_ip_currency';
      yield serializers.serialize(
        object.scrubIpCurrency,
        specifiedType: const FullType(String),
      );
    }
    if (object.scrubIpCoupon != null) {
      yield r'scrub_ip_coupon';
      yield serializers.serialize(
        object.scrubIpCoupon,
        specifiedType: const FullType(String),
      );
    }
    if (object.scrubIpComment != null) {
      yield r'scrub_ip_comment';
      yield serializers.serialize(
        object.scrubIpComment,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    GetScrubIpDetails200ResponseServiceInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required GetScrubIpDetails200ResponseServiceInfoBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'scrub_ip_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.scrubIpId = valueDes;
          break;
        case r'scrub_ip_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.scrubIpType = valueDes;
          break;
        case r'scrub_ip_custid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.scrubIpCustid = valueDes;
          break;
        case r'scrub_ip_order_date':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.scrubIpOrderDate = valueDes;
          break;
        case r'scrub_ip_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.scrubIpIp = valueDes;
          break;
        case r'scrub_ip_service_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.scrubIpServiceId = valueDes;
          break;
        case r'scrub_ip_service_module':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.scrubIpServiceModule = valueDes;
          break;
        case r'scrub_ip_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(GetScrubIpDetails200ResponseServiceInfoScrubIpStatusEnum),
          ) as GetScrubIpDetails200ResponseServiceInfoScrubIpStatusEnum;
          result.scrubIpStatus = valueDes;
          break;
        case r'scrub_ip_invoice':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.scrubIpInvoice = valueDes;
          break;
        case r'scrub_ip_currency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.scrubIpCurrency = valueDes;
          break;
        case r'scrub_ip_coupon':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.scrubIpCoupon = valueDes;
          break;
        case r'scrub_ip_comment':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.scrubIpComment = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  GetScrubIpDetails200ResponseServiceInfo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = GetScrubIpDetails200ResponseServiceInfoBuilder();
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

class GetScrubIpDetails200ResponseServiceInfoScrubIpStatusEnum extends EnumClass {

  @BuiltValueEnumConst(wireName: r'active')
  static const GetScrubIpDetails200ResponseServiceInfoScrubIpStatusEnum active = _$getScrubIpDetails200ResponseServiceInfoScrubIpStatusEnum_active;
  @BuiltValueEnumConst(wireName: r'pending')
  static const GetScrubIpDetails200ResponseServiceInfoScrubIpStatusEnum pending = _$getScrubIpDetails200ResponseServiceInfoScrubIpStatusEnum_pending;
  @BuiltValueEnumConst(wireName: r'canceled')
  static const GetScrubIpDetails200ResponseServiceInfoScrubIpStatusEnum canceled = _$getScrubIpDetails200ResponseServiceInfoScrubIpStatusEnum_canceled;
  @BuiltValueEnumConst(wireName: r'expired')
  static const GetScrubIpDetails200ResponseServiceInfoScrubIpStatusEnum expired = _$getScrubIpDetails200ResponseServiceInfoScrubIpStatusEnum_expired;

  static Serializer<GetScrubIpDetails200ResponseServiceInfoScrubIpStatusEnum> get serializer => _$getScrubIpDetails200ResponseServiceInfoScrubIpStatusEnumSerializer;

  const GetScrubIpDetails200ResponseServiceInfoScrubIpStatusEnum._(String name): super(name);

  static BuiltSet<GetScrubIpDetails200ResponseServiceInfoScrubIpStatusEnum> get values => _$getScrubIpDetails200ResponseServiceInfoScrubIpStatusEnumValues;
  static GetScrubIpDetails200ResponseServiceInfoScrubIpStatusEnum valueOf(String name) => _$getScrubIpDetails200ResponseServiceInfoScrubIpStatusEnumValueOf(name);
}

