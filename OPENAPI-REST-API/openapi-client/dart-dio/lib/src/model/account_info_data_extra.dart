//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'account_info_data_extra.g.dart';

/// AccountInfoDataExtra
///
/// Properties:
/// * [privateWhois] 
@BuiltValue()
abstract class AccountInfoDataExtra implements Built<AccountInfoDataExtra, AccountInfoDataExtraBuilder> {
  @BuiltValueField(wireName: r'private_whois')
  String? get privateWhois;

  AccountInfoDataExtra._();

  factory AccountInfoDataExtra([void updates(AccountInfoDataExtraBuilder b)]) = _$AccountInfoDataExtra;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AccountInfoDataExtraBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AccountInfoDataExtra> get serializer => _$AccountInfoDataExtraSerializer();
}

class _$AccountInfoDataExtraSerializer implements PrimitiveSerializer<AccountInfoDataExtra> {
  @override
  final Iterable<Type> types = const [AccountInfoDataExtra, _$AccountInfoDataExtra];

  @override
  final String wireName = r'AccountInfoDataExtra';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AccountInfoDataExtra object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.privateWhois != null) {
      yield r'private_whois';
      yield serializers.serialize(
        object.privateWhois,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    AccountInfoDataExtra object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required AccountInfoDataExtraBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'private_whois':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.privateWhois = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  AccountInfoDataExtra deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AccountInfoDataExtraBuilder();
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

