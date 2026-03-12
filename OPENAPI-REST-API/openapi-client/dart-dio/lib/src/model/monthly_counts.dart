//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'monthly_counts.g.dart';

/// A map of month labels (e.g., \"2024-01\") to counts for a specific mail status.
@BuiltValue()
abstract class MonthlyCounts implements Built<MonthlyCounts, MonthlyCountsBuilder> {
  MonthlyCounts._();

  factory MonthlyCounts([void updates(MonthlyCountsBuilder b)]) = _$MonthlyCounts;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MonthlyCountsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MonthlyCounts> get serializer => _$MonthlyCountsSerializer();
}

class _$MonthlyCountsSerializer implements PrimitiveSerializer<MonthlyCounts> {
  @override
  final Iterable<Type> types = const [MonthlyCounts, _$MonthlyCounts];

  @override
  final String wireName = r'MonthlyCounts';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MonthlyCounts object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    MonthlyCounts object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  MonthlyCounts deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MonthlyCountsBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    return result.build();
  }
}

