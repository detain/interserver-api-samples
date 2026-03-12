//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_owner_contact.g.dart';

/// Contact details for the registered domain owner.
///
/// Properties:
/// * [postalCode] 
/// * [orgName] 
/// * [country] 
/// * [status] 
/// * [state] 
/// * [firstName] 
/// * [lastName] 
/// * [address3] 
/// * [fax] 
/// * [address2] 
/// * [email] 
/// * [city] 
/// * [phone] 
/// * [address1] 
@BuiltValue()
abstract class DomainOwnerContact implements Built<DomainOwnerContact, DomainOwnerContactBuilder> {
  @BuiltValueField(wireName: r'postal_code')
  String? get postalCode;

  @BuiltValueField(wireName: r'org_name')
  String? get orgName;

  @BuiltValueField(wireName: r'country')
  String? get country;

  @BuiltValueField(wireName: r'status')
  String? get status;

  @BuiltValueField(wireName: r'state')
  String? get state;

  @BuiltValueField(wireName: r'first_name')
  String? get firstName;

  @BuiltValueField(wireName: r'last_name')
  String? get lastName;

  @BuiltValueField(wireName: r'address3')
  String? get address3;

  @BuiltValueField(wireName: r'fax')
  String? get fax;

  @BuiltValueField(wireName: r'address2')
  String? get address2;

  @BuiltValueField(wireName: r'email')
  String? get email;

  @BuiltValueField(wireName: r'city')
  String? get city;

  @BuiltValueField(wireName: r'phone')
  String? get phone;

  @BuiltValueField(wireName: r'address1')
  String? get address1;

  DomainOwnerContact._();

  factory DomainOwnerContact([void updates(DomainOwnerContactBuilder b)]) = _$DomainOwnerContact;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainOwnerContactBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainOwnerContact> get serializer => _$DomainOwnerContactSerializer();
}

class _$DomainOwnerContactSerializer implements PrimitiveSerializer<DomainOwnerContact> {
  @override
  final Iterable<Type> types = const [DomainOwnerContact, _$DomainOwnerContact];

  @override
  final String wireName = r'DomainOwnerContact';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainOwnerContact object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.postalCode != null) {
      yield r'postal_code';
      yield serializers.serialize(
        object.postalCode,
        specifiedType: const FullType(String),
      );
    }
    if (object.orgName != null) {
      yield r'org_name';
      yield serializers.serialize(
        object.orgName,
        specifiedType: const FullType(String),
      );
    }
    if (object.country != null) {
      yield r'country';
      yield serializers.serialize(
        object.country,
        specifiedType: const FullType(String),
      );
    }
    if (object.status != null) {
      yield r'status';
      yield serializers.serialize(
        object.status,
        specifiedType: const FullType(String),
      );
    }
    if (object.state != null) {
      yield r'state';
      yield serializers.serialize(
        object.state,
        specifiedType: const FullType(String),
      );
    }
    if (object.firstName != null) {
      yield r'first_name';
      yield serializers.serialize(
        object.firstName,
        specifiedType: const FullType(String),
      );
    }
    if (object.lastName != null) {
      yield r'last_name';
      yield serializers.serialize(
        object.lastName,
        specifiedType: const FullType(String),
      );
    }
    if (object.address3 != null) {
      yield r'address3';
      yield serializers.serialize(
        object.address3,
        specifiedType: const FullType(String),
      );
    }
    if (object.fax != null) {
      yield r'fax';
      yield serializers.serialize(
        object.fax,
        specifiedType: const FullType(String),
      );
    }
    if (object.address2 != null) {
      yield r'address2';
      yield serializers.serialize(
        object.address2,
        specifiedType: const FullType(String),
      );
    }
    if (object.email != null) {
      yield r'email';
      yield serializers.serialize(
        object.email,
        specifiedType: const FullType(String),
      );
    }
    if (object.city != null) {
      yield r'city';
      yield serializers.serialize(
        object.city,
        specifiedType: const FullType(String),
      );
    }
    if (object.phone != null) {
      yield r'phone';
      yield serializers.serialize(
        object.phone,
        specifiedType: const FullType(String),
      );
    }
    if (object.address1 != null) {
      yield r'address1';
      yield serializers.serialize(
        object.address1,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainOwnerContact object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainOwnerContactBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'postal_code':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.postalCode = valueDes;
          break;
        case r'org_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.orgName = valueDes;
          break;
        case r'country':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.country = valueDes;
          break;
        case r'status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.status = valueDes;
          break;
        case r'state':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.state = valueDes;
          break;
        case r'first_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.firstName = valueDes;
          break;
        case r'last_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.lastName = valueDes;
          break;
        case r'address3':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.address3 = valueDes;
          break;
        case r'fax':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.fax = valueDes;
          break;
        case r'address2':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.address2 = valueDes;
          break;
        case r'email':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.email = valueDes;
          break;
        case r'city':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.city = valueDes;
          break;
        case r'phone':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.phone = valueDes;
          break;
        case r'address1':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.address1 = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DomainOwnerContact deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainOwnerContactBuilder();
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

