//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/json_object.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_order_put_response.g.dart';

/// Response from VPS order validation request
///
/// Properties:
/// * [continue_] 
/// * [errors] 
/// * [couponCode] 
/// * [serviceCost] 
/// * [sliceCost] 
/// * [serviceType] 
/// * [repeatSliceCost] 
/// * [originalSliceCost] 
/// * [originalCost] 
/// * [repeatServiceCost] 
/// * [monthlyServiceCost] 
/// * [custid] 
/// * [os] 
/// * [slices] 
/// * [platform] 
/// * [controlpanel] 
/// * [period] 
/// * [location] 
/// * [version] 
/// * [hostname] 
/// * [coupon] 
/// * [rootpass] 
@BuiltValue()
abstract class VpsOrderPutResponse implements Built<VpsOrderPutResponse, VpsOrderPutResponseBuilder> {
  @BuiltValueField(wireName: r'continue')
  bool? get continue_;

  @BuiltValueField(wireName: r'errors')
  BuiltList<JsonObject?>? get errors;

  @BuiltValueField(wireName: r'coupon_code')
  int? get couponCode;

  @BuiltValueField(wireName: r'service_cost')
  int? get serviceCost;

  @BuiltValueField(wireName: r'slice_cost')
  int? get sliceCost;

  @BuiltValueField(wireName: r'service_type')
  int? get serviceType;

  @BuiltValueField(wireName: r'repeat_slice_cost')
  int? get repeatSliceCost;

  @BuiltValueField(wireName: r'original_slice_cost')
  int? get originalSliceCost;

  @BuiltValueField(wireName: r'original_cost')
  int? get originalCost;

  @BuiltValueField(wireName: r'repeat_service_cost')
  int? get repeatServiceCost;

  @BuiltValueField(wireName: r'monthly_service_cost')
  int? get monthlyServiceCost;

  @BuiltValueField(wireName: r'custid')
  String? get custid;

  @BuiltValueField(wireName: r'os')
  String? get os;

  @BuiltValueField(wireName: r'slices')
  String? get slices;

  @BuiltValueField(wireName: r'platform')
  String? get platform;

  @BuiltValueField(wireName: r'controlpanel')
  String? get controlpanel;

  @BuiltValueField(wireName: r'period')
  int? get period;

  @BuiltValueField(wireName: r'location')
  int? get location;

  @BuiltValueField(wireName: r'version')
  String? get version;

  @BuiltValueField(wireName: r'hostname')
  String? get hostname;

  @BuiltValueField(wireName: r'coupon')
  String? get coupon;

  @BuiltValueField(wireName: r'rootpass')
  String? get rootpass;

  VpsOrderPutResponse._();

  factory VpsOrderPutResponse([void updates(VpsOrderPutResponseBuilder b)]) = _$VpsOrderPutResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsOrderPutResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsOrderPutResponse> get serializer => _$VpsOrderPutResponseSerializer();
}

class _$VpsOrderPutResponseSerializer implements PrimitiveSerializer<VpsOrderPutResponse> {
  @override
  final Iterable<Type> types = const [VpsOrderPutResponse, _$VpsOrderPutResponse];

