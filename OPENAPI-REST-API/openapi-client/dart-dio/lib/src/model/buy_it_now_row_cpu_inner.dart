//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/buy_it_now_row_cpu_inner_one_of.dart';
import 'dart:core';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';
import 'package:one_of/one_of.dart';

part 'buy_it_now_row_cpu_inner.g.dart';

/// BuyItNowRowCpuInner
///
/// Properties:
/// * [img] 
/// * [type] 
/// * [speed] 
/// * [numCpus] 
/// * [numCores] 
@BuiltValue()
abstract class BuyItNowRowCpuInner implements Built<BuyItNowRowCpuInner, BuyItNowRowCpuInnerBuilder> {
  /// One Of [BuyItNowRowCpuInnerOneOf], [String]
  OneOf get oneOf;

  BuyItNowRowCpuInner._();

  factory BuyItNowRowCpuInner([void updates(BuyItNowRowCpuInnerBuilder b)]) = _$BuyItNowRowCpuInner;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BuyItNowRowCpuInnerBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BuyItNowRowCpuInner> get serializer => _$BuyItNowRowCpuInnerSerializer();
}

class _$BuyItNowRowCpuInnerSerializer implements PrimitiveSerializer<BuyItNowRowCpuInner> {
  @override
  final Iterable<Type> types = const [BuyItNowRowCpuInner, _$BuyItNowRowCpuInner];

  @override
  final String wireName = r'BuyItNowRowCpuInner';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BuyItNowRowCpuInner object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    BuyItNowRowCpuInner object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final oneOf = object.oneOf;
    return serializers.serialize(oneOf.value, specifiedType: FullType(oneOf.valueType))!;
  }

  @override
  BuyItNowRowCpuInner deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BuyItNowRowCpuInnerBuilder();
    Object? oneOfDataSrc;
    final targetType = const FullType(OneOf, [FullType(String), FullType(BuyItNowRowCpuInnerOneOf), ]);
    oneOfDataSrc = serialized;
    result.oneOf = serializers.deserialize(oneOfDataSrc, specifiedType: targetType) as OneOf;
    return result.build();
  }
}

