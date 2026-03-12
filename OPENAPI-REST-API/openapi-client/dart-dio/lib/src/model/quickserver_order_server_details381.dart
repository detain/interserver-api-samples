//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'quickserver_order_server_details381.g.dart';

/// QuickserverOrderServerDetails381
///
/// Properties:
/// * [cpu] - CPU details of the server.
/// * [ram] - RAM capacity of the server.
/// * [hd] - Hard disk capacity of the server.
/// * [cores] - Number of CPU cores.
/// * [cost] - Cost of the server.
@BuiltValue()
abstract class QuickserverOrderServerDetails381 implements Built<QuickserverOrderServerDetails381, QuickserverOrderServerDetails381Builder> {
  /// CPU details of the server.
  @BuiltValueField(wireName: r'cpu')
  String? get cpu;

  /// RAM capacity of the server.
  @BuiltValueField(wireName: r'ram')
  String? get ram;

  /// Hard disk capacity of the server.
  @BuiltValueField(wireName: r'hd')
  String? get hd;

  /// Number of CPU cores.
  @BuiltValueField(wireName: r'cores')
  int? get cores;

  /// Cost of the server.
  @BuiltValueField(wireName: r'cost')
  String? get cost;

  QuickserverOrderServerDetails381._();

  factory QuickserverOrderServerDetails381([void updates(QuickserverOrderServerDetails381Builder b)]) = _$QuickserverOrderServerDetails381;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(QuickserverOrderServerDetails381Builder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<QuickserverOrderServerDetails381> get serializer => _$QuickserverOrderServerDetails381Serializer();
}

class _$QuickserverOrderServerDetails381Serializer implements PrimitiveSerializer<QuickserverOrderServerDetails381> {
  @override
  final Iterable<Type> types = const [QuickserverOrderServerDetails381, _$QuickserverOrderServerDetails381];

  @override
  final String wireName = r'QuickserverOrderServerDetails381';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    QuickserverOrderServerDetails381 object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.cpu != null) {
      yield r'cpu';
      yield serializers.serialize(
        object.cpu,
        specifiedType: const FullType(String),
      );
    }
    if (object.ram != null) {
      yield r'ram';
      yield serializers.serialize(
        object.ram,
        specifiedType: const FullType(String),
      );
    }
    if (object.hd != null) {
      yield r'hd';
      yield serializers.serialize(
        object.hd,
        specifiedType: const FullType(String),
      );
    }
    if (object.cores != null) {
      yield r'cores';
      yield serializers.serialize(
        object.cores,
        specifiedType: const FullType(int),
      );
    }
    if (object.cost != null) {
      yield r'cost';
      yield serializers.serialize(
        object.cost,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    QuickserverOrderServerDetails381 object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required QuickserverOrderServerDetails381Builder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'cpu':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.cpu = valueDes;
          break;
        case r'ram':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ram = valueDes;
          break;
        case r'hd':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.hd = valueDes;
          break;
        case r'cores':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.cores = valueDes;
          break;
        case r'cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.cost = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  QuickserverOrderServerDetails381 deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = QuickserverOrderServerDetails381Builder();
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

