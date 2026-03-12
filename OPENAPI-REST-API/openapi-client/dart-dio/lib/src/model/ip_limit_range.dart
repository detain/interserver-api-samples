//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'ip_limit_range.g.dart';

/// The lower and upper bounds of an ip range.
///
/// Properties:
/// * [start] - The begining (or first) IP address in the range.
/// * [end] - The ending (or last) IP address in the range.
@BuiltValue()
abstract class IpLimitRange implements Built<IpLimitRange, IpLimitRangeBuilder> {
  /// The begining (or first) IP address in the range.
  @BuiltValueField(wireName: r'start')
  String get start;

  /// The ending (or last) IP address in the range.
  @BuiltValueField(wireName: r'end')
  String get end;

  IpLimitRange._();

  factory IpLimitRange([void updates(IpLimitRangeBuilder b)]) = _$IpLimitRange;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(IpLimitRangeBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<IpLimitRange> get serializer => _$IpLimitRangeSerializer();
}

class _$IpLimitRangeSerializer implements PrimitiveSerializer<IpLimitRange> {
  @override
  final Iterable<Type> types = const [IpLimitRange, _$IpLimitRange];

  @override
  final String wireName = r'IpLimitRange';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    IpLimitRange object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'start';
    yield serializers.serialize(
      object.start,
      specifiedType: const FullType(String),
    );
    yield r'end';
    yield serializers.serialize(
      object.end,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    IpLimitRange object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required IpLimitRangeBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'start':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.start = valueDes;
          break;
        case r'end':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.end = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  IpLimitRange deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = IpLimitRangeBuilder();
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

