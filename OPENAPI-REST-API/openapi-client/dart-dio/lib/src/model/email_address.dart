//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'email_address.g.dart';

/// an email address
///
/// Properties:
/// * [email] - an email address
@BuiltValue()
abstract class EmailAddress implements Built<EmailAddress, EmailAddressBuilder> {
  /// an email address
  @BuiltValueField(wireName: r'email')
  String? get email;

  EmailAddress._();

  factory EmailAddress([void updates(EmailAddressBuilder b)]) = _$EmailAddress;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(EmailAddressBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<EmailAddress> get serializer => _$EmailAddressSerializer();
}

class _$EmailAddressSerializer implements PrimitiveSerializer<EmailAddress> {
  @override
  final Iterable<Type> types = const [EmailAddress, _$EmailAddress];

  @override
  final String wireName = r'EmailAddress';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    EmailAddress object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.email != null) {
      yield r'email';
      yield serializers.serialize(
        object.email,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    EmailAddress object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required EmailAddressBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'email':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.email = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  EmailAddress deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = EmailAddressBuilder();
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

