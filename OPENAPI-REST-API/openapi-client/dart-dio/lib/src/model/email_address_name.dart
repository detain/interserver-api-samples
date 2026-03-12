//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'email_address_name.g.dart';

/// An email contact.
///
/// Properties:
/// * [email] - The email address.
/// * [name] - Name to use for the sending contact.
@BuiltValue()
abstract class EmailAddressName implements Built<EmailAddressName, EmailAddressNameBuilder> {
  /// The email address.
  @BuiltValueField(wireName: r'email')
  String get email;

  /// Name to use for the sending contact.
  @BuiltValueField(wireName: r'name')
  String? get name;

  EmailAddressName._();

  factory EmailAddressName([void updates(EmailAddressNameBuilder b)]) = _$EmailAddressName;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(EmailAddressNameBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<EmailAddressName> get serializer => _$EmailAddressNameSerializer();
}

class _$EmailAddressNameSerializer implements PrimitiveSerializer<EmailAddressName> {
  @override
  final Iterable<Type> types = const [EmailAddressName, _$EmailAddressName];

  @override
  final String wireName = r'EmailAddressName';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    EmailAddressName object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'email';
    yield serializers.serialize(
      object.email,
      specifiedType: const FullType(String),
    );
    if (object.name != null) {
      yield r'name';
      yield serializers.serialize(
        object.name,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    EmailAddressName object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required EmailAddressNameBuilder result,
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
        case r'name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.name = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  EmailAddressName deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = EmailAddressNameBuilder();
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

