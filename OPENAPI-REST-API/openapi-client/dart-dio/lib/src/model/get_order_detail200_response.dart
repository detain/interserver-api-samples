//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/get_order_detail200_response_package_costs.dart';
import 'package:openapi/src/model/get_order_detail200_response_ips_inner.dart';
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/get_order_detail200_response_service_types_inner.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'get_order_detail200_response.g.dart';

/// GetOrderDetail200Response
///
/// Properties:
/// * [packageCosts] 
/// * [serviceTypes] 
/// * [ips] 
@BuiltValue()
abstract class GetOrderDetail200Response implements Built<GetOrderDetail200Response, GetOrderDetail200ResponseBuilder> {
  @BuiltValueField(wireName: r'packageCosts')
  GetOrderDetail200ResponsePackageCosts? get packageCosts;

  @BuiltValueField(wireName: r'serviceTypes')
  BuiltList<GetOrderDetail200ResponseServiceTypesInner>? get serviceTypes;

  @BuiltValueField(wireName: r'ips')
  BuiltList<GetOrderDetail200ResponseIpsInner>? get ips;

  GetOrderDetail200Response._();

  factory GetOrderDetail200Response([void updates(GetOrderDetail200ResponseBuilder b)]) = _$GetOrderDetail200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(GetOrderDetail200ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<GetOrderDetail200Response> get serializer => _$GetOrderDetail200ResponseSerializer();
}

class _$GetOrderDetail200ResponseSerializer implements PrimitiveSerializer<GetOrderDetail200Response> {
  @override
  final Iterable<Type> types = const [GetOrderDetail200Response, _$GetOrderDetail200Response];

  @override
  final String wireName = r'GetOrderDetail200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    GetOrderDetail200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.packageCosts != null) {
      yield r'packageCosts';
      yield serializers.serialize(
        object.packageCosts,
        specifiedType: const FullType(GetOrderDetail200ResponsePackageCosts),
      );
    }
    if (object.serviceTypes != null) {
      yield r'serviceTypes';
      yield serializers.serialize(
        object.serviceTypes,
        specifiedType: const FullType(BuiltList, [FullType(GetOrderDetail200ResponseServiceTypesInner)]),
      );
    }
    if (object.ips != null) {
      yield r'ips';
      yield serializers.serialize(
        object.ips,
        specifiedType: const FullType(BuiltList, [FullType(GetOrderDetail200ResponseIpsInner)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    GetOrderDetail200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required GetOrderDetail200ResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'packageCosts':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(GetOrderDetail200ResponsePackageCosts),
          ) as GetOrderDetail200ResponsePackageCosts;
          result.packageCosts.replace(valueDes);
          break;
        case r'serviceTypes':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(GetOrderDetail200ResponseServiceTypesInner)]),
          ) as BuiltList<GetOrderDetail200ResponseServiceTypesInner>;
          result.serviceTypes.replace(valueDes);
          break;
        case r'ips':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(GetOrderDetail200ResponseIpsInner)]),
          ) as BuiltList<GetOrderDetail200ResponseIpsInner>;
          result.ips.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  GetOrderDetail200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = GetOrderDetail200ResponseBuilder();
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

