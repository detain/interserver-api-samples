//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'get_order_detail200_response_service_types_inner.g.dart';

/// GetOrderDetail200ResponseServiceTypesInner
///
/// Properties:
/// * [servicesId] 
/// * [servicesName] 
/// * [servicesCost] 
/// * [servicesField1] 
/// * [servicesField2] 
/// * [servicesModule] 
@BuiltValue()
abstract class GetOrderDetail200ResponseServiceTypesInner implements Built<GetOrderDetail200ResponseServiceTypesInner, GetOrderDetail200ResponseServiceTypesInnerBuilder> {
  @BuiltValueField(wireName: r'services_id')
  int? get servicesId;

  @BuiltValueField(wireName: r'services_name')
  String? get servicesName;

  @BuiltValueField(wireName: r'services_cost')
  int? get servicesCost;

  @BuiltValueField(wireName: r'services_field1')
  String? get servicesField1;

  @BuiltValueField(wireName: r'services_field2')
  String? get servicesField2;

  @BuiltValueField(wireName: r'services_module')
  String? get servicesModule;

  GetOrderDetail200ResponseServiceTypesInner._();

  factory GetOrderDetail200ResponseServiceTypesInner([void updates(GetOrderDetail200ResponseServiceTypesInnerBuilder b)]) = _$GetOrderDetail200ResponseServiceTypesInner;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(GetOrderDetail200ResponseServiceTypesInnerBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<GetOrderDetail200ResponseServiceTypesInner> get serializer => _$GetOrderDetail200ResponseServiceTypesInnerSerializer();
}

class _$GetOrderDetail200ResponseServiceTypesInnerSerializer implements PrimitiveSerializer<GetOrderDetail200ResponseServiceTypesInner> {
  @override
  final Iterable<Type> types = const [GetOrderDetail200ResponseServiceTypesInner, _$GetOrderDetail200ResponseServiceTypesInner];

  @override
  final String wireName = r'GetOrderDetail200ResponseServiceTypesInner';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    GetOrderDetail200ResponseServiceTypesInner object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.servicesId != null) {
      yield r'services_id';
      yield serializers.serialize(
        object.servicesId,
        specifiedType: const FullType(int),
      );
    }
    if (object.servicesName != null) {
      yield r'services_name';
      yield serializers.serialize(
        object.servicesName,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesCost != null) {
      yield r'services_cost';
      yield serializers.serialize(
        object.servicesCost,
        specifiedType: const FullType(int),
      );
    }
    if (object.servicesField1 != null) {
      yield r'services_field1';
      yield serializers.serialize(
        object.servicesField1,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesField2 != null) {
      yield r'services_field2';
      yield serializers.serialize(
        object.servicesField2,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesModule != null) {
      yield r'services_module';
      yield serializers.serialize(
        object.servicesModule,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    GetOrderDetail200ResponseServiceTypesInner object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required GetOrderDetail200ResponseServiceTypesInnerBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'services_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.servicesId = valueDes;
          break;
        case r'services_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesName = valueDes;
          break;
        case r'services_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.servicesCost = valueDes;
          break;
        case r'services_field1':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesField1 = valueDes;
          break;
        case r'services_field2':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesField2 = valueDes;
          break;
        case r'services_module':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesModule = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  GetOrderDetail200ResponseServiceTypesInner deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = GetOrderDetail200ResponseServiceTypesInnerBuilder();
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

