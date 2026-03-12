//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/json_object.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'reverse_dns_entries.g.dart';

/// The Reverse DNS entries.
///
/// Properties:
/// * [ips] - The IPs you have access to and their current reverse dns mapping.
@BuiltValue()
abstract class ReverseDnsEntries implements Built<ReverseDnsEntries, ReverseDnsEntriesBuilder> {
  /// The IPs you have access to and their current reverse dns mapping.
  @BuiltValueField(wireName: r'ips')
  BuiltMap<String, JsonObject?>? get ips;

  ReverseDnsEntries._();

  factory ReverseDnsEntries([void updates(ReverseDnsEntriesBuilder b)]) = _$ReverseDnsEntries;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ReverseDnsEntriesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ReverseDnsEntries> get serializer => _$ReverseDnsEntriesSerializer();
}

class _$ReverseDnsEntriesSerializer implements PrimitiveSerializer<ReverseDnsEntries> {
  @override
  final Iterable<Type> types = const [ReverseDnsEntries, _$ReverseDnsEntries];

  @override
  final String wireName = r'ReverseDnsEntries';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ReverseDnsEntries object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.ips != null) {
      yield r'ips';
      yield serializers.serialize(
        object.ips,
        specifiedType: const FullType(BuiltMap, [FullType(String), FullType.nullable(JsonObject)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ReverseDnsEntries object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ReverseDnsEntriesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'ips':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltMap, [FullType(String), FullType.nullable(JsonObject)]),
          ) as BuiltMap<String, JsonObject?>;
          result.ips.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ReverseDnsEntries deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ReverseDnsEntriesBuilder();
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

