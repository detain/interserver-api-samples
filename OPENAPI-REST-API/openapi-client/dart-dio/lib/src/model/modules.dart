//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/module_settings.dart';
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'modules.g.dart';

/// The modules and settings.
@BuiltValue()
abstract class Modules implements Built<Modules, ModulesBuilder> {
  Modules._();

  factory Modules([void updates(ModulesBuilder b)]) = _$Modules;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ModulesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<Modules> get serializer => _$ModulesSerializer();
}

class _$ModulesSerializer implements PrimitiveSerializer<Modules> {
  @override
  final Iterable<Type> types = const [Modules, _$Modules];

  @override
  final String wireName = r'Modules';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    Modules object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    Modules object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  Modules deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ModulesBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    return result.build();
  }
}

