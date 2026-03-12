//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/monthly_counts.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'status_monthly_breakdown.g.dart';

/// Monthly mail delivery status breakdown, showing counts per status category.
///
/// Properties:
/// * [default_] 
/// * [failed] 
/// * [rejected] 
/// * [pending] 
/// * [locked] 
/// * [paid] 
@BuiltValue()
abstract class StatusMonthlyBreakdown implements Built<StatusMonthlyBreakdown, StatusMonthlyBreakdownBuilder> {
  @BuiltValueField(wireName: r'default')
  MonthlyCounts get default_;

  @BuiltValueField(wireName: r'failed')
  MonthlyCounts get failed;

  @BuiltValueField(wireName: r'rejected')
  MonthlyCounts get rejected;

  @BuiltValueField(wireName: r'pending')
  MonthlyCounts get pending;

  @BuiltValueField(wireName: r'locked')
  MonthlyCounts get locked;

  @BuiltValueField(wireName: r'paid')
  MonthlyCounts get paid;

  StatusMonthlyBreakdown._();

  factory StatusMonthlyBreakdown([void updates(StatusMonthlyBreakdownBuilder b)]) = _$StatusMonthlyBreakdown;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(StatusMonthlyBreakdownBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<StatusMonthlyBreakdown> get serializer => _$StatusMonthlyBreakdownSerializer();
}

class _$StatusMonthlyBreakdownSerializer implements PrimitiveSerializer<StatusMonthlyBreakdown> {
  @override
  final Iterable<Type> types = const [StatusMonthlyBreakdown, _$StatusMonthlyBreakdown];

  @override
  final String wireName = r'StatusMonthlyBreakdown';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    StatusMonthlyBreakdown object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'default';
    yield serializers.serialize(
      object.default_,
      specifiedType: const FullType(MonthlyCounts),
    );
    yield r'failed';
    yield serializers.serialize(
      object.failed,
      specifiedType: const FullType(MonthlyCounts),
    );
    yield r'rejected';
    yield serializers.serialize(
      object.rejected,
      specifiedType: const FullType(MonthlyCounts),
    );
    yield r'pending';
    yield serializers.serialize(
      object.pending,
      specifiedType: const FullType(MonthlyCounts),
    );
    yield r'locked';
    yield serializers.serialize(
      object.locked,
      specifiedType: const FullType(MonthlyCounts),
    );
    yield r'paid';
    yield serializers.serialize(
      object.paid,
      specifiedType: const FullType(MonthlyCounts),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    StatusMonthlyBreakdown object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required StatusMonthlyBreakdownBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'default':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(MonthlyCounts),
          ) as MonthlyCounts;
          result.default_ = valueDes;
          break;
        case r'failed':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(MonthlyCounts),
          ) as MonthlyCounts;
          result.failed = valueDes;
          break;
        case r'rejected':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(MonthlyCounts),
          ) as MonthlyCounts;
          result.rejected = valueDes;
          break;
        case r'pending':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(MonthlyCounts),
          ) as MonthlyCounts;
          result.pending = valueDes;
          break;
        case r'locked':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(MonthlyCounts),
          ) as MonthlyCounts;
          result.locked = valueDes;
          break;
        case r'paid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(MonthlyCounts),
          ) as MonthlyCounts;
          result.paid = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  StatusMonthlyBreakdown deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = StatusMonthlyBreakdownBuilder();
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

