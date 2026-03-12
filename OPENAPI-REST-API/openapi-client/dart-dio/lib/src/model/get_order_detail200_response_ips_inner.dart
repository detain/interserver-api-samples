//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'get_order_detail200_response_ips_inner.g.dart';

/// GetOrderDetail200ResponseIpsInner
///
/// Properties:
/// * [serviceId] 
/// * [serviceModule] 
/// * [serviceHostname] 
@BuiltValue()
abstract class GetOrderDetail200ResponseIpsInner implements Built<GetOrderDetail200ResponseIpsInner, GetOrderDetail200ResponseIpsInnerBuilder> {
  @BuiltValueField(wireName: r'service_id')
  num? get serviceId;

  @BuiltValueField(wireName: r'service_module')
  String? get serviceModule;

  @BuiltValueField(wireName: r'service_hostname')
  String? get serviceHostname;

  GetOrderDetail200ResponseIpsInner._();

  factory GetOrderDetail200ResponseIpsInner([void updates(GetOrderDetail200ResponseIpsInnerBuilder b)]) = _$GetOrderDetail200ResponseIpsInner;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(GetOrderDetail200ResponseIpsInnerBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<GetOrderDetail200ResponseIpsInner> get serializer => _$GetOrderDetail200ResponseIpsInnerSerializer();
}

class _$GetOrderDetail200ResponseIpsInnerSerializer implements PrimitiveSerializer<GetOrderDetail200ResponseIpsInner> {
  @override
  final Iterable<Type> types = const [GetOrderDetail200ResponseIpsInner, _$GetOrderDetail200ResponseIpsInner];

  @override
  final String wireName = r'GetOrderDetail200ResponseIpsInner';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    GetOrderDetail200ResponseIpsInner object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.serviceId != null) {
      yield r'service_id';
      yield serializers.serialize(
        object.serviceId,
        specifiedType: const FullType(num),
      );
    }
    if (object.serviceModule != null) {
      yield r'service_module';
      yield serializers.serialize(
        object.serviceModule,
        specifiedType: const FullType(String),
      );
    }
    if (object.serviceHostname != null) {
      yield r'service_hostname';
      yield serializers.serialize(
        object.serviceHostname,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    GetOrderDetail200ResponseIpsInner object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required GetOrderDetail200ResponseIpsInnerBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'service_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.serviceId = valueDes;
          break;
        case r'service_module':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serviceModule = valueDes;
          break;
        case r'service_hostname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serviceHostname = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  GetOrderDetail200ResponseIpsInner deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = GetOrderDetail200ResponseIpsInnerBuilder();
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

