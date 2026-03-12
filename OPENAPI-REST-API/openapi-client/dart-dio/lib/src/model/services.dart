//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/service.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'services.g.dart';

/// The list of service packages.
@BuiltValue()
abstract class Services implements Built<Services, ServicesBuilder> {
  Services._();

  factory Services([void updates(ServicesBuilder b)]) = _$Services;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServicesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<Services> get serializer => _$ServicesSerializer();
}

class _$ServicesSerializer implements PrimitiveSerializer<Services> {
  @override
  final Iterable<Type> types = const [Services, _$Services];

  @override
  final String wireName = r'Services';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    Services object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    Services object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  Services deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServicesBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    return result.build();
  }
}

