//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/service_type.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'service_types.g.dart';

/// The listing of service types
@BuiltValue()
abstract class ServiceTypes implements Built<ServiceTypes, ServiceTypesBuilder> {
  ServiceTypes._();

  factory ServiceTypes([void updates(ServiceTypesBuilder b)]) = _$ServiceTypes;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServiceTypesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServiceTypes> get serializer => _$ServiceTypesSerializer();
}

class _$ServiceTypesSerializer implements PrimitiveSerializer<ServiceTypes> {
  @override
  final Iterable<Type> types = const [ServiceTypes, _$ServiceTypes];

  @override
  final String wireName = r'ServiceTypes';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServiceTypes object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    ServiceTypes object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  ServiceTypes deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServiceTypesBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    return result.build();
  }
}

