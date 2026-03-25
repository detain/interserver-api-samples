//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'dart:core';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';
import 'package:one_of/one_of.dart';

part 'view_mail_log_start_date_parameter.g.dart';

/// ViewMailLogStartDateParameter
@BuiltValue()
abstract class ViewMailLogStartDateParameter implements Built<ViewMailLogStartDateParameter, ViewMailLogStartDateParameterBuilder> {
  /// One Of [String], [int]
  OneOf get oneOf;

  ViewMailLogStartDateParameter._();

  factory ViewMailLogStartDateParameter([void updates(ViewMailLogStartDateParameterBuilder b)]) = _$ViewMailLogStartDateParameter;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ViewMailLogStartDateParameterBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ViewMailLogStartDateParameter> get serializer => _$ViewMailLogStartDateParameterSerializer();
}

class _$ViewMailLogStartDateParameterSerializer implements PrimitiveSerializer<ViewMailLogStartDateParameter> {
  @override
  final Iterable<Type> types = const [ViewMailLogStartDateParameter, _$ViewMailLogStartDateParameter];

  @override
  final String wireName = r'ViewMailLogStartDateParameter';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ViewMailLogStartDateParameter object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    ViewMailLogStartDateParameter object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final oneOf = object.oneOf;
    return serializers.serialize(oneOf.value, specifiedType: FullType(oneOf.valueType))!;
  }

  @override
  ViewMailLogStartDateParameter deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ViewMailLogStartDateParameterBuilder();
    Object? oneOfDataSrc;
    final targetType = const FullType(OneOf, [FullType(int), FullType(String), ]);
    oneOfDataSrc = serialized;
    result.oneOf = serializers.deserialize(oneOfDataSrc, specifiedType: targetType) as OneOf;
    return result.build();
  }
}

