//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'quickserver_order_templates_ubuntu64.g.dart';

/// Ubuntu template details.
@BuiltValue()
abstract class QuickserverOrderTemplatesUbuntu64 implements Built<QuickserverOrderTemplatesUbuntu64, QuickserverOrderTemplatesUbuntu64Builder> {
  QuickserverOrderTemplatesUbuntu64._();

  factory QuickserverOrderTemplatesUbuntu64([void updates(QuickserverOrderTemplatesUbuntu64Builder b)]) = _$QuickserverOrderTemplatesUbuntu64;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(QuickserverOrderTemplatesUbuntu64Builder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<QuickserverOrderTemplatesUbuntu64> get serializer => _$QuickserverOrderTemplatesUbuntu64Serializer();
}

class _$QuickserverOrderTemplatesUbuntu64Serializer implements PrimitiveSerializer<QuickserverOrderTemplatesUbuntu64> {
  @override
  final Iterable<Type> types = const [QuickserverOrderTemplatesUbuntu64, _$QuickserverOrderTemplatesUbuntu64];

  @override
  final String wireName = r'QuickserverOrderTemplatesUbuntu64';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    QuickserverOrderTemplatesUbuntu64 object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    QuickserverOrderTemplatesUbuntu64 object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  QuickserverOrderTemplatesUbuntu64 deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = QuickserverOrderTemplatesUbuntu64Builder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    return result.build();
  }
}

