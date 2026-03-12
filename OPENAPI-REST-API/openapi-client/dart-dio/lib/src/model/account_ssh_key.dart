//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'account_ssh_key.g.dart';

/// SSH Keys
///
/// Properties:
/// * [sshKey] 
@BuiltValue()
abstract class AccountSshKey implements Built<AccountSshKey, AccountSshKeyBuilder> {
  @BuiltValueField(wireName: r'ssh_key')
  String? get sshKey;

  AccountSshKey._();

  factory AccountSshKey([void updates(AccountSshKeyBuilder b)]) = _$AccountSshKey;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AccountSshKeyBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AccountSshKey> get serializer => _$AccountSshKeySerializer();
}

class _$AccountSshKeySerializer implements PrimitiveSerializer<AccountSshKey> {
  @override
  final Iterable<Type> types = const [AccountSshKey, _$AccountSshKey];

  @override
  final String wireName = r'AccountSshKey';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AccountSshKey object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.sshKey != null) {
      yield r'ssh_key';
      yield serializers.serialize(
        object.sshKey,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    AccountSshKey object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required AccountSshKeyBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'ssh_key':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.sshKey = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  AccountSshKey deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AccountSshKeyBuilder();
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

