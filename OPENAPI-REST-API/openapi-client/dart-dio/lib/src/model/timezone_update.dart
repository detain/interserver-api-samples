//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'timezone_update.g.dart';

/// The request to update the time zone of a vps.
///
/// Properties:
/// * [timezone] - The time zone
@BuiltValue()
abstract class TimezoneUpdate implements Built<TimezoneUpdate, TimezoneUpdateBuilder> {
  /// The time zone
  @BuiltValueField(wireName: r'timezone')
  String get timezone;

  TimezoneUpdate._();

  factory TimezoneUpdate([void updates(TimezoneUpdateBuilder b)]) = _$TimezoneUpdate;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(TimezoneUpdateBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<TimezoneUpdate> get serializer => _$TimezoneUpdateSerializer();
}

class _$TimezoneUpdateSerializer implements PrimitiveSerializer<TimezoneUpdate> {
  @override
  final Iterable<Type> types = const [TimezoneUpdate, _$TimezoneUpdate];

  @override
  final String wireName = r'TimezoneUpdate';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    TimezoneUpdate object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'timezone';
    yield serializers.serialize(
      object.timezone,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    TimezoneUpdate object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required TimezoneUpdateBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'timezone':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.timezone = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  TimezoneUpdate deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = TimezoneUpdateBuilder();
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

