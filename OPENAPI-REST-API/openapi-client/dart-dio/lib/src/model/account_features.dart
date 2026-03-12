//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'account_features.g.dart';

/// Account Features data.
///
/// Properties:
/// * [disableReset] 
/// * [disableReinstall] 
@BuiltValue()
abstract class AccountFeatures implements Built<AccountFeatures, AccountFeaturesBuilder> {
  @BuiltValueField(wireName: r'disable_reset')
  int? get disableReset;

  @BuiltValueField(wireName: r'disable_reinstall')
  int? get disableReinstall;

  AccountFeatures._();

  factory AccountFeatures([void updates(AccountFeaturesBuilder b)]) = _$AccountFeatures;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AccountFeaturesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AccountFeatures> get serializer => _$AccountFeaturesSerializer();
}

class _$AccountFeaturesSerializer implements PrimitiveSerializer<AccountFeatures> {
  @override
  final Iterable<Type> types = const [AccountFeatures, _$AccountFeatures];

  @override
  final String wireName = r'AccountFeatures';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AccountFeatures object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.disableReset != null) {
      yield r'disable_reset';
      yield serializers.serialize(
        object.disableReset,
        specifiedType: const FullType(int),
      );
    }
    if (object.disableReinstall != null) {
      yield r'disable_reinstall';
      yield serializers.serialize(
        object.disableReinstall,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    AccountFeatures object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required AccountFeaturesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'disable_reset':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.disableReset = valueDes;
          break;
        case r'disable_reinstall':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.disableReinstall = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  AccountFeatures deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AccountFeaturesBuilder();
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