  @override
  final String wireName = r'VpsOrderPutResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsOrderPutResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.continue_ != null) {
      yield r'continue';
      yield serializers.serialize(
        object.continue_,
        specifiedType: const FullType(bool),
      );
    }
    if (object.errors != null) {
      yield r'errors';
      yield serializers.serialize(
        object.errors,
        specifiedType: const FullType(BuiltList, [FullType.nullable(JsonObject)]),
      );
    }
    if (object.couponCode != null) {
      yield r'coupon_code';
      yield serializers.serialize(
        object.couponCode,
        specifiedType: const FullType(int),
      );
    }
    if (object.serviceCost != null) {
      yield r'service_cost';
      yield serializers.serialize(
        object.serviceCost,
        specifiedType: const FullType(int),
      );
    }
    if (object.sliceCost != null) {
      yield r'slice_cost';
      yield serializers.serialize(
        object.sliceCost,
        specifiedType: const FullType(int),
      );
    }
    if (object.serviceType != null) {
      yield r'service_type';
      yield serializers.serialize(
        object.serviceType,
        specifiedType: const FullType(int),
      );
    }
    if (object.repeatSliceCost != null) {
      yield r'repeat_slice_cost';
      yield serializers.serialize(
        object.repeatSliceCost,
        specifiedType: const FullType(int),
      );
    }
    if (object.originalSliceCost != null) {
      yield r'original_slice_cost';
      yield serializers.serialize(
        object.originalSliceCost,
        specifiedType: const FullType(int),
      );
    }
    if (object.originalCost != null) {
      yield r'original_cost';
      yield serializers.serialize(
        object.originalCost,
        specifiedType: const FullType(int),
      );
    }
    if (object.repeatServiceCost != null) {
      yield r'repeat_service_cost';
      yield serializers.serialize(
        object.repeatServiceCost,
        specifiedType: const FullType(int),
      );
    }
    if (object.monthlyServiceCost != null) {
      yield r'monthly_service_cost';
      yield serializers.serialize(
        object.monthlyServiceCost,
        specifiedType: const FullType(int),
      );
    }
    if (object.custid != null) {
      yield r'custid';
      yield serializers.serialize(
        object.custid,
        specifiedType: const FullType(String),
      );
    }
    if (object.os != null) {
      yield r'os';
      yield serializers.serialize(
        object.os,
        specifiedType: const FullType(String),
      );
    }
    if (object.slices != null) {
      yield r'slices';
      yield serializers.serialize(
        object.slices,
        specifiedType: const FullType(String),
      );
    }
    if (object.platform != null) {
      yield r'platform';
      yield serializers.serialize(
        object.platform,
        specifiedType: const FullType(String),
      );
    }
    if (object.controlpanel != null) {
      yield r'controlpanel';
      yield serializers.serialize(
        object.controlpanel,
        specifiedType: const FullType(String),
      );
    }
    if (object.period != null) {
      yield r'period';
      yield serializers.serialize(
        object.period,
        specifiedType: const FullType(int),
      );
    }
    if (object.location != null) {
      yield r'location';
      yield serializers.serialize(
        object.location,
        specifiedType: const FullType(int),
      );
    }
    if (object.version != null) {
      yield r'version';
      yield serializers.serialize(
        object.version,
        specifiedType: const FullType(String),
      );
    }
    if (object.hostname != null) {
      yield r'hostname';
      yield serializers.serialize(
        object.hostname,
        specifiedType: const FullType(String),
      );
    }
    if (object.coupon != null) {
      yield r'coupon';
      yield serializers.serialize(
        object.coupon,
        specifiedType: const FullType(String),
      );
    }
    if (object.rootpass != null) {
      yield r'rootpass';
      yield serializers.serialize(
        object.rootpass,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsOrderPutResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsOrderPutResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'continue':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.continue_ = valueDes;
          break;
        case r'errors':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType.nullable(JsonObject)]),
          ) as BuiltList<JsonObject?>;
          result.errors.replace(valueDes);
          break;
        case r'coupon_code':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.couponCode = valueDes;
          break;
        case r'service_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.serviceCost = valueDes;
          break;
        case r'slice_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.sliceCost = valueDes;
          break;
        case r'service_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.serviceType = valueDes;
          break;
        case r'repeat_slice_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.repeatSliceCost = valueDes;
          break;
        case r'original_slice_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.originalSliceCost = valueDes;
          break;
        case r'original_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.originalCost = valueDes;
          break;
        case r'repeat_service_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.repeatServiceCost = valueDes;
          break;
        case r'monthly_service_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.monthlyServiceCost = valueDes;
          break;
        case r'custid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.custid = valueDes;
          break;
        case r'os':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.os = valueDes;
          break;
        case r'slices':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.slices = valueDes;
          break;
        case r'platform':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.platform = valueDes;
          break;
        case r'controlpanel':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.controlpanel = valueDes;
          break;
        case r'period':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.period = valueDes;
          break;
        case r'location':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.location = valueDes;
          break;
        case r'version':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.version = valueDes;
          break;
        case r'hostname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.hostname = valueDes;
          break;
        case r'coupon':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.coupon = valueDes;
          break;
        case r'rootpass':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.rootpass = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsOrderPutResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsOrderPutResponseBuilder();
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

