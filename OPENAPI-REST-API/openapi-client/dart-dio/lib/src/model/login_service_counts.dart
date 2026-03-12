//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'login_service_counts.g.dart';

/// Order counts per module.
///
/// Properties:
/// * [vps] - The number of total VPS orders that have been placed in our billing system.
/// * [websites] - The number of total website orders that have been placed in our billing system.
/// * [servers] - The number of total server orders that have been placed in our billing system.
@BuiltValue()
abstract class LoginServiceCounts implements Built<LoginServiceCounts, LoginServiceCountsBuilder> {
  /// The number of total VPS orders that have been placed in our billing system.
  @BuiltValueField(wireName: r'vps')
  int get vps;

  /// The number of total website orders that have been placed in our billing system.
  @BuiltValueField(wireName: r'websites')
  int get websites;

  /// The number of total server orders that have been placed in our billing system.
  @BuiltValueField(wireName: r'servers')
  int get servers;

  LoginServiceCounts._();

  factory LoginServiceCounts([void updates(LoginServiceCountsBuilder b)]) = _$LoginServiceCounts;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(LoginServiceCountsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<LoginServiceCounts> get serializer => _$LoginServiceCountsSerializer();
}

class _$LoginServiceCountsSerializer implements PrimitiveSerializer<LoginServiceCounts> {
  @override
  final Iterable<Type> types = const [LoginServiceCounts, _$LoginServiceCounts];

  @override
  final String wireName = r'LoginServiceCounts';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    LoginServiceCounts object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'vps';
    yield serializers.serialize(
      object.vps,
      specifiedType: const FullType(int),
    );
    yield r'websites';
    yield serializers.serialize(
      object.websites,
      specifiedType: const FullType(int),
    );
    yield r'servers';
    yield serializers.serialize(
      object.servers,
      specifiedType: const FullType(int),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    LoginServiceCounts object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required LoginServiceCountsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'vps':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.vps = valueDes;
          break;
        case r'websites':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.websites = valueDes;
          break;
        case r'servers':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.servers = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  LoginServiceCounts deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = LoginServiceCountsBuilder();
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

